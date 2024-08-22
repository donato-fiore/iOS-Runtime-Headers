// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHSTATISTICSMETRICEVENT_H
#define PGGRAPHSTATISTICSMETRICEVENT_H



#import "PGAbstractMetricEvent.h"
#import "PGManager.h"

@interface PGGraphStatisticsMetricEvent : PGAbstractMetricEvent

@property (nonatomic) CGFloat averageDurationBetweenTwoSignificantEvents; // ivar: _averageDurationBetweenTwoSignificantEvents
@property (nonatomic) CGFloat averageMusicSessionSize; // ivar: _averageMusicSessionSize
@property (nonatomic) CGFloat averageSocialGroupSize; // ivar: _averageSocialGroupSize
@property (nonatomic) BOOL hasMeHomeNode; // ivar: _hasMeHomeNode
@property (nonatomic) BOOL hasMeNode; // ivar: _hasMeNode
@property (nonatomic) BOOL hasMeWorkNode; // ivar: _hasMeWorkNode
@property (nonatomic) BOOL hasMusicData; // ivar: _hasMusicData
@property (nonatomic) BOOL hasNamedMeNode; // ivar: _hasNamedMeNode
@property (nonatomic) NSUInteger librarySize; // ivar: _librarySize
@property (nonatomic) NSInteger librarySizeRange; // ivar: _librarySizeRange
@property (retain, nonatomic) PGManager *manager; // ivar: _manager
@property (nonatomic) NSUInteger maximumMusicSessionSize; // ivar: _maximumMusicSessionSize
@property (nonatomic) NSUInteger maximumSocialGroupSize; // ivar: _maximumSocialGroupSize
@property (nonatomic) NSUInteger numberOfBabyNodes; // ivar: _numberOfBabyNodes
@property (nonatomic) NSUInteger numberOfBusinessNodes; // ivar: _numberOfBusinessNodes
@property (nonatomic) NSUInteger numberOfCelebratedHolidays; // ivar: _numberOfCelebratedHolidays
@property (nonatomic) NSUInteger numberOfFrequentLocations; // ivar: _numberOfFrequentLocations
@property (nonatomic) NSUInteger numberOfFrequentLocationsCities; // ivar: _numberOfFrequentLocationsCities
@property (nonatomic) NSUInteger numberOfFrequentLocationsCountries; // ivar: _numberOfFrequentLocationsCountries
@property (nonatomic) NSUInteger numberOfLongTrips; // ivar: _numberOfLongTrips
@property (nonatomic) NSUInteger numberOfMeaningfulMoments; // ivar: _numberOfMeaningfulMoments
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivity; // ivar: _numberOfMeaningfulMomentsActivity
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivityBeach; // ivar: _numberOfMeaningfulMomentsActivityBeach
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivityClimbing; // ivar: _numberOfMeaningfulMomentsActivityClimbing
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivityDiving; // ivar: _numberOfMeaningfulMomentsActivityDiving
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivityHiking; // ivar: _numberOfMeaningfulMomentsActivityHiking
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsActivityWinterSport; // ivar: _numberOfMeaningfulMomentsActivityWinterSport
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsCelebration; // ivar: _numberOfMeaningfulMomentsCelebration
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsCelebrationAnniversary; // ivar: _numberOfMeaningfulMomentsCelebrationAnniversary
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsCelebrationBirthday; // ivar: _numberOfMeaningfulMomentsCelebrationBirthday
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsCelebrationHolidayEvent; // ivar: _numberOfMeaningfulMomentsCelebrationHolidayEvent
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsCelebrationWedding; // ivar: _numberOfMeaningfulMomentsCelebrationWedding
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainment; // ivar: _numberOfMeaningfulMomentsEntertainment
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentAmusementPark; // ivar: _numberOfMeaningfulMomentsEntertainmentAmusementPark
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentConcert; // ivar: _numberOfMeaningfulMomentsEntertainmentConcert
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentDance; // ivar: _numberOfMeaningfulMomentsEntertainmentDance
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentFestival; // ivar: _numberOfMeaningfulMomentsEntertainmentFestival
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentMuseum; // ivar: _numberOfMeaningfulMomentsEntertainmentMuseum
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentNightOut; // ivar: _numberOfMeaningfulMomentsEntertainmentNightOut
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentPerformance; // ivar: _numberOfMeaningfulMomentsEntertainmentPerformance
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentSportEvent; // ivar: _numberOfMeaningfulMomentsEntertainmentSportEvent
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsEntertainmentTheater; // ivar: _numberOfMeaningfulMomentsEntertainmentTheater
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsGathering; // ivar: _numberOfMeaningfulMomentsGathering
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsRestaurant; // ivar: _numberOfMeaningfulMomentsRestaurant
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsRestaurantBreakfast; // ivar: _numberOfMeaningfulMomentsRestaurantBreakfast
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsRestaurantDinner; // ivar: _numberOfMeaningfulMomentsRestaurantDinner
@property (nonatomic) NSUInteger numberOfMeaningfulMomentsRestaurantLunch; // ivar: _numberOfMeaningfulMomentsRestaurantLunch
@property (nonatomic) NSUInteger numberOfMoments; // ivar: _numberOfMoments
@property (nonatomic) NSUInteger numberOfMomentsAtMyHome; // ivar: _numberOfMomentsAtMyHome
@property (nonatomic) NSUInteger numberOfMomentsAtMyWork; // ivar: _numberOfMomentsAtMyWork
@property (nonatomic) NSUInteger numberOfMomentsCelebratingAHoliday; // ivar: _numberOfMomentsCelebratingAHoliday
@property (nonatomic) NSUInteger numberOfMomentsInTrip; // ivar: _numberOfMomentsInTrip
@property (nonatomic) NSUInteger numberOfMomentsLinkedToABusinessNode; // ivar: _numberOfMomentsLinkedToABusinessNode
@property (nonatomic) NSUInteger numberOfMomentsLinkedToAPublicEvent; // ivar: _numberOfMomentsLinkedToAPublicEvent
@property (nonatomic) NSUInteger numberOfMomentsWithAtLeastOneGemAsset; // ivar: _numberOfMomentsWithAtLeastOneGemAsset
@property (nonatomic) NSUInteger numberOfMusicSessions; // ivar: _numberOfMusicSessions
@property (nonatomic) NSUInteger numberOfPeople; // ivar: _numberOfPeople
@property (nonatomic) NSUInteger numberOfPetNodes; // ivar: _numberOfPetNodes
@property (nonatomic) NSUInteger numberOfPublicEvents; // ivar: _numberOfPublicEvents
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryAppleEvents; // ivar: _numberOfPublicEventsCategoryAppleEvents
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryArtsAndMuseums; // ivar: _numberOfPublicEventsCategoryArtsAndMuseums
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryBusinessAndTechnology; // ivar: _numberOfPublicEventsCategoryBusinessAndTechnology
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryCommunity; // ivar: _numberOfPublicEventsCategoryCommunity
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryDance; // ivar: _numberOfPublicEventsCategoryDance
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryEducational; // ivar: _numberOfPublicEventsCategoryEducational
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryFamilyEvents; // ivar: _numberOfPublicEventsCategoryFamilyEvents
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryFestivalsAndFairs; // ivar: _numberOfPublicEventsCategoryFestivalsAndFairs
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryMusicConcerts; // ivar: _numberOfPublicEventsCategoryMusicConcerts
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryNightLife; // ivar: _numberOfPublicEventsCategoryNightLife
@property (nonatomic) NSUInteger numberOfPublicEventsCategorySports; // ivar: _numberOfPublicEventsCategorySports
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryTheater; // ivar: _numberOfPublicEventsCategoryTheater
@property (nonatomic) NSUInteger numberOfPublicEventsCategoryTours; // ivar: _numberOfPublicEventsCategoryTours
@property (nonatomic) NSUInteger numberOfSelfies; // ivar: _numberOfSelfies
@property (nonatomic) NSUInteger numberOfShortTrips; // ivar: _numberOfShortTrips
@property (nonatomic) NSUInteger numberOfSignificantMoments; // ivar: _numberOfSignificantMoments
@property (nonatomic) NSUInteger numberOfSocialGroups; // ivar: _numberOfSocialGroups
@property (nonatomic) CGFloat ratioOfDaysWithASignificantEventPastYear; // ivar: _ratioOfDaysWithASignificantEventPastYear
@property (nonatomic) CGFloat ratioOfFavoritedPeople; // ivar: _ratioOfFavoritedPeople
@property (nonatomic) CGFloat ratioOfMeaningfulMoments; // ivar: _ratioOfMeaningfulMoments
@property (nonatomic) CGFloat ratioOfMomentsAtAFrequentLocation; // ivar: _ratioOfMomentsAtAFrequentLocation
@property (nonatomic) CGFloat ratioOfMomentsAtMyHome; // ivar: _ratioOfMomentsAtMyHome
@property (nonatomic) CGFloat ratioOfMomentsAtMyWork; // ivar: _ratioOfMomentsAtMyWork
@property (nonatomic) CGFloat ratioOfMomentsCelebratingAHoliday; // ivar: _ratioOfMomentsCelebratingAHoliday
@property (nonatomic) CGFloat ratioOfMomentsInTrip; // ivar: _ratioOfMomentsInTrip
@property (nonatomic) CGFloat ratioOfMomentsLinkedToABusinessNode; // ivar: _ratioOfMomentsLinkedToABusinessNode
@property (nonatomic) CGFloat ratioOfMomentsLinkedToAPublicEvent; // ivar: _ratioOfMomentsLinkedToAPublicEvent
@property (nonatomic) CGFloat ratioOfMomentsWithAtLeastOneGemAsset; // ivar: _ratioOfMomentsWithAtLeastOneGemAsset
@property (nonatomic) CGFloat ratioOfPeopleLinkedToContact; // ivar: _ratioOfPeopleLinkedToContact
@property (nonatomic) CGFloat ratioOfPeopleNotLinkedToContact; // ivar: _ratioOfPeopleNotLinkedToContact
@property (nonatomic) CGFloat ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion; // ivar: _ratioOfPeopleNotLinkedToContactWithHighConfidenceContactSuggestion
@property (nonatomic) CGFloat ratioOfPeoplePartOfASocialGroup; // ivar: _ratioOfPeoplePartOfASocialGroup
@property (nonatomic) CGFloat ratioOfPeopleWithExplicitBirthdayDate; // ivar: _ratioOfPeopleWithExplicitBirthdayDate
@property (nonatomic) CGFloat ratioOfPeopleWithInferredBirthdayDate; // ivar: _ratioOfPeopleWithInferredBirthdayDate
@property (nonatomic) CGFloat ratioOfSelfies; // ivar: _ratioOfSelfies
@property (nonatomic) CGFloat ratioOfSignificantMoments; // ivar: _ratioOfSignificantMoments
@property (nonatomic) CGFloat ratioOfTwoPeopleSocialGroup; // ivar: _ratioOfTwoPeopleSocialGroup


