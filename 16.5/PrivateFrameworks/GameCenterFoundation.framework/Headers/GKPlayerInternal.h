// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYERINTERNAL_H
#define GKPLAYERINTERNAL_H

@class NSNumber, NSString, CNContact, NSArray, NSDate, NSDictionary;


#import "GKInternalRepresentation.h"
#import "GKMessageInboxEntryInternal.h"
#import "GKGameInternal.h"

@interface GKPlayerInternal : GKInternalRepresentation {
    ? _flags;
}


@property (retain, nonatomic) NSNumber *acceptedGameInviteFromThisFriend; // ivar: _acceptedGameInviteFromThisFriend
@property (retain, nonatomic) NSString *accountName;
@property (nonatomic) int achievementsVisibility; // ivar: _achievementsVisibility
@property (retain, nonatomic) NSString *alias; // ivar: _alias
@property (retain, nonatomic) NSNumber *automatchedTogether; // ivar: _automatchedTogether
@property (retain, nonatomic) NSNumber *avatarType; // ivar: _avatarType
@property (retain, nonatomic) NSString *compositeName;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *contactsAssociationID; // ivar: _contactsAssociationID
@property (nonatomic) int contactsIntegrationConsent; // ivar: _contactsIntegrationConsent
@property (nonatomic, getter=isDefaultContactsIntegrationConsent) BOOL defaultContactsIntegrationConsent;
@property (nonatomic, getter=isDefaultNickname) BOOL defaultNickname;
@property (nonatomic, getter=isDefaultPrivacyVisibility) BOOL defaultPrivacyVisibility;
@property (nonatomic, getter=isFindable) BOOL findable;
@property (retain, nonatomic) NSString *firstName;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSNumber *friendBiDirectional; // ivar: _friendBiDirectional
@property (retain, nonatomic) NSNumber *friendLevel; // ivar: _friendLevel
@property (retain, nonatomic) NSNumber *friendPlayedNearby; // ivar: _friendPlayedNearby
@property (retain, nonatomic) NSNumber *friendPlayedWith; // ivar: _friendPlayedWith
@property (retain, nonatomic) NSArray *friends;
@property (nonatomic) int friendsVisibility; // ivar: _friendsVisibility
@property (retain) NSString *gamePlayerID; // ivar: _gamePlayerID
@property (nonatomic) int gamesPlayedVisibility; // ivar: _gamesPlayedVisibility
@property (nonatomic) int globalFriendListAccess; // ivar: _globalFriendListAccess
@property (retain, nonatomic) NSString *guestIdentifier;
@property (retain, nonatomic) GKMessageInboxEntryInternal *inboxEntry; // ivar: _inboxEntry
@property (retain, nonatomic) NSNumber *initiatedGameInviteToThisFriend; // ivar: _initiatedGameInviteToThisFriend
@property (readonly, nonatomic) BOOL isAnonymousPlayer;
@property (nonatomic) BOOL isArcadeSubscriber; // ivar: _isArcadeSubscriber
@property (readonly, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, nonatomic) BOOL isFriend;
@property (readonly, nonatomic) BOOL isGuestPlayer;
@property (nonatomic) BOOL isInContacts; // ivar: _isInContacts
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isUnknownPlayer;
@property (retain, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed; // ivar: _lastContactsIntegrationConsentVersionDisplayed
@property (retain, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed; // ivar: _lastFriendSuggestionsVersionDisplayed
@property (retain, nonatomic) NSString *lastName;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed; // ivar: _lastPersonalizationVersionDisplayed
@property (retain, nonatomic) NSDate *lastPlayedDate;
@property (retain, nonatomic) GKGameInternal *lastPlayedGame;
@property (nonatomic) NSUInteger lastPrivacyNoticeVersionDisplayed; // ivar: _lastPrivacyNoticeVersionDisplayed
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed; // ivar: _lastProfilePrivacyVersionDisplayed
@property (nonatomic) NSUInteger lastWelcomeWhatsNewCopyVersionDisplayed; // ivar: _lastWelcomeWhatsNewCopyVersionDisplayed
@property (retain, nonatomic) NSString *messagesID; // ivar: _messagesID
@property (nonatomic) unsigned int numberOfAchievementPoints; // ivar: _numberOfAchievementPoints
@property (nonatomic) unsigned int numberOfAchievements; // ivar: _numberOfAchievements
@property (nonatomic) unsigned short numberOfChallenges;
@property (nonatomic) unsigned short numberOfFriends; // ivar: _numberOfFriends
@property (nonatomic) unsigned short numberOfFriendsInCommon; // ivar: _numberOfFriendsInCommon
@property (nonatomic) unsigned short numberOfGames; // ivar: _numberOfGames
@property (nonatomic) unsigned short numberOfGamesInCommon; // ivar: _numberOfGamesInCommon
@property (nonatomic) unsigned short numberOfRequests;
@property (nonatomic) unsigned short numberOfTurns;
@property (nonatomic, getter=isPhotoPending) BOOL photoPending;
@property (retain, nonatomic) NSDictionary *photos; // ivar: _photos
@property (retain) NSString *playerID; // ivar: _playerID
@property (nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount;
@property (retain, nonatomic) NSDate *serviceLastUpdatedTimestamp; // ivar: _serviceLastUpdatedTimestamp
@property (retain, nonatomic) NSString *status;
@property (retain) NSString *teamPlayerID; // ivar: _teamPlayerID
@property (nonatomic, getter=isUnderage) BOOL underage;


+(BOOL)supportsSecureCoding;
+(Class)classForFamiliarity:(int)arg0 ;
+(id)compositeNameForFirstName:(id)arg0 lastName:(id)arg1 ;
+(id)displayNameWithOptions:(unsigned char)arg0 alias:(id)arg1 composite:(id)arg2 ;
+(id)secureCodedPropertyKeys;
-(BOOL)_gkIsSameAsPlayer:(id)arg0 ;
-(BOOL)allowNearbyMultiplayer;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)cacheKey;
-(id)conciseDescription;
-(id)debugDescription;
-(id)displayNameWithOptions:(unsigned char)arg0 ;
-(id)minimalInternal;
-(id)serverRepresentation;
-(int)defaultFamiliarity;
-(int)globalFriendListSharingStatus;
-(void)setAllowNearbyMultiplayer:(BOOL)arg0 ;
-(void)stripPIIs;


@end


#endif