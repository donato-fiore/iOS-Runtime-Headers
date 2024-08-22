// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMATCHREQUEST_H
#define GKMATCHREQUEST_H

@class NSString, NSArray;
@protocol GKReportable;

#import <Foundation/Foundation.h>

#import "GKMatchRequestInternal.h"
#import "GKTournament.h"

@interface GKMatchRequest : NSObject <GKReportable>



@property NSUInteger defaultNumberOfPlayers;
@property (retain) GKMatchRequestInternal *internal; // ivar: _internal
@property (copy) NSString *inviteMessage;
@property (copy) id *inviteeResponseHandler; // ivar: _inviteeResponseHandler
@property NSUInteger maxPlayers;
@property NSUInteger minPlayers;
@property unsigned int playerAttributes;
@property NSUInteger playerGroup;
@property (retain) NSArray *playersToInvite;
@property (copy) id *recipientResponseHandler; // ivar: _recipientResponseHandler
@property (retain) NSArray *recipients;
@property BOOL restrictToAutomatch;
@property (retain) GKTournament *tournamentForInvitePool;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(NSUInteger)maxPlayersAllowedForMatchOfType:(NSUInteger)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)reportableKeyPaths;
-(BOOL)isConfiguredForAutomatchOnly;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIncorrectlyInvitingPlayers;
-(BOOL)isRecipientCountValid;
-(BOOL)isTurnBasedValid;
-(BOOL)isValidForHosted:(BOOL)arg0 ;
-(BOOL)isValidWithMax:(NSUInteger)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)guestPlayers;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)ensureValidityHosted:(BOOL)arg0 ;
-(void)loadRecipientsWithCompletionHandler:(id)arg0 ;
-(void)removeLocalPlayerFromPlayersToInvite;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif