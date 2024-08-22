// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCTRANSFERSTREAM_H
#define BRCTRANSFERSTREAM_H

@class NSMutableDictionary, NSString, NSArray;
@protocol BRCLifeCycle, BRCSuspendable, OS_dispatch_workloop, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BRCAccountSession.h"
#import "BRCSyncContext.h"
#import "BRCDeadlineSource.h"

@interface BRCTransferStream : NSObject <BRCLifeCycle, BRCSuspendable>

 {
    BRCAccountSession *_session;
    BRCSyncContext *_syncContext;
    BRCDeadlineSource *_schedulingSource;
    NSInteger _minSignalTime;
    NSMutableDictionary *_inFlightOpByID;
    NSObject<OS_dispatch_workloop> *_transferWorkloop;
    NSObject<OS_dispatch_group> *_transferBatchRequestWaiter;
    BOOL _isWaitingForTransferBatch;
    BOOL _hasReachedCap;
    uint8_t _multipleItemsInteractiveSchedulingCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inFlightSize; // ivar: _inFlightSize
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (nonatomic) NSUInteger maxCountOfBatchesInFlight; // ivar: _maxCountOfBatchesInFlight
@property (readonly) NSArray *operations;
@property (copy, nonatomic) id *streamDidBecomeReadyToTransferRecords; // ivar: _streamDidBecomeReadyToTransferRecords
@property (readonly) Class superclass;


-(CGFloat)progressForTransferID:(id)arg0 operationID:(id)arg1 ;
-(id)initWithSyncContext:(id)arg0 name:(id)arg1 scheduler:(id)arg2 ;
-(void)_addBatchOperation:(id)arg0 ;
-(void)_evaluateCap;
-(void)_schedule;
-(void)_scheduleOneBatchWithQoS:(NSInteger)arg0 ;
-(void)_setReachedCap:(BOOL)arg0 ;
-(void)addAliasItem:(id)arg0 toTransferWithID:(id)arg1 operationID:(id)arg2 ;
-(void)addBatchOperation:(id)arg0 ;
-(void)cancel;
-(void)cancelTransferID:(id)arg0 operationID:(id)arg1 ;
-(void)close;
-(void)endSchedulingMultipleItemsInteractively;
-(void)forceSchedulingPendingInteractiveTransfers;
-(void)resume;
-(void)signal;
-(void)signalWithDeadline:(NSInteger)arg0 ;
-(void)startSchedulingMultipleItemsInteractively;
-(void)suspend;


@end


#endif