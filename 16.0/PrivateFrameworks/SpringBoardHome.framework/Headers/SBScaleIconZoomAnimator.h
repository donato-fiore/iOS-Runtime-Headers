// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCALEICONZOOMANIMATOR_H
#define SBSCALEICONZOOMANIMATOR_H

@class UIView, NSMutableArray;
@protocol SBScaleIconZoomAnimationContaining;


#import "SBIconZoomAnimator.h"
#import "SBIconView.h"
#import "SBReversibleLayerPropertyAnimator.h"
#import "SBHScaleZoomSettings.h"
#import "SBIcon.h"

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator {
    UIEdgeInsets _iconScootch;
    CGFloat _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
}


@property (retain, nonatomic) NSMutableArray *animationCompletions; // ivar: _animationCompletions
@property (readonly, nonatomic) NSObject<SBScaleIconZoomAnimationContaining> *animationContainer;
@property (readonly, nonatomic) UIView *defaultTargetIconContainerView;
@property (readonly, nonatomic) BOOL fadesHomeScreen;
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator; // ivar: _homeScreenScaleAnimator
@property (readonly, nonatomic) CGFloat maxHomeScreenZoomScale;
@property (readonly, nonatomic) SBIconView *referenceIconView;
@property (retain, nonatomic) SBHScaleZoomSettings *settings;
@property (readonly, nonatomic) SBIcon *targetIcon; // ivar: _targetIcon
@property (readonly, nonatomic) CGPoint targetIconCenter; // ivar: _targetIconCenter
@property (readonly, nonatomic) UIView *targetIconContainerView;
@property (readonly, nonatomic) UIView *targetIconPositioningView; // ivar: _targetIconPositioningView
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator; // ivar: _targetIconScaleXAnimator
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator; // ivar: _targetIconScaleYAnimator
@property (readonly, nonatomic) SBIconView *targetIconView;
@property (readonly, nonatomic) CGFloat zoomScale;
@property (readonly, nonatomic) CGPoint zoomScaleDimension; // ivar: _zoomScaleDimension
@property (readonly, nonatomic) CGPoint zoomedTargetIconCenter; // ivar: _zoomedTargetIconCenter


+(BOOL)validateAnimationContainer:(id)arg0 targetIcon:(id)arg1 ;
-(BOOL)_forceSquareZoomDimension;
-(BOOL)shouldMatchMoveWithDock;
-(CGFloat)_homeScreenScaleForZoomFraction:(CGFloat)arg0 ;
-(CGFloat)_zoomedVisualAltitude;
-(NSUInteger)_numberOfSignificantAnimations;
-(id)initWithAnimationContainer:(id)arg0 targetIcon:(id)arg1 ;
-(struct CGPoint )_referenceIconImageCenter;
-(struct CGPoint )_targetIconScaleForZoomFraction:(CGFloat)arg0 ;
-(struct CGPoint )_zoomedIconCenter;
-(struct CGRect )_zoomedFrame;
-(void)_applyIconGridFadeFraction:(CGFloat)arg0 ;
-(void)_applyVisualAltitudeFraction:(CGFloat)arg0 ;
-(void)_applyZoomFraction:(CGFloat)arg0 ;
-(void)_cleanupAnimation;
-(void)_configureTargetIconPositioningView:(id)arg0 ;
-(void)_performAnimationToFraction:(CGFloat)arg0 withCentralAnimationSettings:(id)arg1 delay:(CGFloat)arg2 alreadyAnimating:(BOOL)arg3 sharedCompletion:(id)arg4 ;
-(void)_prepareAnimation;
-(void)_setAnimationFraction:(CGFloat)arg0 ;
-(void)_setIconAlpha:(CGFloat)arg0 ;


@end


#endif