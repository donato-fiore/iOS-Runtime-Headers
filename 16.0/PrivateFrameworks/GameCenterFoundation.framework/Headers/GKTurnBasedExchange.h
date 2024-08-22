// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDEXCHANGE_H
#define GKTURNBASEDEXCHANGE_H

@class NSDate, NSData, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GKTurnBasedExchangeInternal.h"
#import "GKTurnBasedMatch.h"
#import "GKTurnBasedParticipant.h"

@interface GKTurnBasedExchange : NSObject

@property (retain, nonatomic) NSDate *completionDate;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *exchangeID;
@property (retain) GKTurnBasedExchangeInternal *internal; // ivar: _internal
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (readonly, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) NSArray *replies; // ivar: _replies
@property (readonly, nonatomic) NSDate *sendDate;
@property (retain, nonatomic) GKTurnBasedParticipant *sender; // ivar: _sender
@property (readonly, nonatomic) char status;
@property (retain, nonatomic) NSDate *timeoutDate;


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
-(void)_updateInternalFromMatchInternal:(id)arg0 ;
-(void)cancelWithLocalizableMessageKey:(id)arg0 arguments:(id)arg1 completionHandler:(id)arg2 ;
-(void)replyWithLocalizableMessageKey:(id)arg0 arguments:(id)arg1 data:(id)arg2 completionHandler:(id)arg3 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif