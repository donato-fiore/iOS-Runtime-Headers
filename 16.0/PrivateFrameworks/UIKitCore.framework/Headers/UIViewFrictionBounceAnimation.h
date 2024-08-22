// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIVIEWFRICTIONBOUNCEANIMATION_H
#define UIVIEWFRICTIONBOUNCEANIMATION_H

@class NSString;
@protocol UIIntervalAnimating, UIVectorOperatable;

#import <Foundation/Foundation.h>


@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating>

 {
    id *_stableTarget;
    id *_intermediate;
    id *_current;
    id *_epsilon;
    CGFloat _deceleration;
    CGFloat _bounce;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<UIVectorOperatable> *targetValue; // ivar: _targetValue


-(BOOL)isStable;
-(id)initWithCurrent:(id)arg0 target:(id)arg1 ;
-(id)stepWithDelta:(CGFloat)arg0 ;
-(id)updatedTarget;
-(id)velocity;
-(void)setVelocity:(id)arg0 ;


@end


#endif