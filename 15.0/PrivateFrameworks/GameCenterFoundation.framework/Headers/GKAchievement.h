// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKACHIEVEMENT_H
#define GKACHIEVEMENT_H

@class NSString, NSDate;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKGame.h"
#import "GKAchievementInternal.h"
#import "GKPlayer.h"

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>



@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly, copy, nonatomic) NSString *groupIdentifier;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *identifier;
@property (retain) GKAchievementInternal *internal; // ivar: _internal
@property (copy, nonatomic) NSDate *lastReportedDate;
@property (nonatomic) CGFloat percentComplete;
@property (readonly, nonatomic) GKPlayer *player; // ivar: _player
@property (copy, nonatomic) NSString *playerID;
@property (nonatomic) BOOL showsCompletionBanner; // ivar: _showsCompletionBanner


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)loadAchievementWithID:(id)arg0 forGame:(id)arg1 players:(id)arg2 complete:(id)arg3 ;
+(void)loadAchievementsForGameV2:(id)arg0 player:(id)arg1 includeUnreported:(BOOL)arg2 includeHidden:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
+(void)loadAchievementsForGameV2:(id)arg0 players:(id)arg1 includeUnreported:(BOOL)arg2 includeHidden:(BOOL)arg3 withCompletionHandler:(id)arg4 ;
+(void)loadAchievementsWithCompletionHandler:(id)arg0 ;
+(void)reportAchievements:(id)arg0 whileScreeningChallenges:(BOOL)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3 ;
+(void)reportAchievements:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)resetAchievementsWithCompletionHandler:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)_achievementDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 forPlayer:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 player:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 playerID:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reportAchievementWithCompletionHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif