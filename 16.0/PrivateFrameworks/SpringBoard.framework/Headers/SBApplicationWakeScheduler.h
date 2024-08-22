// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONWAKESCHEDULER_H
#define SBAPPLICATIONWAKESCHEDULER_H

@class NSString, NSDate;
@protocol BSInvalidatable, SBApplicationWakeLifecycleHandling, BSTimerScheduleQuerying><BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable>

 {
    id<SBApplicationWakeLifecycleHandling> *_lifecycleTracker;
    SBApplication *_application;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *scheduledDate;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BSTimerScheduleQuerying><BSInvalidatable> *wakeTimer; // ivar: _wakeTimer


-(id)_expectedFireDateForTimer:(id)arg0 ;
-(id)_initWithLifecycleTracker:(id)arg0 forApplication:(id)arg1 ;
-(id)init;
-(void)_applicationProcessStateDidChange:(id)arg0 ;
-(void)_forceInvalidate;
-(void)dealloc;
-(void)endResumeIfAwoken;
-(void)invalidate;
-(void)scheduleWakeForDate:(id)arg0 ;
-(void)unschedule;
-(void)wakeImmediately;


@end


#endif