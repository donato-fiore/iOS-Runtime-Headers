// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATDOWNLOADPROGRESSMANAGER_H
#define ATDOWNLOADPROGRESSMANAGER_H

@class NSXPCListener, NSMutableSet, NSString;
@protocol NSXPCListenerDelegate, ATDownloadProgressListener, ATAssetLinkControllerObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATDownloadProgressManager : NSObject <NSXPCListenerDelegate, ATDownloadProgressListener, ATAssetLinkControllerObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    NSMutableSet *_downloadObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)assetLinkController:(id)arg0 didChangeDownloadStateForAssets:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didEnqueueAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didFinishAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didProcessFinishedAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)getAllDownloadsWithReplyBlock:(id)arg0 ;
-(void)prioritizeDownloadWithStoreForLibraryIdentifier:(NSInteger)arg0 withReplyBlock:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif