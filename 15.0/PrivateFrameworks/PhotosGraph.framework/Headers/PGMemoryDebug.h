// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEMORYDEBUG_H
#define PGMEMORYDEBUG_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "PGMoodVector.h"

@interface PGMemoryDebug : NSObject

@property (retain, nonatomic) NSDictionary *additionalInfoKeywords; // ivar: _additionalInfoKeywords
@property (nonatomic) CGFloat collectionContentScore; // ivar: _collectionContentScore
@property (retain, nonatomic) NSArray *collectionMeaningLabels; // ivar: _collectionMeaningLabels
@property (nonatomic) CGFloat collectionMeaningScore; // ivar: _collectionMeaningScore
@property (nonatomic) CGFloat contentScore; // ivar: _contentScore
@property (retain, nonatomic) NSDictionary *eventKeywords; // ivar: _eventKeywords
@property (nonatomic) NSUInteger forbiddenMoods; // ivar: _forbiddenMoods
@property (nonatomic) CGFloat graphScore; // ivar: _graphScore
@property (retain, nonatomic) PGMoodVector *historyWeightedPositiveMoodVector; // ivar: _historyWeightedPositiveMoodVector
@property (retain, nonatomic) NSDictionary *matchingKeywords; // ivar: _matchingKeywords
@property (nonatomic) CGFloat matchingScore; // ivar: _matchingScore
@property (nonatomic) CGFloat meanContentScore; // ivar: _meanContentScore
@property (retain, nonatomic) NSArray *meaningLabels; // ivar: _meaningLabels
@property (retain, nonatomic) NSArray *moodKeywords; // ivar: _moodKeywords
@property (retain, nonatomic) PGMoodVector *negativeMoodVector; // ivar: _negativeMoodVector
@property (nonatomic) CGFloat neighborScore; // ivar: _neighborScore
@property (nonatomic) NSUInteger numberOfCollections; // ivar: _numberOfCollections
@property (nonatomic) NSUInteger numberOfMoments; // ivar: _numberOfMoments
@property (nonatomic) NSUInteger numberOfPeople; // ivar: _numberOfPeople
@property (nonatomic) NSUInteger numberOfRelevantAssets; // ivar: _numberOfRelevantAssets
@property (retain, nonatomic) PGMoodVector *positiveMoodVector; // ivar: _positiveMoodVector
@property (nonatomic) NSUInteger recommendedMoods; // ivar: _recommendedMoods
@property (retain, nonatomic) NSDictionary *referenceKeywords; // ivar: _referenceKeywords
@property (nonatomic) NSUInteger suggestedMood; // ivar: _suggestedMood




@end


#endif