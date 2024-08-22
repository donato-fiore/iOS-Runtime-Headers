// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPUSHBEHAVIOR_H
#define UIPUSHBEHAVIOR_H

@class NSMutableDictionary, NSArray;


#import "UIDynamicBehavior.h"

@interface UIPushBehavior : UIDynamicBehavior {
    CGFloat _angle;
    CGFloat _magnitude;
    BOOL _active;
    NSInteger _mode;
    CGVector _forceVector;
    CGFloat _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}


@property (nonatomic) BOOL active;
@property (nonatomic) CGFloat angle;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) CGFloat magnitude;
@property (readonly, nonatomic) NSInteger mode;
@property (nonatomic) CGVector pushDirection;


+(BOOL)_isPrimitiveBehavior;
-(CGFloat)xComponent;
-(CGFloat)yComponent;
-(id)description;
-(id)init;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 mode:(NSInteger)arg1 ;
-(struct CGPoint )targetPointForItem:(id)arg0 ;
-(struct UIOffset )targetOffsetFromCenterForItem:(id)arg0 ;
-(void)_associate;
-(void)_dissociate;
-(void)_step;
-(void)addItem:(id)arg0 ;
-(void)removeItem:(id)arg0 ;
-(void)setTargetOffsetFromCenter:(struct UIOffset )arg0 forItem:(id)arg1 ;
-(void)setTargetPoint:(struct CGPoint )arg0 forItem:(id)arg1 ;
-(void)setXComponent:(CGFloat)arg0 ;
-(void)setXComponent:(CGFloat)arg0 yComponent:(CGFloat)arg1 ;
-(void)setYComponent:(CGFloat)arg0 ;


@end


#endif