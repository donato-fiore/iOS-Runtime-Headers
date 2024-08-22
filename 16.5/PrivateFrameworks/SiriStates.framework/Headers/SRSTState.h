// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRSTSTATE_H
#define SRSTSTATE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_SRSTState.h"

@interface SRSTState : NSObject

@property (readonly, nonatomic) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) _SRSTState *underlyingObject; // ivar: _underlyingObject


+(id)analyzing;
+(id)available;
+(id)disabled;
+(id)new;
+(id)postResponse;
+(id)processing;
+(id)responding;
+(id)resting;
+(id)understanding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingObject:(id)arg0 ;
-(id)makeProxy;


@end


#endif