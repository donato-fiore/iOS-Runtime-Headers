// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FFCONFIGURATION_H
#define FFCONFIGURATION_H

@class NSArray, NSMutableSet, NSMutableDictionary, NSSet, NSMutableArray;
@protocol FFFileReader, FFFileWriter, FFParseErrorReporter;

#import <Foundation/Foundation.h>

#import "FFPlistParser.h"

@interface FFConfiguration : NSObject {
    os_unfair_lock_s lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary"] configByLevelIndex;
    NSMutableDictionary" metaByLevelIndex;
    NSMutableSet" disclosuresByLevelIndex;
    NSMutableDictionary" featureSetsMetaByLevelIndex;
    NSMutableSet" enabledFeatureSetsByLevelIndex;
    NSMutableDictionary" enabledFeatureSetsAtLevelIndexByGroup;
    NSMutableDictionary *definedFeatureSets;
    NSMutableDictionary *definedFeatureGroups;
    NSMutableDictionary" subscriptionsMetaByLevelIndex;
    NSMutableArray" subscriptionsByLevelIndex;
}


@property (readonly, nonatomic) NSSet *domains;
@property (retain, nonatomic) NSObject<FFFileReader> *filereader; // ivar: _filereader
@property (retain, nonatomic) NSObject<FFFileWriter> *filewriter; // ivar: _filewriter
@property (retain, nonatomic) NSObject<FFParseErrorReporter> *parseerrorreporter; // ivar: _parseerrorreporter
@property (retain, nonatomic) FFPlistParser *plistparser; // ivar: _plistparser
@property (retain, nonatomic) NSMutableArray *profilePayloads; // ivar: _profilePayloads


