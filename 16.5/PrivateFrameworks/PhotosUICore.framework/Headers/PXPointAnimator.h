// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPOINTANIMATOR_H
#define PXPOINTANIMATOR_H

@class PXNumberAnimator<PXMutableNumberAnimator>, NSString;
@protocol PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget;


#import "PXObservable.h"

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget>

 {
    PXNumberAnimator<PXMutableNumberAnimator> *_xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> *_yAnimator;
}


@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat epsilon;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic) CGPoint presentationValue; // ivar: _presentationValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGPoint value; // ivar: _value
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;


-(id)init;
-(id)initWithValue:(struct CGPoint )arg0 ;
-(id)initWithValue:(struct CGPoint )arg0 epsilon:(CGFloat)arg1 ;
-(id)mutableChangeObject;
-(struct CGPoint )approximateVelocity;
-(void)_setInternalValue:(struct CGPoint )arg0 ;
-(void)_update;
-(void)didPerformChanges;
-(void)handleDisplayLink:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(struct CGPoint )arg0 changes:(id)arg1 ;
-(void)performChangesUsingSpringAnimationWithStiffness:(CGFloat)arg0 dampingRatio:(CGFloat)arg1 initialVelocity:(struct CGPoint )arg2 changes:(id)arg3 ;
-(void)performChangesWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 changes:(id)arg2 ;
-(void)performChangesWithoutAnimation:(id)arg0 ;


@end


#endif