// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPHOMECONTROLSUGGESTER_H
#define ARPHOMECONTROLSUGGESTER_H

@class NSString, NSArray;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ARPHomeControlSuggester : NSObject

@property (copy, nonatomic) NSString *correlationsSessionFile; // ivar: _correlationsSessionFile
@property (nonatomic) CGFloat highScoreThresholdForMicroLocationSuggestionMerge; // ivar: _highScoreThresholdForMicroLocationSuggestionMerge
@property (nonatomic) CGFloat highScoreThresholdForTimeBasedSuggestionMerge; // ivar: _highScoreThresholdForTimeBasedSuggestionMerge
@property (retain, nonatomic) NSArray *homeKitEventsSortedByStartDate; // ivar: _homeKitEventsSortedByStartDate
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (nonatomic) CGFloat lowScoreThresholdForMicroLocationSuggestionMerge; // ivar: _lowScoreThresholdForMicroLocationSuggestionMerge
@property (nonatomic) CGFloat lowScoreThresholdForTimeBasedSuggestionMerge; // ivar: _lowScoreThresholdForTimeBasedSuggestionMerge
@property (nonatomic) CGFloat scoreSceneBoost; // ivar: _scoreSceneBoost
@property (nonatomic) CGFloat scoreThresholdForMicrolocationSuggestionsConsidered; // ivar: _scoreThresholdForMicrolocationSuggestionsConsidered


+(id)defaultCorrelationsSessionFile;
+(id)suggester;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(NSUInteger)arg0 ;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(NSUInteger)arg0 events:(id)arg1 ;
-(id)frequencybasedSuggestionsWitMaxSuggestions:(NSUInteger)arg0 events:(id)arg1 useScenes:(BOOL)arg2 ;
-(id)homeKitEventsWithLookbackDays:(NSInteger)arg0 ;
-(id)initWithScoreThresholdForMicrolocationSuggestionsConsidered:(CGFloat)arg0 highScoreThresholdForMicroLocationSuggestionMerge:(CGFloat)arg1 lowScoreThresholdForMicroLocationSuggestionMerge:(CGFloat)arg2 highScoreThresholdForTimeBasedSuggestionMerge:(CGFloat)arg3 lowScoreThresholdForTimeBasedSuggestionMerge:(CGFloat)arg4 ;
-(id)microlocationBasedsuggestionsWithMaxSuggestions:(NSUInteger)arg0 referenceDate:(id)arg1 correlationsFile:(id)arg2 ;
-(id)mostRecentHomeKitEvent;
-(id)nextActionBasedsuggestionsWithMaxSuggestions:(NSUInteger)arg0 referenceDate:(id)arg1 correlationsFile:(id)arg2 ;
-(id)suggestionsWithMaxSuggestions:(NSUInteger)arg0 ;
-(id)suggestionsWithMaxSuggestions:(NSUInteger)arg0 referenceDate:(id)arg1 correlationsFile:(id)arg2 ;
-(id)timeBasedSuggestionsWithMaxSuggestions:(NSUInteger)arg0 referenceDate:(id)arg1 ;
-(id)timeBasedSuggestionsWithMaxSuggestions:(NSUInteger)arg0 referenceDate:(id)arg1 fallBackToFrequency:(BOOL)arg2 ;
-(id)timeBucketFrequencyBasedSuggestionsWithMaxSuggestions:(NSUInteger)arg0 events:(id)arg1 referenceDate:(id)arg2 ;


@end


#endif