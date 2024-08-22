// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCHALLENGE_H
#define GKCHALLENGE_H

@class NSString, NSOrderedSet, NSDate;
@protocol NSCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GKGame.h"
#import "GKChallengeInternal.h"
#import "GKPlayer.h"

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *challengeID;
@property (readonly, copy, nonatomic) NSOrderedSet *compatibleBundleIDs;
@property (readonly, retain, nonatomic) NSDate *completionDate;
@property (readonly, nonatomic) BOOL detailsLoaded;
@property (readonly, nonatomic) GKGame *game;
@property (retain) GKChallengeInternal *internal; // ivar: _internal
@property (readonly, retain, nonatomic) NSDate *issueDate;
@property (readonly, copy, nonatomic) GKPlayer *issuingPlayer;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) GKPlayer *receivingPlayer;
@property (readonly, nonatomic) NSInteger state;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)challengeForGame:(id)arg0 andPlayer:(id)arg1 withAchievement:(id)arg2 ;
+(id)challengeForGame:(id)arg0 andPlayer:(id)arg1 withScore:(id)arg2 ;
+(id)challengeForInternalRepresentation:(id)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)stringForState:(NSInteger)arg0 ;
+(void)getCountOfChallenges:(id)arg0 ;
+(void)loadChallengesForGame:(id)arg0 receivingPlayer:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)loadChallengesForReceivingPlayer:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadReceivedChallengesWithCompletionHandler:(id)arg0 ;
+(void)loadReceivedPendingChallengesWithCompletionHandler:(id)arg0 ;
-(BOOL)hasLoadedUIDetails;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)infoTextForIssuingPlayer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)decline;
-(void)declineWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)issueToPlayers:(id)arg0 message:(id)arg1 ;
-(void)loadDetailsWithCompletionHandler:(id)arg0 ;
-(void)loadUIDetailsWithHandler:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif