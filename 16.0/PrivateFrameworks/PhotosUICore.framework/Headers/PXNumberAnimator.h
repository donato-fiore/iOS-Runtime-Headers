// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXNUMBERANIMATOR_H
#define PXNUMBERANIMATOR_H

@class NSMutableArray, NSString;
@protocol PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget;


#import "PXObservable.h"
#import "PXDisplayLink.h"

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget>

 {
    BOOL _isPerformingChanges;
    ? _needsUpdateFlags;
    _PXValueAnimationSpec _currentAnimationSpec;
    NSMutableArray *_animations;
    PXDisplayLink *_displayLink;
    BOOL _skipFirstNumberWhenAnimationStart;
}


@property (readonly, nonatomic) CGFloat approximateVelocity;
@property (readonly, nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PXNumberAnimatorDisplayLinkTarget> *displayLinkTarget; // ivar: _displayLinkTarget
@property (readonly, nonatomic) CGFloat epsilon; // ivar: _epsilon
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isBeingMutated; // ivar: _isBeingMutated
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (nonatomic, setter=_setPresentationValue:) CGFloat presentationValue; // ivar: _presentationValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat value; // ivar: _value


-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithValue:(CGFloat)arg0 ;
-(id)initWithValue:(CGFloat)arg0 epsilon:(CGFloat)arg1 ;
-(id)mutableChangeObject;
-(void)_invalidatePresentationValue;
-(void)_setAnimating:(BOOL)arg0 ;
-(void)_setAnimating:(BOOL)arg0 deferredStart:(BOOL)arg1 ;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updatePresentationValueIfNeeded;
-(void)didPerformChanges;
-(void)handleDisplayLink:(id)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(CGFloat)arg0 changes:(id)arg1 ;
-(void)performChangesUsingSpringAnimationWithStiffness:(CGFloat)arg0 dampingRatio:(CGFloat)arg1 initialVelocity:(CGFloat)arg2 changes:(id)arg3 ;
-(void)performChangesWithDuration:(CGFloat)arg0 curve:(NSInteger)arg1 changes:(id)arg2 ;
-(void)performChangesWithoutAnimation:(id)arg0 ;


@end


#endif