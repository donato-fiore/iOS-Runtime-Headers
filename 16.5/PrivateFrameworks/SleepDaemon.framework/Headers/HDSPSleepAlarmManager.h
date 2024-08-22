// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPALARMMANAGER_H
#define HDSPSLEEPALARMMANAGER_H

@class NSString;
@protocol HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver, HDSPSleepAlarmProvider;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepAlarmManager : NSObject <HDSPSource, HDSPEnvironmentAware, HDSPSleepScheduleModelObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPSleepAlarmProvider> *sleepAlarmProvider; // ivar: _sleepAlarmProvider
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


-(id)currentSleepAlarms;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 sleepAlarmProvider:(id)arg1 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)resetSleepAlarmSnoozeState;
-(void)sleepScheduleModelManager:(id)arg0 didUpdateSleepScheduleModel:(id)arg1 ;


@end


#endif