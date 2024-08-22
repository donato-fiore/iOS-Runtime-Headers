// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPLAYER_H
#define GKPLAYER_H

@class NSNumber, NSString, NSArray, NSDate, NSAttributedString;
@protocol NSCoding, NSSecureCoding;


#import "GKBasePlayer.h"
#import "GKPlayerInternal.h"
#import "GKGame.h"

@interface GKPlayer : GKBasePlayer <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *acceptedGameInviteFromThisFriend;
@property (copy, nonatomic) NSString *alias;
@property (readonly, nonatomic) NSNumber *automatchedTogether;
@property (readonly, nonatomic) NSInteger avatarType;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSNumber *friendBiDirectional;
@property (readonly, nonatomic) NSNumber *friendLevel;
@property (readonly, nonatomic) NSNumber *friendPlayedNearby;
@property (readonly, nonatomic) NSNumber *friendPlayedWith;
@property (retain, nonatomic) NSArray *friends; // ivar: _friends
@property (readonly, retain, nonatomic) NSString *gamePlayerID;
@property (readonly, nonatomic) NSString *guestIdentifier;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (readonly, nonatomic) NSNumber *initiatedGameInviteToThisFriend;
@property (retain) GKPlayerInternal *internal; // ivar: _internal
@property (readonly, nonatomic) BOOL isAnonymousPlayer;
@property (readonly, nonatomic) BOOL isAutomatchPlayer;
@property (readonly, nonatomic) BOOL isFamiliarFriend;
@property (nonatomic) BOOL isFriend;
@property (readonly, nonatomic) BOOL isGuestPlayer;
@property (readonly, nonatomic) BOOL isInContacts;
@property (readonly, nonatomic) BOOL isInvitable;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isUnknownPlayer;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) GKGame *lastPlayedGame;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, nonatomic) NSString *messagesID;
@property (nonatomic) NSUInteger numberOfFriends;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *reason2;
@property (readonly) NSString *referenceKey;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;
@property (readonly, nonatomic) ? stats;
@property (copy, nonatomic) NSString *status;
@property (readonly, retain, nonatomic) NSString *teamPlayerID;
@property (retain, nonatomic) NSAttributedString *whenString; // ivar: _whenString


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)anonymousGuestPlayerWithIdentifier:(id)arg0 ;
+(id)anonymousPlayer;
+(id)automatchPlayer;
+(id)cacheKeyForPlayerID:(id)arg0 ;
+(id)canonicalizedPlayerForInternal:(id)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)playerFromPlayerID:(id)arg0 ;
+(id)unknownPlayer;
+(void)_loadPlayersForIdentifiers:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadCompletePlayersForPlayers:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadPlayersForIdentifiers:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadPlayersForIdentifiersPrivate:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadPlayersForLegacyIdentifiers:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)scopedIDsArePersistent;
-(NSUInteger)hash;
-(id)description;
-(id)displayNameWithOptions:(unsigned char)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)identifierForIDS;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)minimalPlayer;
-(id)searchName;
-(id)sortName;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_postChangeNotification;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadCommonFriends:(BOOL)arg0 asPlayersWithCompletionHandler:(id)arg1 ;
-(void)loadFriendsAsPlayersWithCompletionHandler:(id)arg0 ;
-(void)loadFriendsWithFilter:(id)arg0 withComplationHandler:(id)arg1 ;
-(void)loadGamesPlayed:(id)arg0 ;
-(void)loadGamesPlayedDetailsWithCompletionHandler:(id)arg0 ;
-(void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)loadProfileDiscardingStaleData:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)loadProfileWithCompletionHandler:(id)arg0 ;
-(void)loadRecentMatchesForGame:(id)arg0 block:(id)arg1 ;
-(void)postChangeNotification;
-(void)recordScopedIdState:(BOOL)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif