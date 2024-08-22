// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIINTERVALWORKOUTDEFINITIONSMANAGER_H
#define FIINTERVALWORKOUTDEFINITIONSMANAGER_H

@class NPSDomainAccessor, NPSManager, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FIIntervalWorkoutDefinitionsManager : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
    NSMutableDictionary *_rootIntervalWorkoutDefinitions;
}




-(id)_defaultUserIntervalWorkouts;
-(id)_deserializeIntervalWorkoutDefinitions:(id)arg0 ;
-(id)_mockHIIT3010;
-(id)_mockQuarterMileSprints;
-(id)_mockVariedSpeed;
-(id)_serializeRootIntervalWorkoutDefinitions:(id)arg0 ;
-(id)init;
-(id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)arg0 ;
-(void)_checkVersion;
-(void)_saveDefaultIntervalWorkouts;
-(void)_saveRootIntervalWorkoutDefinitions:(id)arg0 ;
-(void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)arg0 ;
-(void)_trimRootIntervalWorkoutDefinitions:(id)arg0 ;
-(void)_updateIntervalWorkoutDefinition:(id)arg0 activityTypeIdentifier:(id)arg1 ;
-(void)loadIntervalWorkoutDefinitions;
-(void)removeIntervalWorkoutDefinitionAtIndex:(NSInteger)arg0 activityTypeIdentifier:(id)arg1 ;
-(void)saveIntervalWorkoutDefinition:(id)arg0 activityTypeIdentifier:(id)arg1 ;


@end


#endif