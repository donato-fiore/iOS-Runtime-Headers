// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKINVITE_H
#define GKINVITE_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "GKInviteInternal.h"
#import "GKPlayer.h"

@interface GKInvite : NSObject

@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic, getter=isHosted) BOOL hosted;
@property (retain) GKInviteInternal *internal; // ivar: _internal
@property (readonly, nonatomic) NSString *inviteID;
@property (readonly, retain, nonatomic) NSString *inviter;
@property (readonly, nonatomic) BOOL isNearby;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) unsigned int playerAttributes;
@property (readonly, nonatomic) NSUInteger playerGroup;
@property (readonly, retain, nonatomic) GKPlayer *sender; // ivar: _sender
@property (readonly, nonatomic) NSData *sessionToken;


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