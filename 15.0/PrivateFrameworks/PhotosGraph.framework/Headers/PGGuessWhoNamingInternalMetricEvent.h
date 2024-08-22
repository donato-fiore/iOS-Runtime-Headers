// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGUESSWHONAMINGINTERNALMETRICEVENT_H
#define PGGUESSWHONAMINGINTERNALMETRICEVENT_H

@class NSDictionary;


#import "PGAbstractMetricEvent.h"
#import "PGManager.h"

@interface PGGuessWhoNamingInternalMetricEvent : PGAbstractMetricEvent {
    PGManager *_manager;
    NSDictionary *_payload;
}


@property (nonatomic) NSUInteger falsePositiveAddressSignal; // ivar: _falsePositiveAddressSignal
@property (nonatomic) NSUInteger falsePositiveBiologicalSexSignal; // ivar: _falsePositiveBiologicalSexSignal
@property (nonatomic) NSUInteger falsePositiveBirthdaySignal; // ivar: _falsePositiveBirthdaySignal
@property (nonatomic) NSUInteger falsePositiveCMMSignal; // ivar: _falsePositiveCMMSignal
@property (nonatomic) NSUInteger falsePositiveCalendarSignal; // ivar: _falsePositiveCalendarSignal
@property (nonatomic) NSUInteger falsePositiveContactFaceprintSignal; // ivar: _falsePositiveContactFaceprintSignal
@property (nonatomic) NSUInteger falsePositiveFaceTimeSignal; // ivar: _falsePositiveFaceTimeSignal
@property (nonatomic) NSUInteger falsePositiveMentionedAddressSignal; // ivar: _falsePositiveMentionedAddressSignal
@property (nonatomic) NSUInteger falsePositivePotentialBirthdaySignal; // ivar: _falsePositivePotentialBirthdaySignal
@property (nonatomic) NSUInteger falsePositiveRelationshipSignal; // ivar: _falsePositiveRelationshipSignal
@property (nonatomic) NSUInteger falsePositiveSharedAssetSignal; // ivar: _falsePositiveSharedAssetSignal
@property (nonatomic) NSUInteger falsePositiveSocialGroupSignal; // ivar: _falsePositiveSocialGroupSignal
@property (nonatomic) NSUInteger numberOfAddressSignalRegistrations; // ivar: _numberOfAddressSignalRegistrations
@property (nonatomic) NSUInteger numberOfBiologicalSexSignalRegistrations; // ivar: _numberOfBiologicalSexSignalRegistrations
@property (nonatomic) NSUInteger numberOfBirthdaySignalRegistrations; // ivar: _numberOfBirthdaySignalRegistrations
@property (nonatomic) NSUInteger numberOfCMMSignalRegistrations; // ivar: _numberOfCMMSignalRegistrations
@property (nonatomic) NSUInteger numberOfCalendarSignalRegistrations; // ivar: _numberOfCalendarSignalRegistrations
@property (nonatomic) NSUInteger numberOfContactFaceprintSignalRegistrations; // ivar: _numberOfContactFaceprintSignalRegistrations
@property (nonatomic) NSUInteger numberOfFaceTimeSignalRegistrations; // ivar: _numberOfFaceTimeSignalRegistrations
@property (nonatomic) NSUInteger numberOfMentionedAddressSignalRegistrations; // ivar: _numberOfMentionedAddressSignalRegistrations
@property (nonatomic) NSUInteger numberOfPotentialBirthdaySignalRegistrations; // ivar: _numberOfPotentialBirthdaySignalRegistrations
@property (nonatomic) NSUInteger numberOfRelationshipSignalRegistrations; // ivar: _numberOfRelationshipSignalRegistrations
@property (nonatomic) NSUInteger numberOfSharedAssetSignalRegistrations; // ivar: _numberOfSharedAssetSignalRegistrations
@property (nonatomic) NSUInteger numberOfSocialGroupSignalRegistrations; // ivar: _numberOfSocialGroupSignalRegistrations
@property (nonatomic) CGFloat precisionAddressSignal; // ivar: _precisionAddressSignal
@property (nonatomic) CGFloat precisionBiologicalSexSignal; // ivar: _precisionBiologicalSexSignal
@property (nonatomic) CGFloat precisionBirthdaySignal; // ivar: _precisionBirthdaySignal
@property (nonatomic) CGFloat precisionCMMSignal; // ivar: _precisionCMMSignal
@property (nonatomic) CGFloat precisionCalendarSignal; // ivar: _precisionCalendarSignal
@property (nonatomic) CGFloat precisionContactFaceprintSignal; // ivar: _precisionContactFaceprintSignal
@property (nonatomic) CGFloat precisionContactSuggestionTop1; // ivar: _precisionContactSuggestionTop1
@property (nonatomic) CGFloat precisionContactSuggestionTop10; // ivar: _precisionContactSuggestionTop10
@property (nonatomic) CGFloat precisionContactSuggestionTop2; // ivar: _precisionContactSuggestionTop2
@property (nonatomic) CGFloat precisionContactSuggestionTop3; // ivar: _precisionContactSuggestionTop3
@property (nonatomic) CGFloat precisionFaceTimeSignal; // ivar: _precisionFaceTimeSignal
@property (nonatomic) CGFloat precisionHighConfidenceContactSuggestion; // ivar: _precisionHighConfidenceContactSuggestion
@property (nonatomic) CGFloat precisionMentionedAddressSignal; // ivar: _precisionMentionedAddressSignal
@property (nonatomic) CGFloat precisionPotentialBirthdaySignal; // ivar: _precisionPotentialBirthdaySignal
@property (nonatomic) CGFloat precisionRelationshipSignal; // ivar: _precisionRelationshipSignal
@property (nonatomic) CGFloat precisionSharedAssetSignal; // ivar: _precisionSharedAssetSignal
@property (nonatomic) CGFloat precisionSocialGroupSignal; // ivar: _precisionSocialGroupSignal
@property (nonatomic) NSUInteger truePositiveAddressSignal; // ivar: _truePositiveAddressSignal
@property (nonatomic) NSUInteger truePositiveBiologicalSexSignal; // ivar: _truePositiveBiologicalSexSignal
@property (nonatomic) NSUInteger truePositiveBirthdaySignal; // ivar: _truePositiveBirthdaySignal
@property (nonatomic) NSUInteger truePositiveCMMSignal; // ivar: _truePositiveCMMSignal
@property (nonatomic) NSUInteger truePositiveCalendarSignal; // ivar: _truePositiveCalendarSignal
@property (nonatomic) NSUInteger truePositiveContactFaceprintSignal; // ivar: _truePositiveContactFaceprintSignal
@property (nonatomic) NSUInteger truePositiveFaceTimeSignal; // ivar: _truePositiveFaceTimeSignal
@property (nonatomic) NSUInteger truePositiveMentionedAddressSignal; // ivar: _truePositiveMentionedAddressSignal
@property (nonatomic) NSUInteger truePositivePotentialBirthdaySignal; // ivar: _truePositivePotentialBirthdaySignal
@property (nonatomic) NSUInteger truePositiveRelationshipSignal; // ivar: _truePositiveRelationshipSignal
@property (nonatomic) NSUInteger truePositiveSharedAssetSignal; // ivar: _truePositiveSharedAssetSignal
@property (nonatomic) NSUInteger truePositiveSocialGroupSignal; // ivar: _truePositiveSocialGroupSignal


-(CGFloat)_precisionFromTruePositivesCount:(NSUInteger)arg0 falsePositivesCount:(NSUInteger)arg1 ;
-(id)_peopleIdentitiesSignals;
-(id)identifier;
-(id)initWithGraphManager:(id)arg0 ;
-(id)payload;
-(void)_incrementSignalEvaluationForSignal:(NSUInteger)arg0 suggestionEdge:(id)arg1 isCorrect:(BOOL)arg2 ;
-(void)_incrementSignalRegistrationForSignal:(NSUInteger)arg0 suggestionEdge:(id)arg1 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif