// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUACTIVITYITEMSOURCEOPERATION_H
#define PUACTIVITYITEMSOURCEOPERATION_H

@class NSOperation, NSString;
@protocol PUActivityItemSourceOperationDelegate, OS_dispatch_semaphore;



@interface PUActivityItemSourceOperation : NSOperation

@property (getter=_pu_isCancelled, setter=_pu_setCancelled:) BOOL _pu_cancelled; // ivar: __pu_cancelled
@property (readonly, copy) NSString *activityType; // ivar: _activityType
@property (readonly, weak) NSObject<PUActivityItemSourceOperationDelegate> *delegate; // ivar: _delegate
@property (readonly, getter=pu_isCancelled) BOOL pu_cancelled;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore


-(id)initWithDelegate:(id)arg0 activityType:(id)arg1 ;
-(void)main;
-(void)pu_cancel;


@end


#endif