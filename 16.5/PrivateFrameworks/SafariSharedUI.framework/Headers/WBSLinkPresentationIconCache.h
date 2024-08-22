// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSLINKPRESENTATIONICONCACHE_H
#define WBSLINKPRESENTATIONICONCACHE_H

@class NSString;
@protocol WBSSiteMetadataProvider, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataImageCache.h"

@interface WBSLinkPresentationIconCache : NSObject <WBSSiteMetadataProvider>

 {
    WBSSiteMetadataImageCache *_imageCache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


-(BOOL)canHandleRequest:(id)arg0 ;
-(id)imageForHost:(id)arg0 ;
-(id)initWithImageDirectoryURL:(id)arg0 ;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)dealloc;
-(void)emptyCaches;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)purgeUnneededCacheEntries;
-(void)saveImage:(id)arg0 forHost:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;


@end


#endif