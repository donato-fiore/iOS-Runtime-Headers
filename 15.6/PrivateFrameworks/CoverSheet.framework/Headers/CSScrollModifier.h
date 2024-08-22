// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSSCROLLMODIFIER_H
#define CSSCROLLMODIFIER_H

@class UIView, NSString;
@protocol PTSettingsKeyObserver, BSUIScrollViewDelegate;

#import <Foundation/Foundation.h>


@interface CSScrollModifier : NSObject <PTSettingsKeyObserver, BSUIScrollViewDelegate>

 {
    UIView *_targetView;
    BOOL _hasDraggedSinceReset;
    BOOL _cancelled;
    CGPoint _firstLocation;
    CGPoint _lastLocation;
    CGFloat _minSwipePercentageOfScreen;
    CGFloat _inertialMultiplier;
    CGFloat _initialScrollViewOffsetX;
    CGFloat _accumulatedDrag;
    CGFloat _maxAccumulatedDragThreshold;
}


@property (nonatomic) CGFloat accumulatedDragThresholdPercentage; // ivar: _accumulatedDragThresholdPercentage
@property (nonatomic) BOOL cancelScrollingIfTooMuchDrag; // ivar: _cancelScrollingIfTooMuchDrag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat inertialMultiplierSigmoidAlpha; // ivar: _inertialMultiplierSigmoidAlpha
@property (nonatomic) CGFloat inertialMultiplierSigmoidBase; // ivar: _inertialMultiplierSigmoidBase
@property (nonatomic) CGFloat inertialMultiplierSigmoidPivot; // ivar: _inertialMultiplierSigmoidPivot
@property (nonatomic) CGFloat inertialMultiplierSigmoidRange; // ivar: _inertialMultiplierSigmoidRange
@property (nonatomic) CGFloat maxDragFromVerticalPerFrame; // ivar: _maxDragFromVerticalPerFrame
@property (nonatomic) CGFloat maxScrollDistance; // ivar: _maxScrollDistance
@property (nonatomic) CGFloat minPercentageSigmoidAlpha; // ivar: _minPercentageSigmoidAlpha
@property (nonatomic) CGFloat minPercentageSigmoidBase; // ivar: _minPercentageSigmoidBase
@property (nonatomic) CGFloat minPercentageSigmoidPivot; // ivar: _minPercentageSigmoidPivot
@property (nonatomic) CGFloat minPercentageSigmoidRange; // ivar: _minPercentageSigmoidRange
@property (nonatomic) CGFloat powerOfVerticalDirectionSine2; // ivar: _powerOfVerticalDirectionSine2
@property (readonly, nonatomic) BOOL recognized; // ivar: _recognized
@property (readonly) Class superclass;


-(BOOL)scrollFromRightToLeft;
-(CGFloat)_horizontalProgressSubtractionFromVertical:(struct CGPoint )arg0 ;
-(id)initWithView:(id)arg0 ;
-(struct CGPoint )scrollView:(id)arg0 adjustedOffsetForOffset:(struct CGPoint )arg1 translation:(struct CGPoint )arg2 startPoint:(struct CGPoint )arg3 locationInView:(struct CGPoint )arg4 horizontalVelocity:(*CGFloat)arg5 verticalVelocity:(*CGFloat)arg6 ;
-(void)_loadFromSettings:(id)arg0 ;
-(void)_updateScrollParameters;
-(void)dealloc;
-(void)reset;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif