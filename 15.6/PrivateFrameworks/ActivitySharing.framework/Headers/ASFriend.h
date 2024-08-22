// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASFRIEND_H
#define ASFRIEND_H

@class NSUUID, NSArray, NSNumber, NSDateComponents, _HKFitnessFriendActivitySnapshot, NSDate, NSString, NSDictionary, NSTimeZone;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ASCompetition.h"
#import "ASContact.h"

@interface ASFriend : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL canSeeMyActivityData;
@property (readonly, nonatomic) ASCompetition *competitionPendingAcceptance;
@property (retain, nonatomic) NSArray *competitions; // ivar: _competitions
@property (readonly, nonatomic) NSArray *completedCompetitions;
@property (retain, nonatomic) ASContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSNumber *currentCacheIndex; // ivar: _currentCacheIndex
@property (readonly, nonatomic) ASCompetition *currentCompetition;
@property (readonly, nonatomic) NSDateComponents *currentDateComponents;
@property (readonly, nonatomic) ASCompetition *currentOrMostRecentCompetition;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshot;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *currentSnapshotWithGoalsCarriedForward;
@property (readonly, nonatomic) NSDate *dateActivityDataInitiallyBecameVisibleToMe;
@property (readonly, nonatomic) NSDate *dateForLatestDataHidden;
@property (readonly, nonatomic) NSDate *dateForLatestDataHiddenFromMe;
@property (readonly, nonatomic) NSDate *dateForLatestIncomingCompetitionRequest;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingCompetitionRequest;
@property (readonly, nonatomic) NSDate *dateForLatestOutgoingInviteRequest;
@property (readonly, nonatomic) NSDate *dateForLatestRelationshipStart;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *earliestCompetitionVictoryOrPotentialVictoryDate;
@property (retain, nonatomic) NSDictionary *friendAchievements; // ivar: _friendAchievements
@property (retain, nonatomic) NSDictionary *friendWorkouts; // ivar: _friendWorkouts
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasCompetitionHistory;
@property (readonly, nonatomic) BOOL hasCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL hasCompletedCompetition;
@property (readonly, nonatomic) BOOL hasCompletedFirstDayOfCurrentCompetition;
@property (readonly, nonatomic) BOOL hasInviteRequestFromMe;
@property (readonly, nonatomic) BOOL hasPendingCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL ignoredCompetitionRequestFromMe;
@property (readonly, nonatomic) BOOL inviteRequestToMeWasAccepted;
@property (readonly, nonatomic) BOOL isActivityDataCurrentlyVisibleToMe;
@property (readonly, nonatomic) BOOL isAwaitingCompetitionResponseFromMe;
@property (readonly, nonatomic) BOOL isAwaitingInviteResponseFromMe;
@property (readonly, nonatomic) BOOL isCompetitionActive;
@property (readonly, nonatomic) BOOL isCurrentlyHidingActivityDataFromMe;
@property (readonly, nonatomic) BOOL isEligibleToReceiveCompetitionRequest;
@property (readonly, nonatomic) BOOL isFriendshipCurrentlyActive;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, nonatomic) BOOL isMyActivityDataCurrentlyHidden;
@property (readonly, nonatomic, getter=isMe) BOOL me;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *mostRecentSnapshot;
@property (readonly, nonatomic) ASCompetition *mostRecentlyCompletedCompetition;
@property (readonly, nonatomic) NSUInteger numberOfCompetitionWinsAgainstMe;
@property (readonly, nonatomic) NSUInteger numberOfCompetitionWinsByMe;
@property (readonly, nonatomic) BOOL sentInviteRequestToMe;
@property (retain, nonatomic) NSDictionary *snapshots; // ivar: _snapshots
@property (readonly, nonatomic) BOOL supportsCompetitions;
@property (readonly, nonatomic) NSTimeZone *timeZone;


+(id)friendWithCodableFriend:(id)arg0 ;
-(BOOL)isActivityDataVisibleToMeForDate:(id)arg0 ;
-(BOOL)isHidingActivityDataFromMeForDate:(id)arg0 ;
-(id)_emptySnapshotWithGoalsCarriedForwardForSnapshotIndex:(NSInteger)arg0 ;
-(id)codableFriendIncludingCloudKitFields:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActivitySnapshots:(id)arg0 friendAchievements:(id)arg1 friendWorkouts:(id)arg2 contact:(id)arg3 competitions:(id)arg4 ;
-(id)snapshotWithGoalsCarriedForwardForSnapshotIndex:(id)arg0 ;


@end


#endif