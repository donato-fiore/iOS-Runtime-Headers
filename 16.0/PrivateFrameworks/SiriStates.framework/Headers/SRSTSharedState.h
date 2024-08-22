// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRSTSHAREDSTATE_H
#define SRSTSHAREDSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_SRSTSharedState.h"

@interface SRSTSharedState : NSObject

@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) _SRSTSharedState *underlyingObject; // ivar: _underlyingObject


+(id)new;
+(id)passive;
+(id)preparingToServe;
+(id)serving;
+(id)unshared;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingObject:(id)arg0 ;
-(id)makeProxy;


@end


#endif