+(BOOL)isValidDisclosureName:(id)arg0 ;
+(BOOL)isValidName:(id)arg0 ;
+(id)_configurationForTestingWithFileReader:(id)arg0 fileWriter:(id)arg1 parseErrorReporter:(id)arg2 ;
+(id)configurationForProfileManagement;
+(id)configurationForTestingWithFileReader:(id)arg0 ;
+(id)configurationForTestingWithFileReader:(id)arg0 fileWriter:(id)arg1 ;
+(id)configurationForTestingWithFileReader:(id)arg0 parseErrorReporter:(id)arg1 ;
+(id)configurationForTestingWithFileWriter:(id)arg0 ;
+(id)shared;
-(BOOL)addProfilePayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitProfilePayloadsAndReturnError:(*id)arg0 ;
-(BOOL)commitUpdates:(*id)arg0 ;
-(BOOL)isFeatureHidden:(id)arg0 domain:(id)arg1 ;
-(BOOL)isValidDisclosureName:(id)arg0 ;
-(BOOL)isValidName:(id)arg0 ;
-(BOOL)phaseShouldBeEnabledByDefault:(id)arg0 ;
-(BOOL)reset:(*id)arg0 ;
-(BOOL)resetDomain:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolvedStateForDisclosure:(id)arg0 ;
-(BOOL)writeCombinedUpdates:(*id)arg0 ;
-(BOOL)writeCombinedUpdatesAtLevelIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeDisclosureUpdates:(*id)arg0 ;
-(BOOL)writeDisclosureUpdatesAtlevelIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeDomainUpdates:(*id)arg0 ;
-(BOOL)writeFeatureSetUpdates:(*id)arg0 ;
-(BOOL)writeFeatureSetUpdatesAtLevelIndex:(NSUInteger)arg0 withError:(*id)arg1 ;
-(BOOL)writeSubscriptionUpdates:(*id)arg0 ;
-(BOOL)writeSubscriptionUpdatesAtLevelIndex:(NSUInteger)arg0 withError:(*id)arg1 ;
-(NSInteger)_resolvedValueForFeatureSet:(id)arg0 ;
-(NSInteger)_valueForFeatureSet:(id)arg0 atLevel:(NSInteger)arg1 ;
-(NSInteger)resolvedValueForFeatureSet:(id)arg0 inGroup:(id)arg1 ;
-(NSInteger)valueForFeatureSet:(id)arg0 inGroup:(id)arg1 atLevel:(NSInteger)arg2 ;
-(id)allFeatureGroups;
-(id)allSubscriptionsAtLevel:(NSInteger)arg0 ;
-(id)attributesForFeatureGroup:(id)arg0 ;
-(id)currentDisclosures;
-(id)currentDisclosuresAtLevel:(NSInteger)arg0 ;
-(id)currentDisclosuresAtLevelIndex:(NSUInteger)arg0 ;
-(id)defaultStateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)definedFeatureGroupsFilteredByCurrentDisclosures;
-(id)definedFeatureSetsFilteredByCurrentDisclosures;
-(id)disclosureFileURLForLevelIndex:(NSUInteger)arg0 pathIndex:(int)arg1 ;
-(id)disclosureForFeature:(id)arg0 domain:(id)arg1 ;
-(id)disclosureForFeatureGroup:(id)arg0 ;
-(id)effectiveStateForFeature:(id)arg0 domain:(id)arg1 levelIndex:(NSUInteger)arg2 ;
-(id)featureFlagsInSet:(id)arg0 inGroup:(id)arg1 ;
-(id)featureSetsFileURLForLevelIndex:(NSUInteger)arg0 ;
-(id)featureSetsInGroup:(id)arg0 ;
-(id)featuresForDomain:(id)arg0 ;
-(id)featuresForDomainAlreadyLocked:(id)arg0 ;
-(id)fileURLForDomain:(id)arg0 pathIndex:(int)arg1 ;
-(id)fileURLForLevelIndex:(NSUInteger)arg0 pathIndex:(int)arg1 ;
-(id)initPrivate;
-(id)internalDisclosureFileURLForLevelIndex:(NSUInteger)arg0 ;
-(id)makeFeatureDictionaryFrom:(id)arg0 forDomain:(id)arg1 atDomainLevel:(BOOL)arg2 reportableFilename:(id)arg3 ;
-(id)mutableDisclosureSetAtLevelIndex:(NSUInteger)arg0 ;
-(id)parseSubscriptionsDictionary:(id)arg0 ;
-(id)resolvedStateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)stateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)stateForFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(id)subscriptionsFileURLForLevelIndex:(NSUInteger)arg0 ;
-(unsigned int)sortValueForPhase:(id)arg0 ;
-(void)_enableFeatureSetAlreadyLocked:(id)arg0 atLevelIndex:(NSUInteger)arg1 ;
-(void)_unsetFeatureSetAlreadyLocked:(id)arg0 atLevelIndex:(NSUInteger)arg1 ;
-(void)addDisclosure:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)addDisclosureAlreadyLocked:(id)arg0 atLevelIndex:(NSUInteger)arg1 ;
-(void)addFeaturesForDomain:(id)arg0 pathIndex:(int)arg1 fromURL:(id)arg2 ;
-(void)addSubscription:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)addSubscriptionAlreadyLocked:(id)arg0 atLevelIndex:(NSUInteger)arg1 ;
-(void)clearCachedData;
-(void)createMutableDomainConfig:(id)arg0 levelIndex:(NSUInteger)arg1 ;
-(void)disableFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)disableFeature:(id)arg0 domain:(id)arg1 levelIndex:(NSUInteger)arg2 ;
-(void)disableFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)enableFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)enableFeature:(id)arg0 domain:(id)arg1 levelIndex:(NSUInteger)arg2 ;
-(void)enableFeatureSet:(id)arg0 inGroup:(id)arg1 atLevel:(NSInteger)arg2 ;
-(void)enableFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)invalidateCache;
-(void)loadAllData;
-(void)loadAllLevelsForDomain:(id)arg0 ;
-(void)loadCombinedDataForLevelIndex:(NSUInteger)arg0 ;
-(void)loadDomain:(id)arg0 levelIndex:(NSUInteger)arg1 ;
-(void)loadFeatureSetDataForLevelIndex:(NSUInteger)arg0 ;
-(void)loadFeatureSetDefinitions;
-(void)loadFeatureSetDefinitionsNamed:(id)arg0 fromURL:(id)arg1 ;
-(void)loadSubscriptionDataForLevelIndex:(NSUInteger)arg0 ;
-(void)populateDictionary:(id)arg0 withFeatures:(id)arg1 ;
-(void)prepareToAddProfilePayloads;
-(void)recalculateFeatureSetEffectsAt:(NSUInteger)arg0 ;
-(void)recalculateSubscriptionEffectsAt:(NSUInteger)arg0 ;
-(void)removeAllDisclosuresAtLevelIndex:(NSUInteger)arg0 ;
-(void)removeAllFeatureSetDataAtLevelIndex:(NSUInteger)arg0 ;
-(void)removeAllSubscriptionsAtLevelIndex:(NSUInteger)arg0 ;
-(void)removeDisclosure:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)removeDisclosure:(id)arg0 atLevelIndex:(NSUInteger)arg1 ;
-(void)removeSubscription:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)reportParseError:(id)arg0 severity:(id)arg1 whileParsingKey:(id)arg2 inContext:(id)arg3 inFile:(id)arg4 ;
-(void)setFeaturesMatchingAttribute:(id)arg0 levelIndex:(NSUInteger)arg1 value:(NSInteger)arg2 ;
-(void)setValue:(NSInteger)arg0 feature:(id)arg1 domain:(id)arg2 levelIndex:(NSUInteger)arg3 ;
-(void)unsetFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)unsetFeature:(id)arg0 domain:(id)arg1 levelIndex:(NSUInteger)arg2 ;
-(void)unsetFeatureSet:(id)arg0 inGroup:(id)arg1 atLevel:(NSInteger)arg2 ;
-(void)unsetFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)validateName:(id)arg0 ;


@end


#endif