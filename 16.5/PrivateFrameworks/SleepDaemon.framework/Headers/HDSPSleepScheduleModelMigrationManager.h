// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPSLEEPSCHEDULEMODELMIGRATIONMANAGER_H
#define HDSPSLEEPSCHEDULEMODELMIGRATIONMANAGER_H

@class NSString;
@protocol HDSPSource, HDSPEnvironmentAware;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPSleepScheduleModelMigrationManager : NSObject <HDSPSource, HDSPEnvironmentAware>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


-(BOOL)needDataMigration;
-(id)_migrateHomeScreenPage;
-(id)_migrateOnboardingSettings;
-(id)_migrateSleepFocus;
-(id)_migrateSleepScheduleFromMobileTimer;
-(id)_migrateToCloudKit;
-(id)initWithEnvironment:(id)arg0 ;
-(id)performDataMigration;


@end


#endif