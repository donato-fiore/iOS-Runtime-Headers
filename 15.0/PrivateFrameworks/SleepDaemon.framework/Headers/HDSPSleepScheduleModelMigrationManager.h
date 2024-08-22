// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPSLEEPSCHEDULEMODELMIGRATIONMANAGER_H
#define HDSPSLEEPSCHEDULEMODELMIGRATIONMANAGER_H

@class NSString;
@protocol HDSPSource, HDSPEnvironmentAware, NAScheduler;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPSource, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NAScheduler> *scheduler; // ivar: _scheduler
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


-(BOOL)needDataMigration;
-(id)_migrateOnboardingSettings;
-(id)_migrateSleepFocusMode;
-(id)_migrateSleepScheduleFromMobileTimer;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 scheduler:(id)arg1 ;
-(id)performDataMigration;


@end


#endif