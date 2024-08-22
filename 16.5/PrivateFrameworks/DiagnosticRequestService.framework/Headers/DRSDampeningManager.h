// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSDAMPENINGMANAGER_H
#define DRSDAMPENINGMANAGER_H

@class NSPersistentContainer, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DRSDampeningConfiguration.h"
#import "DRSDampeningEnforcementSettings.h"

@interface DRSDampeningManager : NSObject

@property (retain, nonatomic) DRSDampeningConfiguration *defaultSignatureConfiguration; // ivar: _defaultSignatureConfiguration
@property (readonly, nonatomic) DRSDampeningEnforcementSettings *enforcementSettings; // ivar: _enforcementSettings
@property (retain, nonatomic) NSPersistentContainer *persistentContainer; // ivar: _persistentContainer
@property (readonly, nonatomic) NSDictionary *resourceDampeningConfigDict; // ivar: _resourceDampeningConfigDict
@property (readonly, nonatomic) NSMutableDictionary *teamDampeningConfigDict; // ivar: _teamDampeningConfigDict
@property (nonatomic) NSUInteger totalCap; // ivar: _totalCap
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)passesAcceptanceRate:(CGFloat)arg0 ;
+(BOOL)removeExistingDampeningManagerStateFromManagedObjectContext:(id)arg0 errorOut:(*id)arg1 ;
+(NSUInteger)defaultTotalCapForCurrentDevice;
+(NSUInteger)defaultTotalCapForIsInternal:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 ;
+(id)_ON_MOC_QUEUE_existingMOFromContext:(id)arg0 errorOut:(*id)arg1 ;
+(id)_RMETeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_coreAnimationTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_coreAudioTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_defaultTailspinConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_drmTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_entityName;
+(id)_hangTracerTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_iOS_hangTracerTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 ;
+(id)_mailTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_memoryToolsTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_nandGBBTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_nandTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_ppsTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_rapidTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_sentryTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_spindumpTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)_watchOS_hangTracerTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 ;
+(id)_watchdogdTeamConfiguration:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)dampeningManagerFromPersistentContainer:(id)arg0 deleteBadState:(BOOL)arg1 errorOut:(*id)arg2 ;
+(id)defaultResourceConfigurations:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)defaultResourceConfigurationsForCurrentDevice;
+(id)defaultTeamConfigurationForTeam:(id)arg0 isInternal:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 platform:(unsigned char)arg4 ;
+(id)defaultTeamConfigurationForTeamForCurrentDevice:(id)arg0 teamConfigurationDirectory:(id)arg1 ;
+(id)defaultTeamConfigurations:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
+(id)defaultTeamConfigurations:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 plistDirectoryPath:(id)arg4 errorOut:(*id)arg5 ;
+(id)defaultTeamConfigurationsForCurrentDevice:(id)arg0 ;
-(BOOL)_hasRequestsRecordCountGreaterThanOrEqualToThreshold:(NSUInteger)arg0 matchingPredicate:(id)arg1 inContext:(id)arg2 filterToObjectsMatchingClassOfRequest:(id)arg3 ;
-(BOOL)_passesResourceCap:(id)arg0 config:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_passesResourceHysteresis:(id)arg0 config:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_passesResourceRandomDownsampling:(id)arg0 config:(id)arg1 ;
-(BOOL)_passesSignatureCap:(id)arg0 config:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_passesSignatureHysteresis:(id)arg0 config:(id)arg1 managedObjectContext:(id)arg2 ;
-(BOOL)_passesSignatureRandomDownsampling:(id)arg0 config:(id)arg1 ;
-(BOOL)_passesTotalCap:(id)arg0 managedObjectContext:(id)arg1 ;
-(BOOL)_request:(id)arg0 passesHysteresis:(CGFloat)arg1 countCap:(NSUInteger)arg2 usesSignature:(BOOL)arg3 usesRequestClass:(BOOL)arg4 managedObjectContext:(id)arg5 ;
-(BOOL)isEqualToDampeningManager:(id)arg0 ;
-(BOOL)saveToPersistentContainerWithErrorOut:(*id)arg0 ;
-(BOOL)writeConfigurationPlistsToDirectory:(id)arg0 createDirIfMissing:(BOOL)arg1 errorOut:(*id)arg2 ;
-(CGFloat)_24HoursHysteresis;
-(NSUInteger)dampeningOutcomeForRequest:(id)arg0 ;
-(id)_ON_MOC_QUEUE_initWith:(id)arg0 persistentContainer:(id)arg1 ;
-(id)_ON_MOC_QUEUE_moRepresentationInContext:(id)arg0 ;
-(id)_predicateForUndampenedRequestsMatchingSignatureOfRequest:(id)arg0 afterDate:(id)arg1 ;
-(id)_resourceConfigurationForRequest:(id)arg0 ;
-(id)dampeningConfigurationForRequestSignature:(id)arg0 ;
-(id)dampeningConfigurationForResource:(id)arg0 ;
-(id)dampeningConfigurationForTeamID:(id)arg0 issueCategory:(id)arg1 ;
-(id)debugDescription;
-(id)initWithIsInternal:(BOOL)arg0 isSeed:(BOOL)arg1 isCarrier:(BOOL)arg2 platform:(unsigned char)arg3 ;
-(id)initWithPersistentContainer:(id)arg0 enforcementSettings:(id)arg1 defaultSignatureConfiguration:(id)arg2 totalCap:(NSUInteger)arg3 teamDampeningConfigDict:(id)arg4 resourceDampeningConfigDict:(id)arg5 ;
-(id)initWithPersistentContainer:(id)arg0 teamConfigurationDirectory:(id)arg1 ;
-(id)jsonCompatibleDictRepresentation;


@end


#endif