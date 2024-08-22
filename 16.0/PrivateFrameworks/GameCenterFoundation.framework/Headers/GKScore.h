// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSCORE_H
#define GKSCORE_H

@class NSString, NSDate;
@protocol NSCopying, NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKGame.h"
#import "GKScoreInternal.h"
#import "GKPlayer.h"

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>



@property (copy, nonatomic) NSString *category;
@property (nonatomic) NSUInteger context;
@property (readonly, retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (retain, nonatomic) NSString *groupLeaderboardIdentifier;
@property (retain) GKScoreInternal *internal; // ivar: _internal
@property (copy, nonatomic) NSString *leaderboardIdentifier;
@property (readonly, retain, nonatomic) GKPlayer *player;
@property (readonly, retain) NSString *playerID;
@property (nonatomic) NSInteger rank;
@property (nonatomic) BOOL shouldSetDefaultLeaderboard; // ivar: _shouldSetDefaultLeaderboard
@property (nonatomic) NSInteger value;
@property BOOL valueSet;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)reportScores:(id)arg0 whileScreeningChallenges:(BOOL)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3 ;
+(void)reportScores:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCategory:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 playerID:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg0 playerInternal:(id)arg1 ;
-(id)initWithLeaderboardIdentifier:(id)arg0 ;
-(id)initWithLeaderboardIdentifier:(id)arg0 forPlayer:(id)arg1 ;
-(id)initWithLeaderboardIdentifier:(id)arg0 player:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)reportScoreWithCompletionHandler:(id)arg0 ;


@end


#endif