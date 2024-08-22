// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRMUTABLESWITCHERCONFIGURATION_H
#define PRMUTABLESWITCHERCONFIGURATION_H

@class NSMapTable, NSMutableOrderedSet, NSArray;


#import "PRSwitcherConfiguration.h"
#import "PRPosterConfiguration.h"

@interface PRMutableSwitcherConfiguration : PRSwitcherConfiguration {
    NSMapTable *_overriddenFocusConfigurationForPosterConfiguration;
    NSMapTable *_overriddenHomescreenConfigurationForPosterConfiguration;
    NSMapTable *_incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
    NSMutableOrderedSet *_pathsToIngest;
}


@property (copy, nonatomic) NSArray *configurations;
@property (retain, nonatomic) PRPosterConfiguration *desiredActiveConfiguration; // ivar: _desiredActiveConfiguration
@property (retain, nonatomic) PRPosterConfiguration *selectedConfiguration;


-(id)focusConfigurationForPoster:(id)arg0 ;
-(id)homeConfigurationForPoster:(id)arg0 ;
-(id)incomingPosterConfigurations;
-(id)incomingPosterConfigurationsToBeAssocatedWithExistingPosterConfigurationsUUIDs;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)posterConfigurationsNeedingFocusConfigurationDeleted;
-(id)posterConfigurationsNeedingFocusConfigurationUpdates;
-(id)posterConfigurationsNeedingHomeScreenConfigurationUpdates;
-(void)ingestNewPosterConfiguration:(id)arg0 ;
-(void)ingestNewPosterConfiguration:(id)arg0 toBeAssociatedWithHomeScreenConfiguration:(id)arg1 ;
-(void)ingestNewPosterConfiguration:(id)arg0 toBeAssociatedWithUUID:(id)arg1 ;
-(void)removeConfiguration:(id)arg0 ;
-(void)setFocusConfiguration:(id)arg0 forPosterConfiguration:(id)arg1 ;
-(void)setHomeConfiguration:(id)arg0 forPosterConfiguration:(id)arg1 ;


@end


#endif