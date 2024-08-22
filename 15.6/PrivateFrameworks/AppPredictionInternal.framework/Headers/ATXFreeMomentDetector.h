// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFREEMOMENTDETECTOR_H
#define ATXFREEMOMENTDETECTOR_H

@class UNUserNotificationCenter, NSUserDefaults, NSString;
@protocol ATXFreeMomentTriggersListenerDelegate, UNUserNotificationCenterDelegate, OS_dispatch_queue, ATXFreeMomentDetectorDelegate;

#import <Foundation/Foundation.h>

#import "ATXFreeMomentTriggersListener.h"
#import "ATXMotionStateListener.h"

@interface ATXFreeMomentDetector : NSObject <ATXFreeMomentTriggersListenerDelegate, UNUserNotificationCenterDelegate>

 {
    UNUserNotificationCenter *_notificationCenter;
    NSObject<OS_dispatch_queue> *_freeMomentEndedQueue;
    NSUserDefaults *_userDefaults;
    ATXFreeMomentTriggersListener *freeMomentTriggersListner;
    ATXMotionStateListener *motionStateChangeListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<ATXFreeMomentDetectorDelegate> *freeMomentDetectorDelegate; // ivar: _freeMomentDetectorDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)lastWorkMeetingOfDayEnded:(id)arg0 ;
-(BOOL)meetingIsOnGoing:(id)arg0 ;
-(BOOL)motionStateChangedFromMovingToStationary:(id)arg0 ;
-(BOOL)motionStateChangedFromStationaryToWalking:(id)arg0 ;
-(BOOL)phoneUnlocksWithinLastNSeconds:(id)arg0 ;
-(BOOL)timeBetweenTwoMeetings:(id)arg0 ;
-(BOOL)twoHoursSinceLastFreeMoment:(id)arg0 ;
-(id)init;
-(id)lastFreeMomentTimeStamp;
-(int)detectFreeMoment:(id)arg0 ;
-(int)detectFreeMomentUsingAppLaunchHeuristics:(id)arg0 ;
-(int)detectFreeMomentUsingPhoneUnlockHeuristics:(id)arg0 ;
-(void)displayFreeMomentNotificationForReason:(int)arg0 withFeatureVector:(id)arg1 ;
-(void)showFreeMomentNotificationIfApplicable;
-(void)updateLastFreeMomentTimeStamp;


@end


#endif