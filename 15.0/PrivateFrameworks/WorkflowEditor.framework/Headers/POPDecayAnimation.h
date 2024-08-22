// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPDECAYANIMATION_H
#define POPDECAYANIMATION_H



#import "POPPropertyAnimation.h"

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic) CGFloat deceleration;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, copy, nonatomic) id *originalVelocity;
@property (copy, nonatomic) id *velocity;


+(id)animation;
+(id)animationWithPropertyNamed:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)reversedVelocity;
-(id)toValue;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;
-(void)_ensureComputedProperties;
-(void)_initState;
-(void)_invalidateComputedProperties;
-(void)setFromValue:(id)arg0 ;
-(void)setToValue:(id)arg0 ;


@end


#endif