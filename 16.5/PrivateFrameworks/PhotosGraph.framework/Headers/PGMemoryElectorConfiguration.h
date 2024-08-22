// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEMORYELECTORCONFIGURATION_H
#define PGMEMORYELECTORCONFIGURATION_H

@class NSArray, NSDate, NSString, NSTimeZone;


#import "PGConfiguration.h"
#import "PGFeature.h"

@interface PGMemoryElectorConfiguration : PGConfiguration

@property (nonatomic) BOOL allowGuestAsset; // ivar: _allowGuestAsset
@property (retain, nonatomic) NSArray *collidableSuggestions; // ivar: _collidableSuggestions
@property (copy, nonatomic) NSDate *localDate; // ivar: _localDate
@property (nonatomic) NSUInteger maximumNumberOfMemoriesWithGuestAssets; // ivar: _maximumNumberOfMemoriesWithGuestAssets
@property (nonatomic) CGFloat maximumRatioOfGuestAssets; // ivar: _maximumRatioOfGuestAssets
@property (nonatomic) NSUInteger maximumTargetNumberOfMemories; // ivar: _maximumTargetNumberOfMemories
@property (nonatomic) NSUInteger minimumNumberOfCuratedAssets; // ivar: _minimumNumberOfCuratedAssets
@property (nonatomic) NSUInteger minimumNumberOfDaysBeforeTimeDecay; // ivar: _minimumNumberOfDaysBeforeTimeDecay
@property (nonatomic) NSUInteger minimumTargetNumberOfMemories; // ivar: _minimumTargetNumberOfMemories
@property (retain, nonatomic) NSArray *moodHistory; // ivar: _moodHistory
@property (nonatomic) NSUInteger numberOfDaysToFocusOnNewMemoryTypes; // ivar: _numberOfDaysToFocusOnNewMemoryTypes
@property (nonatomic) NSUInteger numberOfDaysToLookInFuture; // ivar: _numberOfDaysToLookInFuture
@property (nonatomic) NSUInteger numberOfDaysToLookInPast; // ivar: _numberOfDaysToLookInPast
@property (nonatomic) unsigned short pendingState; // ivar: _pendingState
@property (retain, nonatomic) PGFeature *requestedFeature; // ivar: _requestedFeature
@property (nonatomic) NSUInteger requestedMemoryCategory; // ivar: _requestedMemoryCategory
@property (nonatomic) NSUInteger requestedTriggerType; // ivar: _requestedTriggerType
@property (retain, nonatomic) NSString *requestedUniqueMemoryIdentifier; // ivar: _requestedUniqueMemoryIdentifier
@property (nonatomic) BOOL shouldPersist; // ivar: _shouldPersist
@property (nonatomic) BOOL skipEnrichment; // ivar: _skipEnrichment
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) BOOL useMaximumTargetNumberOfMemories; // ivar: _useMaximumTargetNumberOfMemories


+(id)defaultConfigurationDictionarySource;
-(NSUInteger)targetNumberOfMemoriesWithMemoryContext:(id)arg0 totalNumberOfMemoryNodes:(NSUInteger)arg1 referenceNumberOfDays:(NSUInteger)arg2 ;
-(id)futureMemoryCollisionUniversalDateInterval;
-(id)init;
-(id)pastMemoryCollisionUniversalDateInterval;


@end


#endif