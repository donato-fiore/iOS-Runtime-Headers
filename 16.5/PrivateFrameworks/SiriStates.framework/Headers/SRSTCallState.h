// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTCALLSTATE_H
#define SRSTCALLSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_SRSTCallState.h"

@interface SRSTCallState : NSObject

@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) _SRSTCallState *underlyingObject; // ivar: _underlyingObject


+(id)micMutedCall;
+(id)new;
+(id)noCall;
+(id)onHoldCall;
+(id)ongoingCall;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingObject:(id)arg0 ;
-(id)makeProxy;


@end


#endif