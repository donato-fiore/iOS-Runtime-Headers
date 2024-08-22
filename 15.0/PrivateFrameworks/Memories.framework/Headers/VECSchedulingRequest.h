// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VECSCHEDULINGREQUEST_H
#define VECSCHEDULINGREQUEST_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface VECSchedulingRequest : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _queued;
    BOOL _cancelled;
}


@property (readonly, nonatomic) id *dellocHandler; // ivar: _dellocHandler
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *doneOrCancelGroup; // ivar: _doneOrCancelGroup
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly, nonatomic) id *taskHandler; // ivar: _taskHandler


-(id)description;
// -(id)initWithDoneOrCancelGroup:(id)arg0 taskHandler:(id)arg1 dellocHandler:(unk)arg2  ;
-(void)dealloc;
-(void)markAsCompletedOrCancelled:(BOOL)arg0 ;
-(void)markAsQueued;


@end


#endif