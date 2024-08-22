// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPXPCACTIVITYSCHEDULER_H
#define HDSPXPCACTIVITYSCHEDULER_H

@class NSString, NSMutableSet;
@protocol HDSPActivityScheduler, NAScheduler;

#import <Foundation/Foundation.h>


@interface HDSPXPCActivityScheduler : NSObject <HDSPActivityScheduler>



@property (readonly, nonatomic) NSObject<NAScheduler> *callbackScheduler; // ivar: _callbackScheduler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableSet *eventNames; // ivar: _eventNames
@property (readonly, nonatomic) os_unfair_lock_s eventNamesLock; // ivar: _eventNamesLock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithCallbackScheduler:(id)arg0 ;
-(void)_withLock:(id)arg0 ;
-(void)scheduleActivity:(id)arg0 activityHandler:(id)arg1 ;
-(void)unscheduleActivities;


@end


#endif