// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSTORAGE_H
#define HDSPSLEEPSTORAGE_H

@class NSString, HKSPObserverSet;
@protocol HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPEnvironmentAware, HDSPSource;

#import <Foundation/Foundation.h>

#import "HDSPSyncedDefaultsConfiguration.h"
#import "HDSPEnvironment.h"
#import "HDSPSyncedDefaults.h"

@interface HDSPSleepStorage : NSObject <HDSPSyncedUserDefaultsExternalChangeDelegate, HDSPEnvironmentAware, HDSPSource>



@property (readonly, nonatomic) HDSPSyncedDefaultsConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSUInteger dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL needsMigration;
@property (readonly, nonatomic) HKSPObserverSet *observers; // ivar: _observers
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) HDSPSyncedDefaults *syncedDefaults; // ivar: _syncedDefaults
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


+(id)standardConfiguration;
-(BOOL)_removeObjectProperties:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveObject:(id)arg0 error:(*id)arg1 ;
-(BOOL)_saveObjectChanges:(id)arg0 versionKey:(id)arg1 currentVersion:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)removeSleepEventRecordWithError:(*id)arg0 ;
-(BOOL)removeSleepScheduleWithError:(*id)arg0 ;
-(BOOL)removeSleepSettingsWithError:(*id)arg0 ;
-(BOOL)saveSleepEventRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepEventRecordChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepSchedule:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepScheduleChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepScheduleModel:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepSettings:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveSleepSettingsChanges:(id)arg0 error:(*id)arg1 ;
-(id)_loadObjectOfClass:(Class)arg0 allowedClasses:(id)arg1 propertiesToLoad:(id)arg2 error:(*id)arg3 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 configuration:(id)arg1 syncedDefaults:(id)arg2 ;
-(id)loadSleepEventRecord:(*id)arg0 ;
-(id)loadSleepSchedule:(*id)arg0 ;
-(id)loadSleepScheduleModel:(*id)arg0 ;
-(id)loadSleepSettings:(*id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)saveCurrentDataVersion;
-(void)syncedUserDefaults:(id)arg0 didChangeExternallyForKeys:(id)arg1 ;
-(void)syncedUserDefaultsDidChangeExternally:(id)arg0 ;


@end


#endif