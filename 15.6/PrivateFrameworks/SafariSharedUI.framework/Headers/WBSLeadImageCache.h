// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSLEADIMAGECACHE_H
#define WBSLEADIMAGECACHE_H

@class NSMutableDictionary, NSString, NSURL;
@protocol WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider, OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataImageCache.h"

@interface WBSLeadImageCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>

 {
    WBSSiteMetadataImageCache *_imageCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_urlStringToRequestSets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


-(BOOL)canHandleRequest:(id)arg0 ;
-(id)imageForURL:(id)arg0 ;
-(id)initWithImageDirectoryURL:(id)arg0 ;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(void)_addRequest:(id)arg0 ;
-(void)emptyCaches;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)purgeUnneededCacheEntries;
-(void)saveImage:(id)arg0 forURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)savePendingChangesBeforeTermination;
-(void)siteMetadataImageCache:(id)arg0 didFinishLoadingImage:(id)arg1 forKeyString:(id)arg2 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg0 ;
-(void)stopWatchingUpdatesForRequest:(id)arg0 ;


@end


#endif