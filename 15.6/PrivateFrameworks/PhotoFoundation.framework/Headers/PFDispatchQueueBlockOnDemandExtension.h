// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFDISPATCHQUEUEBLOCKONDEMANDEXTENSION_H
#define PFDISPATCHQUEUEBLOCKONDEMANDEXTENSION_H

@protocol PFDispatchQueueBlockOnDemandExecuting;


#import "PFDispatchQueueExtension.h"
#import "PFExtendedDispatchQueue.h"

@interface PFDispatchQueueBlockOnDemandExtension : PFDispatchQueueExtension <PFDispatchQueueBlockOnDemandExecuting>

 {
    PFExtendedDispatchQueue *_queue;
    uint8_t _countToExecute;
    uint8_t _enqueuedCount;
}




-(NSUInteger)runBlockCount:(NSUInteger)arg0 ;
-(NSUInteger)runOneBlock;
-(id)newBlockInfo;
-(void)_willEnqueueOneBlock;
-(void)installOnQueue:(id)arg0 ;
-(void)queue:(id)arg0 didDequeue:(id)arg1 skipExecution:(id)arg2 ;
-(void)queue:(id)arg0 willEnqueueAsync:(id)arg1 when:(id)arg2 ;
-(void)queue:(id)arg0 willEnqueueSync:(id)arg1 ;


@end


#endif