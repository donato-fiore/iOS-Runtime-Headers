// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTURNBASEDPARTICIPANT_H
#define GKTURNBASEDPARTICIPANT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "GKTurnBasedParticipantInternal.h"
#import "GKPlayer.h"

@interface GKTurnBasedParticipant : NSObject

@property (readonly) GKTurnBasedParticipantInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSString *inviteMessage;
@property (readonly, nonatomic) GKPlayer *invitedBy;
@property (readonly, nonatomic) BOOL isLocalPlayer;
@property (readonly, nonatomic) BOOL isWinner;
@property (copy, nonatomic) NSDate *lastTurnDate;
@property (nonatomic) NSInteger matchOutcome;
@property (readonly, nonatomic) NSString *matchStatusString;
@property (readonly, nonatomic) GKPlayer *player;
@property (readonly, nonatomic) NSInteger status;
@property (copy, nonatomic) NSDate *timeoutDate;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(BOOL)matchOutcomeIsValidForDoneState:(NSInteger)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)keyPathsForValuesAffectingBasicMatchOutcomeString;
+(id)keyPathsForValuesAffectingMatchOutcomeString;
+(id)keyPathsForValuesAffectingStatus;
+(id)stringForMatchOutcome:(NSInteger)arg0 totalParticipant:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)basicMatchOutcomeString:(NSInteger)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)matchOutcomeString:(NSInteger)arg0 ;
-(id)matchOutcomeStringForLocalPlayer:(NSInteger)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif