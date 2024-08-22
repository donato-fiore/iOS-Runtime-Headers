// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGENRICHEDMEMORY_H
#define PGENRICHEDMEMORY_H

@class NSArray, NSDate, NSString, NSIndexSet, NSDictionary;
@protocol PGEnrichedMemoryProtocol, PGTriggeredMemoryProtocol;

#import <Foundation/Foundation.h>

#import "PGFlexMusicCuration.h"
#import "PGGraphFeatureNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"
#import "PGMusicCuration.h"
#import "PGMoodVector.h"

@interface PGEnrichedMemory : NSObject <PGEnrichedMemoryProtocol>

 {
    id<PGTriggeredMemoryProtocol> *_triggeredMemory;
}


@property (retain, nonatomic) NSArray *blockableFeatures;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSArray *curatedAssetUUIDs; // ivar: _curatedAssetUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat electionScore;
@property (copy, nonatomic) NSArray *extendedCuratedAssetUUIDs; // ivar: _extendedCuratedAssetUUIDs
@property (readonly, nonatomic) BOOL failedEnrichment;
@property (nonatomic) NSUInteger failureReason; // ivar: _failureReason
@property (nonatomic) BOOL featuresGuestAssets; // ivar: _featuresGuestAssets
@property (retain, nonatomic) PGFlexMusicCuration *flexMusicCuration; // ivar: _flexMusicCuration
@property (nonatomic) NSUInteger forbiddenMoods; // ivar: _forbiddenMoods
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *keyAssetUUID; // ivar: _keyAssetUUID
@property (copy, nonatomic) NSArray *legacyMoodKeywords; // ivar: _legacyMoodKeywords
@property (readonly, nonatomic) NSUInteger memoryCategory;
@property (readonly, nonatomic) NSUInteger memoryCategorySubcategory;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *memoryFeatureNodes;
@property (readonly, nonatomic) PGGraphMomentNodeCollection *memoryMomentNodes;
@property (retain, nonatomic) PGMusicCuration *musicCuration; // ivar: _musicCuration
@property (nonatomic) NSInteger notificationLevel; // ivar: _notificationLevel
@property (nonatomic) NSUInteger numberOfRelevantAssets; // ivar: _numberOfRelevantAssets
@property (readonly, nonatomic) NSInteger photosGraphVersion;
@property (retain, nonatomic) PGMoodVector *positiveMoodVector; // ivar: _positiveMoodVector
@property (nonatomic) NSUInteger recommendedMoods; // ivar: _recommendedMoods
@property (copy, nonatomic) NSArray *representativeAssetUUIDs; // ivar: _representativeAssetUUIDs
@property (nonatomic) CGFloat score; // ivar: _score
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) NSUInteger suggestedMood; // ivar: _suggestedMood
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleCategory; // ivar: _titleCategory
@property (readonly, nonatomic) NSIndexSet *triggerTypes;
@property (readonly, nonatomic) NSString *uniqueMemoryIdentifier;
@property (readonly, nonatomic) NSDictionary *validityIntervalByTriggerType;


-(id)enrichedDescription;
-(id)initWithTriggeredMemory:(id)arg0 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif