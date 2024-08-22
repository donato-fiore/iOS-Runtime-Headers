// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSGROUPVIEWVERTICALPANANIMATOR_H
#define PKPASSGROUPVIEWVERTICALPANANIMATOR_H

@class _UIDynamicValueAnimation, UIPanGestureRecognizer;

#import <Foundation/Foundation.h>

#import "PKPassGroupView.h"

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    _UIDynamicValueAnimation *_panningAnimation;
}


@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, retain, nonatomic) PKPassGroupView *groupView; // ivar: _groupView
@property (nonatomic) CGPoint panningViewStartPosition; // ivar: _panningViewStartPosition
@property (nonatomic) CGPoint panningViewTargetPosition; // ivar: _panningViewTargetPosition
@property (nonatomic) CGFloat panningViewTargetScale; // ivar: _panningViewTargetScale


-(CGFloat)scaleForY:(CGFloat)arg0 ;
-(id)_dynamicAnimationWithStart:(CGFloat)arg0 target:(CGFloat)arg1 initialVelocity:(CGFloat)arg2 ;
-(id)init;
-(id)initWithGroupView:(id)arg0 ;
-(void)dealloc;
// -(void)dismissWithStartVelocity:(CGFloat)arg0 alongSideApplier:(id)arg1 completion:(unk)arg2  ;
-(void)layoutViewsWithY:(CGFloat)arg0 ;
-(void)stop;


@end


#endif