// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGRAPHINFONODE_H
#define PGGRAPHINFONODE_H

@class NSString, NSDate, NSArray, NSLocale;


#import "PGGraphOptimizedNode.h"

@interface PGGraphInfoNode : PGGraphOptimizedNode {
    CGFloat _creationDateTimeInterval;
    NSString *_flattenedLanguageIdentifiers;
}


@property (readonly) NSUInteger ageCategoryAlgorithmsVersion; // ivar: _ageCategoryAlgorithmsVersion
@property (readonly) NSUInteger autonamingAlgorithmsVersion; // ivar: _autonamingAlgorithmsVersion
@property (readonly) NSUInteger businessItemAlgorithmsVersion; // ivar: _businessItemAlgorithmsVersion
@property (readonly) BOOL canAccessContactsStore; // ivar: _canAccessContactsStore
@property (readonly) BOOL canUseLocationDomain; // ivar: _canUseLocationDomain
@property (readonly) NSDate *creationDate;
@property (readonly) NSUInteger curationAlgorithmsVersion; // ivar: _curationAlgorithmsVersion
@property (readonly) NSUInteger featuredPhotoAlgorithmsVersion; // ivar: _featuredPhotoAlgorithmsVersion
@property (readonly) NSString *geoServiceProviderID; // ivar: _geoServiceProviderID
@property (readonly) NSUInteger holidayAlgorithmsVersion; // ivar: _holidayAlgorithmsVersion
@property (readonly) NSUInteger homeLocationAlgorithmsVersion; // ivar: _homeLocationAlgorithmsVersion
@property (readonly) NSArray *languageIdentifiers;
@property (readonly) NSLocale *locale;
@property (readonly) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly) NSUInteger longTailFeaturedPhotoAlgorithmsVersion; // ivar: _longTailFeaturedPhotoAlgorithmsVersion
@property (readonly) NSUInteger meaningAlgorithmsVersion; // ivar: _meaningAlgorithmsVersion
@property (readonly) NSUInteger memoriesAlgorithmsVersion; // ivar: _memoriesAlgorithmsVersion
@property (readonly) NSUInteger memoryQualityAlgorithmsVersion; // ivar: _memoryQualityAlgorithmsVersion
@property (readonly) NSUInteger numberOfAssets;
@property (readonly) NSUInteger numberOfBetterAssets; // ivar: _numberOfBetterAssets
@property (readonly) NSUInteger numberOfDefaultAssets; // ivar: _numberOfDefaultAssets
@property (readonly) NSUInteger numberOfImprovedAssets; // ivar: _numberOfImprovedAssets
@property (readonly) NSUInteger numberOfSelfies; // ivar: _numberOfSelfies
@property (readonly) NSUInteger numberOfUtilityAssets; // ivar: _numberOfUtilityAssets
@property (readonly) NSUInteger personActivityMeaningAlgorithmsVersion; // ivar: _personActivityMeaningAlgorithmsVersion
@property (readonly) CGFloat personalGoodAestheticsThreshold; // ivar: _personalGoodAestheticsThreshold
@property (readonly) CGFloat personalHighAestheticsThreshold; // ivar: _personalHighAestheticsThreshold
@property (readonly) NSUInteger petAlgorithmsVersion; // ivar: _petAlgorithmsVersion
@property (readonly) NSUInteger publicEventAlgorithmsVersion; // ivar: _publicEventAlgorithmsVersion
@property (readonly) NSUInteger questionsVersion; // ivar: _questionsVersion
@property (readonly) NSUInteger relatedAlgorithmsVersion; // ivar: _relatedAlgorithmsVersion
@property (readonly) NSUInteger relationshipAlgorithmsVersion; // ivar: _relationshipAlgorithmsVersion
@property (readonly) PGRoutineInfoStruct routineInfo; // ivar: _routineInfo
@property (readonly) CGFloat topTierAestheticScore; // ivar: _topTierAestheticScore
@property (readonly) CGFloat topTierAestheticScoreForTripKeyAsset; // ivar: _topTierAestheticScoreForTripKeyAsset
@property (readonly) NSUInteger tripKeyAssetAlgorithmsVersion; // ivar: _tripKeyAssetAlgorithmsVersion
@property (readonly) NSUInteger workLocationAlgorithmsVersion; // ivar: _workLocationAlgorithmsVersion


+(id)assetPropertiesWithNumberOfUtilityAssets:(NSUInteger)arg0 numberOfDefaultAssets:(NSUInteger)arg1 numberOfImprovedAssets:(NSUInteger)arg2 numberOfBetterAssets:(NSUInteger)arg3 ;
+(id)deserializeLanguageIdentifiers:(id)arg0 ;
+(id)genericPropertiesWithCreationDate:(id)arg0 localeIdentifier:(id)arg1 languageIdentifiers:(id)arg2 geoServiceProviderID:(id)arg3 curationAlgorithmsVersion:(NSUInteger)arg4 contactsStoreAccess:(BOOL)arg5 ;
+(id)locationPropertiesWithCanUseLocationDomain:(BOOL)arg0 ;
+(id)numberOfSelfies:(NSUInteger)arg0 ;
+(id)personalAestheticsPropertiesWithHighAestheticsThreshold:(CGFloat)arg0 goodAestheticsThreshold:(CGFloat)arg1 ;
+(id)routineInfoPropertiesWithServiceManager:(id)arg0 ;
+(id)serializeLanguageIdentifiers:(id)arg0 ;
+(id)topTierScorePropertiesWithAestheticScore:(CGFloat)arg0 aestheticScoreForTripKeyAsset:(CGFloat)arg1 ;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithCreationDate:(id)arg0 localeIdentifier:(id)arg1 languageIdentifiers:(id)arg2 geoServiceProviderID:(id)arg3 curationAlgorithmsVersion:(NSUInteger)arg4 contactsStoreAccess:(BOOL)arg5 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)setLocalProperties:(id)arg0 ;


@end


#endif