// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATIONRESULT_H
#define ATXPROACTIVESUGGESTIONCLIENTMODELEVALUATIONRESULT_H

@class NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXProactiveSuggestionClientModelEvaluationResult : NSObject {
    NSSet *_dockedApps;
}


@property (nonatomic) NSUInteger engagedInTop1; // ivar: _engagedInTop1
@property (nonatomic) NSUInteger engagedInTop2; // ivar: _engagedInTop2
@property (nonatomic) NSUInteger engagedInTop4; // ivar: _engagedInTop4
@property (retain, nonatomic) NSMutableDictionary *engagedInTop4PerCandidate; // ivar: _engagedInTop4PerCandidate
@property (nonatomic) NSUInteger engagedInTop8; // ivar: _engagedInTop8
@property (retain, nonatomic) NSMutableDictionary *engagedInTop8PerCandidate; // ivar: _engagedInTop8PerCandidate
@property (retain, nonatomic) NSMutableDictionary *engagedPerCandidate; // ivar: _engagedPerCandidate
@property (readonly, nonatomic) NSInteger executableType; // ivar: _executableType
@property (nonatomic) NSUInteger numberOfSessions; // ivar: _numberOfSessions
@property (nonatomic) NSUInteger numberOfSessionsWithPredictions; // ivar: _numberOfSessionsWithPredictions
@property (nonatomic) float reciprocalRank; // ivar: _reciprocalRank
@property (readonly, nonatomic) BOOL removeDockedApps; // ivar: _removeDockedApps
@property (readonly, nonatomic) NSUInteger sessionType; // ivar: _sessionType
@property (retain, nonatomic) NSMutableDictionary *shownInTop8PerCandidate; // ivar: _shownInTop8PerCandidate


+(NSInteger)rankOfEngagedSuggestion:(id)arg0 inSuggestions:(id)arg1 ;
-(id)description;
-(id)filteredSuggestions:(id)arg0 removeDockedApps:(BOOL)arg1 ;
-(id)initWithSessionType:(NSUInteger)arg0 executableType:(NSInteger)arg1 removeDockedApps:(BOOL)arg2 ;
-(void)updateCountsForSessionsWithShownSuggestions:(id)arg0 engagedSuggestions:(id)arg1 rejectedSuggestions:(id)arg2 ;


@end


#endif