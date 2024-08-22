// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGGUESSWHORELATIONSHIPMETRICEVENT_H
#define PGGUESSWHORELATIONSHIPMETRICEVENT_H

@class NSDictionary;


#import "PGAbstractMetricEvent.h"
#import "PGManager.h"

@interface PGGuessWhoRelationshipMetricEvent : PGAbstractMetricEvent {
    PGManager *_manager;
    NSDictionary *_payload;
}


@property (nonatomic) NSUInteger numberOfAgeDifferentThanMeSignalRegistrations; // ivar: _numberOfAgeDifferentThanMeSignalRegistrations
@property (nonatomic) NSUInteger numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference; // ivar: _numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfAnniversaryDateSignalRegistrations; // ivar: _numberOfAnniversaryDateSignalRegistrations
@property (nonatomic) NSUInteger numberOfAnniversaryDateSignalRegistrationsInCorrectInference; // ivar: _numberOfAnniversaryDateSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfCoworkerCalendarSignalRegistrations; // ivar: _numberOfCoworkerCalendarSignalRegistrations
@property (nonatomic) NSUInteger numberOfCoworkerCalendarSignalRegistrationsInCorrectInference; // ivar: _numberOfCoworkerCalendarSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfCoworkersAtWorkSignalRegistrations; // ivar: _numberOfCoworkersAtWorkSignalRegistrations
@property (nonatomic) NSUInteger numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference; // ivar: _numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfFamilyHolidaySignalRegistrations; // ivar: _numberOfFamilyHolidaySignalRegistrations
@property (nonatomic) NSUInteger numberOfFamilyHolidaySignalRegistrationsInCorrectInference; // ivar: _numberOfFamilyHolidaySignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfFriendNightOutSignalRegistrations; // ivar: _numberOfFriendNightOutSignalRegistrations
@property (nonatomic) NSUInteger numberOfFriendNightOutSignalRegistrationsInCorrectInference; // ivar: _numberOfFriendNightOutSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfFriendsFamilyTripSignalRegistrations; // ivar: _numberOfFriendsFamilyTripSignalRegistrations
@property (nonatomic) NSUInteger numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference; // ivar: _numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfHomeMomentsSignalRegistrations; // ivar: _numberOfHomeMomentsSignalRegistrations
@property (nonatomic) NSUInteger numberOfHomeMomentsSignalRegistrationsInCorrectInference; // ivar: _numberOfHomeMomentsSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfInferredChildren; // ivar: _numberOfInferredChildren
@property (nonatomic) NSUInteger numberOfInferredCoworkers; // ivar: _numberOfInferredCoworkers
@property (nonatomic) NSUInteger numberOfInferredFamilyMembers; // ivar: _numberOfInferredFamilyMembers
@property (nonatomic) NSUInteger numberOfInferredFriends; // ivar: _numberOfInferredFriends
@property (nonatomic) NSUInteger numberOfInferredParents; // ivar: _numberOfInferredParents
@property (nonatomic) NSUInteger numberOfInferredPartners; // ivar: _numberOfInferredPartners
@property (nonatomic) NSUInteger numberOfLoveEmojisSignalRegistrations; // ivar: _numberOfLoveEmojisSignalRegistrations
@property (nonatomic) NSUInteger numberOfLoveEmojisSignalRegistrationsInCorrectInference; // ivar: _numberOfLoveEmojisSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfParentContactNameSignalRegistrations; // ivar: _numberOfParentContactNameSignalRegistrations
@property (nonatomic) NSUInteger numberOfParentContactNameSignalRegistrationsInCorrectInference; // ivar: _numberOfParentContactNameSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfParentGrandparentOldSignalRegistrations; // ivar: _numberOfParentGrandparentOldSignalRegistrations
@property (nonatomic) NSUInteger numberOfParentGrandparentOldSignalRegistrationsInCorrectInference; // ivar: _numberOfParentGrandparentOldSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfPartnerTripSignalRegistrations; // ivar: _numberOfPartnerTripSignalRegistrations
@property (nonatomic) NSUInteger numberOfPartnerTripSignalRegistrationsInCorrectInference; // ivar: _numberOfPartnerTripSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfPeople; // ivar: _numberOfPeople
@property (nonatomic) NSUInteger numberOfSameFamilyNameSignalRegistrations; // ivar: _numberOfSameFamilyNameSignalRegistrations
@property (nonatomic) NSUInteger numberOfSameFamilyNameSignalRegistrationsInCorrectInference; // ivar: _numberOfSameFamilyNameSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfTopPersonSignalRegistrations; // ivar: _numberOfTopPersonSignalRegistrations
@property (nonatomic) NSUInteger numberOfTopPersonSignalRegistrationsInCorrectInference; // ivar: _numberOfTopPersonSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfTopTwoPersonSocialGroupSignalRegistrations; // ivar: _numberOfTopTwoPersonSocialGroupSignalRegistrations
@property (nonatomic) NSUInteger numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference; // ivar: _numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference
@property (nonatomic) NSUInteger numberOfWeekendSignalRegistrations; // ivar: _numberOfWeekendSignalRegistrations
@property (nonatomic) NSUInteger numberOfWeekendSignalRegistrationsInCorrectInference; // ivar: _numberOfWeekendSignalRegistrationsInCorrectInference


-(id)_inferredRelationshipKeys;
-(id)_readableStringByRelationshipEdgeProperty;
-(id)_relationshipKeyForLabel:(id)arg0 ;
-(id)identifier;
-(id)initWithGraphManager:(id)arg0 ;
-(id)payload;
-(void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)arg0 inferredRelationshipCorrect:(BOOL)arg1 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif