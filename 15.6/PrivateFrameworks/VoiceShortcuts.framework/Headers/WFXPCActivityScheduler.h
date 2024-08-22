// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFXPCACTIVITYSCHEDULER_H
#define WFXPCACTIVITYSCHEDULER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFXPCActivityScheduler : NSObject

@property (readonly, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (nonatomic) *_xpc_activity_eligibility_changed_handler_s eligibilityChangedHandler; // ivar: _eligibilityChangedHandler


// +(id)activatedSchedulerWithActivityIdentifier:(id)arg0 checkInHandler:(id)arg1 runHandler:(unk)arg2  ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg0 runHandler:(id)arg1 ;
-(id)initWithActivityIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
// -(void)scheduleWithCheckInHandler:(id)arg0 runHandler:(unk)arg1  ;
-(void)scheduleWithRunHandler:(id)arg0 ;


@end


#endif