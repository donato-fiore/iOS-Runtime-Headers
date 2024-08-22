// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLACTIVEDOWNLOADQUEUE_H
#define CPLACTIVEDOWNLOADQUEUE_H

@class NSMutableArray, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CPLActiveDownloadQueue : NSObject {
    NSMutableArray *_transferTasks;
    NSMutableArray *_transportTasks;
}


@property (readonly, nonatomic, getter=isFIFOQueue) BOOL FIFOQueue; // ivar: _FIFOQueue
@property (readonly, nonatomic) NSArray *allTransferTasks;
@property (readonly, nonatomic) NSInteger coalescingInterval; // ivar: _coalescingInterval
@property (readonly, nonatomic) NSUInteger countOfTransferTasks;
@property (readonly, nonatomic) NSUInteger countOfTransferTasksInTransportTasks;
@property (readonly, nonatomic) NSUInteger countOfTransportTasks;
@property (readonly, nonatomic) id *groupConstructor; // ivar: _groupConstructor
@property (readonly, nonatomic) BOOL isHighPriority;
@property (readonly, nonatomic) NSUInteger maximumBatchSize; // ivar: _maximumBatchSize
@property (readonly, nonatomic) NSUInteger maximumConcurrentTransportTasks; // ivar: _maximumConcurrentTransportTasks
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)dequeueBatchOfTransferTasksDequeuedSize:(*NSUInteger)arg0 ;
-(id)dequeueLastTransportTask;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 FIFOQueue:(BOOL)arg2 maximumBatchSize:(NSUInteger)arg3 maximumConcurrentTransportTasks:(NSUInteger)arg4 coalescingInterval:(NSInteger)arg5 groupConstructor:(id)arg6 ;
-(id)status;
-(void)addTransferTask:(id)arg0 ;
-(void)addTransportTask:(id)arg0 ;
-(void)removeAllTransferTasks;
-(void)removeTransferTask:(id)arg0 ;
-(void)removeTransportTask:(id)arg0 ;


@end


#endif