// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONTRANSITION_H
#define OKACTIONTRANSITION_H

@protocol NSSecureCoding, OKActionTransitionExports;


#import "OKAction.h"

@interface OKActionTransition : OKAction <NSSecureCoding, OKActionTransitionExports>



@property (readonly, nonatomic) float progress; // ivar: _progress
@property (readonly, nonatomic) NSUInteger target; // ivar: _target
@property (readonly, nonatomic) float velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
+(id)transitionWithState:(NSUInteger)arg0 target:(NSUInteger)arg1 progress:(float)arg2 velocity:(float)arg3 context:(id)arg4 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif