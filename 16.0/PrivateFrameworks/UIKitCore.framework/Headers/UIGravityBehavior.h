// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGRAVITYBEHAVIOR_H
#define UIGRAVITYBEHAVIOR_H

@class NSArray;


#import "UIDynamicBehavior.h"

@interface UIGravityBehavior : UIDynamicBehavior {
    CGPoint _gravity;
}


@property (nonatomic) CGFloat angle;
@property (nonatomic) CGVector gravityDirection;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) CGFloat magnitude;


+(BOOL)_isPrimitiveBehavior;
-(CGFloat)xComponent;
-(CGFloat)yComponent;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(struct CGPoint )denormalizedGravity;
-(struct CGPoint )gravity;
-(void)_addGravityItem:(id)arg0 ;
-(void)_associate;
-(void)_dissociate;
-(void)addItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)setGravity:(struct CGPoint )arg0 ;
-(void)setXComponent:(CGFloat)arg0 ;
-(void)setXComponent:(CGFloat)arg0 yComponent:(CGFloat)arg1 ;
-(void)setYComponent:(CGFloat)arg0 ;


@end


#endif