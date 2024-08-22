// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPERSONRELATIONSHIPANALYZERPROPERTIES_H
#define PGPERSONRELATIONSHIPANALYZERPROPERTIES_H


#import <Foundation/Foundation.h>


@interface PGPersonRelationshipAnalyzerProperties : NSObject

@property (nonatomic) CGFloat calendarEventAttendanceRatio; // ivar: _calendarEventAttendanceRatio
@property (readonly, nonatomic) CGFloat childScore; // ivar: _childScore
@property (readonly, nonatomic) CGFloat coworkerScore; // ivar: _coworkerScore
@property (nonatomic) CGFloat familyHolidayAttendanceRatio; // ivar: _familyHolidayAttendanceRatio
@property (readonly, nonatomic) CGFloat familyScore; // ivar: _familyScore
@property (nonatomic) CGFloat friendNightOutAttendanceRatio; // ivar: _friendNightOutAttendanceRatio
@property (readonly, nonatomic) CGFloat friendScore; // ivar: _friendScore
@property (nonatomic) BOOL hasAnniversaryDate; // ivar: _hasAnniversaryDate
@property (nonatomic) BOOL hasParentContactName; // ivar: _hasParentContactName
@property (nonatomic) BOOL hasSameFamilyNameAsMePerson; // ivar: _hasSameFamilyNameAsMePerson
@property (nonatomic) BOOL isTopPerson; // ivar: _isTopPerson
@property (nonatomic) BOOL isTopTwoPersonSocialGroup; // ivar: _isTopTwoPersonSocialGroup
@property (nonatomic) CGFloat momentsAtWorkAppearancesRatio; // ivar: _momentsAtWorkAppearancesRatio
@property (nonatomic) NSUInteger numberOfLoveEmojisExchanged; // ivar: _numberOfLoveEmojisExchanged
@property (nonatomic) NSUInteger numberOfMomentsAtHome; // ivar: _numberOfMomentsAtHome
@property (nonatomic) CGFloat oneOnOneTripAttendanceRatio; // ivar: _oneOnOneTripAttendanceRatio
@property (readonly, nonatomic) CGFloat parentScore; // ivar: _parentScore
@property (readonly, nonatomic) CGFloat partnerScore; // ivar: _partnerScore
@property (nonatomic) BOOL personAgeDifferentThanMeNode; // ivar: _personAgeDifferentThanMeNode
@property (nonatomic) BOOL personOldEnoughToBeMeNodeParentOrGrandparent; // ivar: _personOldEnoughToBeMeNodeParentOrGrandparent
@property (nonatomic) BOOL personYoungEnoughToBeMeNodeChild; // ivar: _personYoungEnoughToBeMeNodeChild
@property (nonatomic) CGFloat tripAttendanceRatio; // ivar: _tripAttendanceRatio
@property (nonatomic) CGFloat weekendAppearanceRatio; // ivar: _weekendAppearanceRatio


-(id)description;
-(id)edgeProperties;
-(void)penalizePersonAgeCategoryDifferentThanMeNode;
-(void)registerAnniversaryDate;
-(void)registerAttendance:(NSUInteger)arg0 amongFamilyHolidays:(NSUInteger)arg1 ;
-(void)registerAttendance:(NSUInteger)arg0 amongWorkCalendarEvents:(NSUInteger)arg1 ;
-(void)registerNumberOfExchangedLoveEmojis:(NSUInteger)arg0 amongExchangedLoveEmojis:(NSUInteger)arg1 ;
-(void)registerNumberOfMomentsAtHome:(NSUInteger)arg0 amongMomentsAtHome:(NSUInteger)arg1 ;
-(void)registerNumberOfMomentsAtWork:(NSUInteger)arg0 amongMomentsAtWork:(NSUInteger)arg1 ;
-(void)registerNumberOfNightsOut:(NSUInteger)arg0 amongNightsOut:(NSUInteger)arg1 ;
-(void)registerNumberOfTrips:(NSUInteger)arg0 withTripsScore:(CGFloat)arg1 amongTrips:(NSUInteger)arg2 ;
-(void)registerNumberOfWeekendMoments:(NSUInteger)arg0 amongWeekends:(NSUInteger)arg1 ;
-(void)registerOneOnOneTripAppearance:(NSUInteger)arg0 amongOneOnOneTrips:(NSUInteger)arg1 ;
-(void)registerParentContactName;
-(void)registerPersonOldEnoughToBeMeNodeParentOrMyGrandparent;
-(void)registerPersonYoungEnoughToBeMeNodeChild;
-(void)registerSameFamilyNameAsMePerson;
-(void)registerTopPersonAmongTopPeople:(NSUInteger)arg0 ;
-(void)registerTopTwoPersonSocialGroup;


@end


#endif