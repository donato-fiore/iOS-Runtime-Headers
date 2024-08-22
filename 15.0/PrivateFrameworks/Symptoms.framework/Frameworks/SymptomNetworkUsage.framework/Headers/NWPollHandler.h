// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPOLLHANDLER_H
#define NWPOLLHANDLER_H

@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "NWUsageTargetSelector.h"
#import "NWUsageManager.h"

@interface NWPollHandler : NSObject {
    NSMutableArray" _batchedSnapshots;
    uint8_t _batchesOutstanding;
    unsigned int _producerSeqno;
    unsigned int _consumerSeqno;
    BOOL _active;
}


@property (readonly, nonatomic) BOOL completed;
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (copy) id *deliveryBlock; // ivar: _deliveryBlock
@property (retain) NWUsageTargetSelector *flowSelector; // ivar: _flowSelector
@property (retain) NWUsageManager *manager; // ivar: _manager
@property (nonatomic) NSUInteger ntstatContext; // ivar: _ntstatContext
@property (nonatomic) BOOL paused; // ivar: _paused
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (readonly, nonatomic) BOOL shouldRestartPoll;


-(id)description;
-(id)init;
-(id)nextDelivery;
-(void)_dispatchNextBatch;
-(void)decrementBatchCount;
-(void)handleSnapshot:(id)arg0 ;
-(void)pushCurrentSnapshots:(BOOL)arg0 ;
-(void)shutdown;


@end


#endif