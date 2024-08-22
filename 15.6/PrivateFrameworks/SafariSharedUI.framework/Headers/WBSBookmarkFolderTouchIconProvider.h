// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSBOOKMARKFOLDERTOUCHICONPROVIDER_H
#define WBSBOOKMARKFOLDERTOUCHICONPROVIDER_H

@class NSMutableDictionary, NSArray, UIColor, NSString;
@protocol WBSSiteMetadataProvider, OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>


@interface WBSBookmarkFolderTouchIconProvider : NSObject <WBSSiteMetadataProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableDictionary *_requestsToRequestInfos;
    NSMutableDictionary *_folderUUIDsToTouchIconInfo;
}


@property (readonly, nonatomic) NSArray *allFolderUUIDs;
@property (readonly) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


+(BOOL)_appUsesLeftToRightLayout;
-(BOOL)canHandleRequest:(id)arg0 ;
-(id)_drawTouchIconForRequest:(id)arg0 ;
-(id)_responseHandlerForRequest:(SEL)arg0 thumbnailIndex:(id)arg1 ;
-(id)bookmarkUUIDForRequest:(id)arg0 ;
-(id)defaultFolderIconForRequest:(id)arg0 ;
-(id)displayableFolderContentsForRequest:(id)arg0 ;
-(id)init;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(id)touchIconRequestForBookmark:(id)arg0 inFolderWithRequest:(id)arg1 ;
-(void)_coalesceResponseDispatchForRequest:(id)arg0 ;
-(void)_dispatchResponseForRequest:(id)arg0 ;
-(void)_dispatchResponseForRequest:(id)arg0 touchIcon:(id)arg1 ;
-(void)_prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)didCreateTouchIcon:(id)arg0 ;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)removeInfoForFolderWithUUID:(id)arg0 ;
-(void)removeInfoForFoldersWithUUIDs:(id)arg0 ;
-(void)stopWatchingUpdatesForRequest:(id)arg0 ;


@end


#endif