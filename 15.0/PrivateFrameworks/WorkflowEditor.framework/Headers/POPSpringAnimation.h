// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef POPSPRINGANIMATION_H
#define POPSPRINGANIMATION_H



#import "POPPropertyAnimation.h"

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic) CGFloat dynamicsFriction;
@property (nonatomic) CGFloat dynamicsMass;
@property (nonatomic) CGFloat dynamicsTension;
@property (nonatomic) CGFloat springBounciness;
@property (nonatomic) CGFloat springSpeed;
@property (copy, nonatomic) id *velocity;


+(id)animation;
+(id)animationWithPropertyNamed:(id)arg0 ;
+(void)convertBounciness:(CGFloat)arg0 speed:(CGFloat)arg1 toTension:(*CGFloat)arg2 friction:(*CGFloat)arg3 mass:(*CGFloat)arg4 ;
+(void)convertTension:(CGFloat)arg0 friction:(CGFloat)arg1 toBounciness:(*CGFloat)arg2 speed:(*CGFloat)arg3 ;
-(*void)solver;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_appendDescription:(id)arg0 debug:(BOOL)arg1 ;
-(void)_initState;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsMass;
-(void)_updatedDynamicsTension;
-(void)dealloc;
-(void)setSolver:(*void)arg0 ;


@end


#endif