// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKTURNBASEDEXCHANGEREPLY_H
#define GKTURNBASEDEXCHANGEREPLY_H

@class NSData, NSString, NSDate;

#import <Foundation/Foundation.h>

#import "GKTurnBasedExchangeReplyInternal.h"
#import "GKTurnBasedMatch.h"
#import "GKTurnBasedParticipant.h"

@interface GKTurnBasedExchangeReply : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain) GKTurnBasedExchangeReplyInternal *internal; // ivar: _internal
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (readonly, nonatomic) NSString *message;
@property (retain, nonatomic) GKTurnBasedParticipant *recipient; // ivar: _recipient
@property (readonly, nonatomic) NSDate *replyDate;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif