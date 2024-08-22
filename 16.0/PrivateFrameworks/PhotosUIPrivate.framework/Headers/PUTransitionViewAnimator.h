// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUTRANSITIONVIEWANIMATOR_H
#define PUTRANSITIONVIEWANIMATOR_H

@class CADisplayLink, UIView;
@protocol PUTransitionViewAnimatorDelegate;

#import <Foundation/Foundation.h>

#import "PUValueFilter.h"

@interface PUTransitionViewAnimator : NSObject {
    ? _delegateFlags;
}


@property (retain, nonatomic, setter=_setAutoUpdateDisplayLink:) CADisplayLink *_autoUpdateDisplayLink; // ivar: __autoUpdateDisplayLink
@property (nonatomic, setter=_setCurrentRotation:) CGFloat _currentRotation; // ivar: __currentRotation
@property (nonatomic, setter=_setCurrentScale:) CGFloat _currentScale; // ivar: __currentScale
@property (nonatomic, setter=_setCurrentSizeMixFactor:) CGFloat _currentSizeMixFactor; // ivar: __currentSizeMixFactor
@property (nonatomic, setter=_setDesiredRotation:) CGFloat _desiredRotation; // ivar: __desiredRotation
@property (nonatomic, setter=_setDesiredScale:) CGFloat _desiredScale; // ivar: __desiredScale
@property (nonatomic, setter=_setDesiredSizeMixFactor:) CGFloat _desiredSizeMixFactor; // ivar: __desiredSizeMixFactor
@property (nonatomic, setter=_setDesiredTranslation:) CGPoint _desiredTranslation; // ivar: __desiredTranslation
@property (nonatomic, setter=_setAutoUpdating:) BOOL _isAutoUpdating; // ivar: __isAutoUpdating
@property (nonatomic, setter=_setEnding:) BOOL _isEnding; // ivar: __isEnding
@property (retain, nonatomic, setter=_setProgressFilter:) PUValueFilter *_progressFilter; // ivar: __progressFilter
@property (retain, nonatomic, setter=_setRampUpFilter:) PUValueFilter *_rampUpFilter; // ivar: __rampUpFilter
@property (retain, nonatomic, setter=_setShouldFinishFilter:) PUValueFilter *_shouldFinishFilter; // ivar: __shouldFinishFilter
@property (nonatomic, setter=_setTargetAspectRatioSourceFrame:) CGRect _targetAspectRatioSourceFrame; // ivar: __targetAspectRatioSourceFrame
@property (nonatomic, setter=_setTargetScale:) CGFloat _targetScale; // ivar: __targetScale
@property (nonatomic, setter=_setAnchorPoint:) CGPoint anchorPoint; // ivar: _anchorPoint
@property (nonatomic) BOOL appliesScaleViaTransform; // ivar: _appliesScaleViaTransform
@property (nonatomic) BOOL autoUpdates; // ivar: _autoUpdates
@property (nonatomic, setter=_setCurrentTranslation:) CGPoint currentTranslation; // ivar: _currentTranslation
@property (weak, nonatomic) NSObject<PUTransitionViewAnimatorDelegate> *delegate; // ivar: _delegate
@property (nonatomic, setter=_setDirection:) NSUInteger direction; // ivar: _direction
@property (nonatomic, setter=_setProgress:) CGFloat progress; // ivar: _progress
@property (nonatomic, setter=_setRampUpDuration:) CGFloat rampUpDuration; // ivar: _rampUpDuration
@property (nonatomic, setter=_setShouldFinish:) BOOL shouldFinish; // ivar: _shouldFinish
@property (nonatomic, setter=_setShouldUseTargetAspectRatio:) BOOL shouldUseTargetAspectRatio; // ivar: _shouldUseTargetAspectRatio
@property (nonatomic, setter=_setSourceFrame:) CGRect sourceFrame; // ivar: _sourceFrame
@property (nonatomic, setter=_setTargetFrame:) CGRect targetFrame; // ivar: _targetFrame
@property (nonatomic, setter=_setUnfilteredProgress:) CGFloat unfilteredProgress; // ivar: _unfilteredProgress
@property (retain, nonatomic, setter=_setView:) UIView *view; // ivar: _view


-(id)initWithView:(id)arg0 sourceFrame:(struct CGRect )arg1 targetFrame:(struct CGRect )arg2 anchorPoint:(struct CGPoint )arg3 shouldUseTargetAspectRatio:(BOOL)arg4 rampUpDuration:(CGFloat)arg5 direction:(NSUInteger)arg6 ;
-(void)_autoUpdate:(id)arg0 ;
-(void)_endWithTranslationVelocity:(struct CGPoint )arg0 rotationVelocity:(CGFloat)arg1 scaleVelocity:(CGFloat)arg2 shouldBounce:(BOOL)arg3 finish:(BOOL)arg4 animated:(BOOL)arg5 ;
-(void)_update;
-(void)_updateAutoUpdateDisplayLink;
-(void)cancelWithTranslationVelocity:(struct CGPoint )arg0 rotationVelocity:(CGFloat)arg1 scaleVelocity:(CGFloat)arg2 shouldBounce:(BOOL)arg3 ;
-(void)cancelWithoutAnimation;
-(void)finishWithTranslationVelocity:(struct CGPoint )arg0 rotationVelocity:(CGFloat)arg1 scaleVelocity:(CGFloat)arg2 shouldBounce:(BOOL)arg3 ;
-(void)updateWithTranslation:(struct CGPoint )arg0 rotation:(CGFloat)arg1 scale:(CGFloat)arg2 ;


@end


#endif