// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGGRAPHRELATIONSHIPEDGE_H
#define PGGRAPHRELATIONSHIPEDGE_H

@class NSString;


#import "PGGraphOptimizedEdge.h"

@interface PGGraphRelationshipEdge : PGGraphOptimizedEdge

@property (readonly) CGFloat calendarAttendanceRatio; // ivar: _calendarAttendanceRatio
@property (readonly) float confidence; // ivar: _confidence
@property (readonly) CGFloat familyHolidayAttendanceRate; // ivar: _familyHolidayAttendanceRate
@property (readonly) CGFloat friendNightOutAttendanceRate; // ivar: _friendNightOutAttendanceRate
@property (readonly) CGFloat friendsAndFamilyTripAttendanceRate; // ivar: _friendsAndFamilyTripAttendanceRate
@property (readonly) BOOL hasAnniversaryDate; // ivar: _hasAnniversaryDate
@property (readonly) BOOL hasParentContactName; // ivar: _hasParentContactName
@property (readonly) BOOL hasSameFamilyNameAsMePerson; // ivar: _hasSameFamilyNameAsMePerson
@property (readonly) BOOL isPersonAgeDifferentThanMeNode; // ivar: _isPersonAgeDifferentThanMeNode
@property (readonly) BOOL isPersonOldEnoughToBeParentOrGrandparent; // ivar: _isPersonOldEnoughToBeParentOrGrandparent
@property (readonly) BOOL isPersonYoungEnoughToBeMeNodeChild; // ivar: _isPersonYoungEnoughToBeMeNodeChild
@property (readonly) BOOL isTopPerson; // ivar: _isTopPerson
@property (readonly) BOOL isTopTwoPersonsSocialGroup; // ivar: _isTopTwoPersonsSocialGroup
@property (readonly) CGFloat momentsAtWorkAppearanceRate; // ivar: _momentsAtWorkAppearanceRate
@property (readonly) NSUInteger numberOfLoveEmojisExchanged; // ivar: _numberOfLoveEmojisExchanged
@property (readonly) NSUInteger numberOfMomentsAtHome; // ivar: _numberOfMomentsAtHome
@property (readonly) CGFloat partnerTripAttendanceRate; // ivar: _partnerTripAttendanceRate
@property (readonly) NSString *relationship; // ivar: _relationship
@property (readonly) NSUInteger status; // ivar: _status
@property (readonly) CGFloat weekendAppearanceRatio; // ivar: _weekendAppearanceRatio


+(id)acquaintanceFilter;
+(id)brotherFilter;
+(id)childFilter;
+(id)confirmedRelationshipFilter;
+(id)coworkerFilter;
+(id)coworkerSocialGroupFilter;
+(id)daughterFilter;
+(id)familyFilter;
+(id)familyRelationshipLabels;
+(id)familySocialGroupFilter;
+(id)fatherFilter;
+(id)filter;
+(id)filterWithConfirmedRelationship:(id)arg0 ;
+(id)filterWithInferredRelationship:(id)arg0 ;
+(id)filterWithRelationship:(id)arg0 ;
+(id)filterWithRelationship:(id)arg0 status:(NSUInteger)arg1 ;
+(id)friendFilter;
+(id)inferredAcquaintanceFilter;
+(id)inferredBrotherFilter;
+(id)inferredChildFilter;
+(id)inferredCoworkerFilter;
+(id)inferredCoworkerSocialGroupFilter;
+(id)inferredDaughterFilter;
+(id)inferredFamilyFilter;
+(id)inferredFamilySocialGroupFilter;
+(id)inferredFatherFilter;
+(id)inferredFriendFilter;
+(id)inferredMotherFilter;
+(id)inferredParentFilter;
+(id)inferredPartnerFilter;
+(id)inferredRelationshipFilter;
+(id)inferredSisterFilter;
+(id)inferredSonFilter;
+(id)inferredVipFilter;
+(id)motherFilter;
+(id)parentFilter;
+(id)partnerFilter;
+(id)sisterFilter;
+(id)sonFilter;
+(id)vipFilter;
-(BOOL)hasProperties:(id)arg0 ;
-(float)weight;
-(id)_readableStringForProperty:(id)arg0 ;
-(id)edgeDescription;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)initWithRelationship:(id)arg0 fromPersonNode:(id)arg1 toPersonNode:(id)arg2 confidence:(float)arg3 status:(NSUInteger)arg4 familyHolidayAttendanceRate:(CGFloat)arg5 hasParentContactName:(BOOL)arg6 hasSameFamilyNameAsMePerson:(BOOL)arg7 numberOfMomentsAtHome:(NSUInteger)arg8 hasAnniversaryDate:(BOOL)arg9 isTopTwoPersonsSocialGroup:(BOOL)arg10 numberOfLoveEmojisExchanged:(NSUInteger)arg11 isTopPerson:(BOOL)arg12 friendNightOutAttendanceRate:(CGFloat)arg13 partnerTripAttendanceRate:(CGFloat)arg14 friendsAndFamilyTripAttendanceRate:(CGFloat)arg15 weekendAppearanceRatio:(CGFloat)arg16 momentsAtWorkAppearanceRate:(CGFloat)arg17 calendarAttendanceRatio:(CGFloat)arg18 isPersonAgeDifferentThanMeNode:(BOOL)arg19 isPersonOldEnoughToBeParentOrGrandparent:(BOOL)arg20 isPersonYoungEnoughToBeMeNodeChild:(BOOL)arg21 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif