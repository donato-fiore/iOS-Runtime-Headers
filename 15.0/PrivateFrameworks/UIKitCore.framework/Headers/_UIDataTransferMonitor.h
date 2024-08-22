// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATATRANSFERMONITOR_H
#define _UIDATATRANSFERMONITOR_H

@class NSMutableDictionary, NSMutableSet, NSProgress, NSMutableArray, NSString, NSArray;
@protocol NSItemProviderDataTransferDelegate, NSProgressReporting, _UIDataTransferMonitorDelegate;

#import <Foundation/Foundation.h>


@interface _UIDataTransferMonitor : NSObject <NSItemProviderDataTransferDelegate, NSProgressReporting>

 {
    NSMutableDictionary *_transferQueue_requestsBySourceItemUUID;
    NSMutableSet *_transferQueue_requestsInProgress;
    BOOL _transferQueue_suppressEventsUntilRequested;
    BOOL _transferQueue_shouldSendBeganCallback;
    BOOL _transferQueue_hasSentBeganCallback;
    BOOL _transferQueue_hasSentFinishedCallback;
    BOOL _transferQueue_shouldSendFinishedCallback;
    NSProgress *_transferQueue_masterProgress;
    NSMutableArray *_transferQueue_childProgresses;
    NSMutableSet *_transferQueue_allEncounteredItemUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDataTransferMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger outstandingItemsCount; // ivar: _outstandingItemsCount
@property (readonly, copy, nonatomic) NSArray *outstandingRequests; // ivar: _outstandingRequests
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressEventsUntilRequested;
@property (readonly, nonatomic) NSUInteger totalItemsCount;


-(id)init;
-(void)_transferQueue_recomputeMasterProgress;
-(void)_transferQueue_scheduleBeganCallback;
-(void)_transferQueue_scheduleFinishedCallback;
-(void)_transferQueue_sendBeganCallback;
-(void)_transferQueue_sendFinishedCallback;
-(void)cancelOutstandingRequests;
-(void)dealloc;
-(void)itemProvider:(id)arg0 beganDataTransferTransactionUUID:(id)arg1 progress:(id)arg2 ;
-(void)itemProvider:(id)arg0 finishedDataTransferTransactionUUID:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendDelegateEventsIfNeeded;


@end


#endif