// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORY_H
#define PGMEMORY_H

@class PHAssetCollection, NSArray, NSDate, PHAsset, NSString, NSSet, CLLocation, NSDictionary, NSMutableSet, NSIndexSet;
@protocol PGMemoryProtocol, PGMemoryCore;

#import <Foundation/Foundation.h>

#import "PGMemoryDebug.h"

@interface PGMemory : NSObject <PGMemoryProtocol, PGMemoryCore>



@property (readonly, nonatomic) NSUInteger aggregatedVersions; // ivar: _aggregatedVersions
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (retain, nonatomic) NSArray *blockableFeatures; // ivar: _blockableFeatures
@property (nonatomic) NSUInteger category; // ivar: _category
@property (retain, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSArray *curatedAssets; // ivar: _curatedAssets
@property (retain, nonatomic) PHAsset *curatedKeyAsset; // ivar: _curatedKeyAsset
@property (nonatomic) unsigned short curationAlgorithmsVersion;
@property (retain, nonatomic) PGMemoryDebug *debug; // ivar: _debug
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *encodedFeatures; // ivar: _encodedFeatures
@property (retain, nonatomic) NSArray *extendedCuratedAssets; // ivar: _extendedCuratedAssets
@property (retain, nonatomic) NSSet *features; // ivar: _features
@property (retain, nonatomic) NSString *graphMemoryIdentifier; // ivar: _graphMemoryIdentifier
@property (nonatomic) unsigned short graphSchemaVersion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (retain, nonatomic) NSDate *localStartDate; // ivar: _localStartDate
@property (retain, nonatomic) NSString *matchedEventName; // ivar: _matchedEventName
@property (retain, nonatomic) NSDate *matchedLocalDate; // ivar: _matchedLocalDate
@property (retain, nonatomic) CLLocation *matchedLocation; // ivar: _matchedLocation
@property (retain, nonatomic) NSSet *matchedPersonLocalIdentifiers; // ivar: _matchedPersonLocalIdentifiers
@property (nonatomic) NSUInteger matchedTypes; // ivar: _matchedTypes
@property (readonly, nonatomic) NSArray *meaningLabels;
@property (nonatomic) unsigned short memoriesAlgorithmsVersion;
@property (retain, nonatomic) NSSet *momentIDs; // ivar: _momentIDs
@property (readonly, nonatomic) NSArray *moodKeywords;
@property (copy, nonatomic) NSDictionary *musicGenreDistribution; // ivar: _musicGenreDistribution
@property (nonatomic) NSInteger notificationQuality; // ivar: _notificationQuality
@property (retain, nonatomic) NSDictionary *numberOfAssetsByMomentIDs; // ivar: _numberOfAssetsByMomentIDs
@property (nonatomic) NSUInteger originalSubcategory; // ivar: _originalSubcategory
@property (retain, nonatomic) NSMutableSet *persistedFeatures; // ivar: _persistedFeatures
@property (nonatomic) NSString *rejectionCause; // ivar: _rejectionCause
@property (nonatomic) unsigned short relatedAlgorithmsVersion;
@property (retain, nonatomic) NSArray *representativeAssets; // ivar: _representativeAssets
@property (nonatomic) CGFloat score; // ivar: _score
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (nonatomic) NSUInteger subcategory; // ivar: _subcategory
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSUInteger suggestedMood;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleCategory; // ivar: _titleCategory
@property (retain, nonatomic) NSIndexSet *triggerTypes; // ivar: _triggerTypes
@property (retain, nonatomic) NSDate *universalEndDate; // ivar: _universalEndDate
@property (retain, nonatomic) NSDate *universalStartDate; // ivar: _universalStartDate


+(id)greatMemoryCriteria;
+(id)mustSeeMemoryCriteria;
+(id)otherMemoryCriteria;
+(id)stellarMemoryCriteria;
-(BOOL)isGreat;
-(BOOL)isMustSee;
-(BOOL)isStellar;
-(CGFloat)_scoreForMemoryCriteria:(id)arg0 ;
-(CGFloat)legacyPHMemoryScore;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)initWithCreationDate:(id)arg0 ;
-(void)addPersistedFeature:(id)arg0 ;
-(void)setVersions;


@end


#endif