-(id)identifier;
-(id)initWithGraphManager:(id)arg0 ;
-(id)payload;
-(void)_fillBabyAndPetStatisticsWithGraph:(id)arg0 ;
-(void)_fillBusinessStatisticsWithGraph:(id)arg0 ;
-(void)_fillFrequentLocationsStatisticsWithGraph:(id)arg0 ;
-(void)_fillGenericStatisticsWithGraph:(id)arg0 ;
-(void)_fillHolidaysStatisticsWithGraph:(id)arg0 ;
-(void)_fillHomeWorkStatisticsWithGraph:(id)arg0 ;
-(void)_fillMeaningfulEventsStatisticsWithGraph:(id)arg0 ;
-(void)_fillMomentStatisticsWithGraph:(id)arg0 ;
-(void)_fillMusicStatisticsWithGraph:(id)arg0 ;
-(void)_fillPeopleStatisticsWithGraph:(id)arg0 ;
-(void)_fillPublicEventStatisticsWithGraph:(id)arg0 ;
-(void)_fillTripStatisticsWithGraph:(id)arg0 ;
-(void)_saveKey:(id)arg0 boolValue:(BOOL)arg1 payload:(id)arg2 ;
-(void)_saveKey:(id)arg0 doubleValue:(CGFloat)arg1 payload:(id)arg2 ;
-(void)_saveKey:(id)arg0 integerValue:(NSUInteger)arg1 payload:(id)arg2 ;
-(void)_saveKey:(id)arg0 stringValue:(id)arg1 payload:(id)arg2 ;
-(void)gatherMetricsWithProgressBlock:(id)arg0 ;


@end


#endif