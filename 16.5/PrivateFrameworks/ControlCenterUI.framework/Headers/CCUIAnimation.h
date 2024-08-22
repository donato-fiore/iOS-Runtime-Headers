// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIANIMATION_H
#define CCUIANIMATION_H

@protocol NSCopying, CCUIAnimationParameters;

#import <Foundation/Foundation.h>


@interface CCUIAnimation : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *animations; // ivar: _animations
@property (readonly, nonatomic) CGFloat delay; // ivar: _delay
@property (readonly, copy, nonatomic) NSObject<CCUIAnimationParameters> *parameters; // ivar: _parameters
@property (readonly, nonatomic) CGFloat speed; // ivar: _speed


+(id)animationWithParameters:(id)arg0 animations:(id)arg1 ;
+(id)animationWithParameters:(id)arg0 delay:(CGFloat)arg1 animations:(id)arg2 ;
+(id)animationWithParameters:(id)arg0 delay:(CGFloat)arg1 speed:(CGFloat)arg2 animations:(id)arg3 ;
-(id)_initWithParameters:(id)arg0 delay:(CGFloat)arg1 speed:(CGFloat)arg2 animations:(id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif