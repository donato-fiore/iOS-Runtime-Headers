// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRITASKQUEUEOPERATION_H
#define TRITASKQUEUEOPERATION_H

@class NSBlockOperation;
@protocol TRITask;



@interface TRITaskQueueOperation : NSBlockOperation

@property BOOL inProgress; // ivar: _inProgress
@property (retain, nonatomic) NSObject<TRITask> *task; // ivar: _task




@end


#endif