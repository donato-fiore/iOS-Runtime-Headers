// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FFCONFIGURATION_H
#define FFCONFIGURATION_H

@class NSArray, NSMutableSet, NSSet, NSMutableArray;
@protocol FFFileReader, FFFileWriter;

#import <Foundation/Foundation.h>


@interface FFConfiguration : NSObject {
    os_unfair_lock_s lock;
    NSArray *searchPaths;
    NSMutableSet *_domains;
    NSMutableDictionary"] configByLevel;
    NSMutableDictionary" metaByLevel;
    NSMutableSet" disclosuresByLevel;
}


@property (readonly, nonatomic) NSSet *domains;
@property (retain, nonatomic) NSObject<FFFileReader> *filereader; // ivar: _filereader
@property (retain, nonatomic) NSObject<FFFileWriter> *filewriter; // ivar: _filewriter
@property (retain, nonatomic) NSMutableArray *profilePayloads; // ivar: _profilePayloads


+(BOOL)isValidDisclosureName:(id)arg0 ;
+(BOOL)isValidName:(id)arg0 ;
+(id)_configurationForTestingWithFileReader:(id)arg0 fileWriter:(id)arg1 ;
+(id)configurationForProfileManagement;
+(id)configurationForTestingWithFileReader:(id)arg0 ;
+(id)configurationForTestingWithFileReader:(id)arg0 fileWriter:(id)arg1 ;
+(id)configurationForTestingWithFileWriter:(id)arg0 ;
+(id)shared;
-(BOOL)addProfilePayload:(id)arg0 error:(*id)arg1 ;
-(BOOL)commitProfilePayloadsAndReturnError:(*id)arg0 ;
-(BOOL)commitUpdates:(*id)arg0 ;
-(BOOL)isFeatureHidden:(id)arg0 domain:(id)arg1 ;
-(BOOL)isValidDisclosureName:(id)arg0 ;
-(BOOL)isValidName:(id)arg0 ;
-(BOOL)reset:(*id)arg0 ;
-(BOOL)resetDomain:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolvedStateForDisclosure:(id)arg0 ;
-(BOOL)writeCombinedUpdates:(*id)arg0 ;
-(BOOL)writeCombinedUpdatesAtLevel:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeDisclosureUpdates:(*id)arg0 ;
-(BOOL)writeDisclosureUpdatesAtlevel:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeDomainUpdates:(*id)arg0 ;
-(id)currentDisclosures;
-(id)currentDisclosuresAtLevel:(NSInteger)arg0 ;
-(id)defaultStateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)disclosureFileURLForLevel:(NSInteger)arg0 pathIndex:(int)arg1 ;
-(id)effectiveStateForFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(id)featuresForDomain:(id)arg0 ;
-(id)fileURLForDomain:(id)arg0 pathIndex:(int)arg1 ;
-(id)fileURLForLevel:(NSInteger)arg0 pathIndex:(int)arg1 ;
-(id)initPrivate;
-(id)makeFeatureDictionaryFrom:(id)arg0 forDomain:(id)arg1 ;
-(id)mutableDisclosureSetAtLevel:(NSInteger)arg0 ;
-(id)resolvedStateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)stateForFeature:(id)arg0 domain:(id)arg1 ;
-(id)stateForFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)addDisclosure:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)addFeaturesForDomain:(id)arg0 pathIndex:(int)arg1 fromURL:(id)arg2 ;
-(void)clearCachedData;
-(void)createMutableDomainConfig:(id)arg0 level:(NSInteger)arg1 ;
-(void)disableFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)disableFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)enableFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)enableFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)invalidateCache;
-(void)loadAllData;
-(void)loadAllLevelsForDomain:(id)arg0 ;
-(void)loadCombinedDataForLevel:(NSInteger)arg0 ;
-(void)loadDomain:(id)arg0 level:(NSInteger)arg1 ;
-(void)populateDictionary:(id)arg0 withFeatures:(id)arg1 ;
-(void)prepareToAddProfilePayloads;
-(void)removeAllDisclosuresAtLevel:(NSInteger)arg0 ;
-(void)removeDisclosure:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)setFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 value:(NSInteger)arg2 ;
-(void)setValue:(NSInteger)arg0 feature:(id)arg1 domain:(id)arg2 level:(NSInteger)arg3 ;
-(void)unsetFeature:(id)arg0 domain:(id)arg1 level:(NSInteger)arg2 ;
-(void)unsetFeaturesMatchingAttribute:(id)arg0 level:(NSInteger)arg1 ;
-(void)validateName:(id)arg0 ;


@end


#endif