// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKGAME_H
#define GKGAME_H

@class NSNumber, NSString, NSDictionary;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKGameDescriptor.h"
#import "GKGameInternal.h"
#import "GKStoreItemInternal.h"

@interface GKGame : NSObject <NSCoding, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *adamID;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSString *defaultCategory;
@property NSInteger environment; // ivar: _environment
@property (readonly, nonatomic) NSNumber *externalVersion;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (readonly, nonatomic) NSDictionary *gameDescriptorDictionary;
@property (readonly, nonatomic) GKGameInfo gameInfo;
@property (readonly, nonatomic, getter=isInstalled) BOOL installedGame;
@property (retain) GKGameInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) NSInteger platform;
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (readonly, nonatomic) NSString *shortBundleVersion;
@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (readonly, nonatomic) BOOL supportsMultiplayer;
@property (readonly, nonatomic) BOOL supportsTurnBasedMultiplayer;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)isAppStore;
+(BOOL)isContacts;
+(BOOL)isFirstParty;
+(BOOL)isGameCenter;
+(BOOL)isPreferences;
+(BOOL)isRemoteAlert;
+(BOOL)supportsSecureCoding;
+(id)createNonStaticCurrentGame;
+(id)currentGame;
+(id)currentGameIncludingGameCenter:(BOOL)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)loadGamesWithBundleIDs:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadTopGamesWithCompletionHandler:(id)arg0 ;
+(void)setCurrentGameFromInternal:(id)arg0 serverEnvironment:(NSInteger)arg1 ;
+(void)updateGames:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isAppStore;
-(BOOL)isContacts;
-(BOOL)isDaemon;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGameCenter;
-(BOOL)isGameControllerDaemon;
-(BOOL)isInternalTestApp;
-(BOOL)isSpringBoard;
-(BOOL)isStoreItemUnexpired;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getFriendPlayersForAchievement:(id)arg0 handler:(id)arg1 ;
-(void)getFriendPlayersForLeaderboard:(id)arg0 handler:(id)arg1 ;
-(void)getFriendPlayersIncludingCompatibleGames:(BOOL)arg0 handler:(id)arg1 ;
-(void)loadGameRatingWithCompletionHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)submitRating:(float)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif