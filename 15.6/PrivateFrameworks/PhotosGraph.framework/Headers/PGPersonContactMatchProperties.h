// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPERSONCONTACTMATCHPROPERTIES_H
#define PGPERSONCONTACTMATCHPROPERTIES_H

@class NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface PGPersonContactMatchProperties : NSObject

@property (nonatomic) CGFloat addressScore; // ivar: _addressScore
@property (nonatomic) CGFloat birthdayScore; // ivar: _birthdayScore
@property (nonatomic) CGFloat calendarScore; // ivar: _calendarScore
@property (nonatomic) BOOL contactFaceprintMatch; // ivar: _contactFaceprintMatch
@property (readonly, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (nonatomic) CGFloat faceTimeFaceprintConfidence; // ivar: _faceTimeFaceprintConfidence
@property (readonly, nonatomic) CGFloat matchScore; // ivar: _matchScore
@property (retain, nonatomic) NSMutableSet *matchedRelationships; // ivar: _matchedRelationships
@property (nonatomic) CGFloat mentionedAddressScore; // ivar: _mentionedAddressScore
@property (retain, nonatomic) NSMutableSet *messageGroupDescriptions; // ivar: _messageGroupDescriptions
@property (nonatomic) NSUInteger numberOfAppearancesInSharedAssets; // ivar: _numberOfAppearancesInSharedAssets
@property (nonatomic) NSUInteger numberOfCMMSharedMomentsInMessageConversations; // ivar: _numberOfCMMSharedMomentsInMessageConversations
@property (nonatomic) NSUInteger numberOfMatchedRelationships; // ivar: _numberOfMatchedRelationships
@property (nonatomic) NSUInteger numberOfMomentsAtAddress; // ivar: _numberOfMomentsAtAddress
@property (nonatomic) NSUInteger numberOfMomentsAtMentionedAddress; // ivar: _numberOfMomentsAtMentionedAddress
@property (nonatomic) NSUInteger numberOfMomentsOverlappingWithCalendarEvents; // ivar: _numberOfMomentsOverlappingWithCalendarEvents
@property (nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundBirthdayDate; // ivar: _numberOfWeakBirthdayMomentsAroundBirthdayDate
@property (nonatomic) NSUInteger numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate; // ivar: _numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate
@property (nonatomic) CGFloat potentialBirthdayScore; // ivar: _potentialBirthdayScore
@property (nonatomic) CGFloat relationshipScore; // ivar: _relationshipScore
@property (nonatomic) CGFloat scoreAfterMessagePenalty; // ivar: _scoreAfterMessagePenalty
@property (nonatomic) NSUInteger sexMatch; // ivar: _sexMatch
@property (nonatomic) CGFloat sharedAssetScore; // ivar: _sharedAssetScore
@property (nonatomic) CGFloat sharedCMMScore; // ivar: _sharedCMMScore
@property (retain, nonatomic) NSMutableSet *socialGroupDescriptions; // ivar: _socialGroupDescriptions
@property (nonatomic) CGFloat socialGroupsOverlapScore; // ivar: _socialGroupsOverlapScore


-(id)_messageGroupsDescription;
-(id)_relationshipsDescription;
-(id)_socialGroupsDescription;
-(id)_stringsForRelationshipMatch;
-(id)description;
-(id)edgeProperties;
-(id)initWithContactIdentifier:(id)arg0 ;
-(void)registerBiologicalSexMatch:(NSUInteger)arg0 ;
-(void)registerBirthdayWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerCMMWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerCalendarEventWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerContactFaceprintMatch;
-(void)registerFacetimeFaceprintMatchConfidence:(CGFloat)arg0 ;
-(void)registerMatchedRelationship:(NSUInteger)arg0 withPeopleCount:(NSUInteger)arg1 ;
-(void)registerMessageFrequencyPenaltyNewScore:(CGFloat)arg0 ;
-(void)registerMomentAtAddressWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerMomentAtMentionedAddressWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerPotentialBirthdayWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerSharedAssetAppearanceWithPeopleCount:(NSUInteger)arg0 ;
-(void)registerSocialGroupAndMessageGroupMatchScore:(CGFloat)arg0 debugSocialGroupsDescription:(id)arg1 debugMessageGroupsDescription:(id)arg2 ;
-(void)setPersonContactMatchScore:(CGFloat)arg0 ;


@end


#endif