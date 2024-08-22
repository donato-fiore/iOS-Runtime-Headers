// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPSLEEPACTIONMANAGER_H
#define HDSPSLEEPACTIONMANAGER_H

@class NSString, HKSPObserverSet;
@protocol HDSPSource, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepActionManager : NSObject <HDSPSource, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


+(BOOL)_isValidSnoozeDate:(id)arg0 ;
+(id)_latestDateInAlarms:(id)arg0 dateBlock:(id)arg1 ;
-(id)initWithEnvironment:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)confirmAwakeNotification;
-(void)confirmAwakeNotificationOnDate:(id)arg0 ;
-(void)confirmAwakeNotificationOnDate:(id)arg0 confirmUntilDate:(id)arg1 ;
-(void)dismissGoodMorning;
-(void)dismissGoodMorningOnDate:(id)arg0 ;
-(void)dismissSleepLock;
-(void)removeObserver:(id)arg0 ;
-(void)sleepAlarmDismissedOnDate:(id)arg0 source:(NSUInteger)arg1 ;
-(void)sleepAlarmSnoozedUntilDate:(id)arg0 source:(NSUInteger)arg1 ;
-(void)sleepAlarmWasModified;


@end


#endif