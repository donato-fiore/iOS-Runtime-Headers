// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLDISPATCHSILO_H
#define CLDISPATCHSILO_H

@class NSOperationQueue, NSNumber;
@protocol OS_dispatch_queue;


#import "CLSilo.h"

@interface CLDispatchSilo : CLSilo {
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    BOOL _useCLPermissiveTimer;
    BOOL _isQueueSuspended;
    NSNumber *_cohortId;
}




-(BOOL)inPermissiveMode;
-(BOOL)isSuspended;
-(CGFloat)currentLatchedAbsoluteTimestamp;
-(id)debugDescription;
-(id)getTimeCoercibleVariantInstance;
-(id)initMain;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithUnderlyingQueue:(id)arg0 ;
-(id)initWithUnderlyingQueue:(id)arg0 bePermissive:(BOOL)arg1 ;
-(id)newTimer;
-(id)operationQueue;
-(id)queue;
-(void)_setLatchedAbsoluteTimestamp:(CGFloat)arg0 ;
-(void)afterInterval:(CGFloat)arg0 async:(id)arg1 ;
-(void)assertInside;
-(void)assertOutside;
-(void)async:(id)arg0 ;
-(void)heartBeat:(id)arg0 ;
-(void)intendToSync;
-(void)resume;
-(void)suspend;
-(void)sync:(id)arg0 ;


@end


#endif