// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPDEMOMODEENVIRONMENT_H
#define HDSPDEMOMODEENVIRONMENT_H

@class NSString;
@protocol HDSPNotificationObserver, HDSPSource;


#import "HDSPEnvironment.h"

@interface HDSPDemoModeEnvironment : HDSPEnvironment <HDSPNotificationObserver, HDSPSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


-(BOOL)isDemoEnvironment;
-(id)demoEventRecord;
-(id)demoScheduleModel;
-(id)demoSleepSchedule;
-(id)demoSleepSettings;
-(id)init;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)environmentDidBecomeReady;
-(void)resetDemoMode;
-(void)setInitialSchedule;


@end


#endif