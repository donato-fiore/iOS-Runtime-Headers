// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATLOCALCLOUDASSETLINK_H
#define ATLOCALCLOUDASSETLINK_H

@class NSMutableOrderedSet, NSMutableDictionary, NSString;
@protocol ATMessageLinkObserver, ATAssetLink, OS_dispatch_queue, ATAssetLinkDelegate;

#import <Foundation/Foundation.h>

#import "ATLegacyMessageLink.h"

@interface ATLocalCloudAssetLink : NSObject <ATMessageLinkObserver, ATAssetLink>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_queue;
    ATLegacyMessageLink *_messageLink;
    NSMutableOrderedSet *_queuedAssets;
    NSMutableDictionary *_activeRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) Class superclass;


-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)initWithMessageLink:(id)arg0 ;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 ;
-(void)_handleLocalCloudDownloadResponse:(id)arg0 ;
-(void)_requestNextDownload;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif