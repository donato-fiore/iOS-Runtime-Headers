// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLOADIMAGERESOURCEOPERATION_H
#define GKLOADIMAGERESOURCEOPERATION_H

@class NSURLSessionDataTask;
@protocol GKResourceDataConsumer, OS_dispatch_queue;


#import "GKLoadResourceOperation.h"

@interface GKLoadImageResourceOperation : GKLoadResourceOperation

@property (readonly, nonatomic) NSObject<GKResourceDataConsumer> *dataConsumer; // ivar: _dataConsumer
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dataConsumerQueue; // ivar: _dataConsumerQueue
@property (readonly, nonatomic) NSURLSessionDataTask *task; // ivar: _task


+(id)URLSession;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithURLRequest:(id)arg0 URLSession:(id)arg1 dataConsumer:(id)arg2 dataConsumerQueue:(id)arg3 ;
-(id)initWithURLRequest:(id)arg0 dataConsumer:(id)arg1 ;
-(void)cancel;
-(void)didFinishTaskWithData:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)setQueuePriority:(NSInteger)arg0 ;
-(void)start;


@end


#endif