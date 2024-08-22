// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUISBICONPROGRESSVIEW_H
#define VUISBICONPROGRESSVIEW_H

@class UIView, CADisplayLink, UIImage;
@protocol VUISBIconProgressViewDelegate;


#import "_VUISBInstallProgressStateTransition.h"
#import "_VUISBIconProgressPausedTransition.h"
#import "_VUISBIconProgressFractionTransition.h"

@interface VUISBIconProgressView : UIView {
    _VUISBInstallProgressStateTransition *_activeStateTransition;
    _VUISBIconProgressPausedTransition *_activePausedTransition;
    _VUISBIconProgressFractionTransition *_activeFractionTransition;
    NSInteger _modelState;
    BOOL _modelPaused;
    CGFloat _modelFraction;
    CADisplayLink *_displayLink;
    CGFloat _lastUpdate;
    UIImage *_maskImage;
}


@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (nonatomic) BOOL canAnimate; // ivar: _canAnimate
@property (readonly, nonatomic) CGRect circleBoundingRect;
@property (nonatomic) CGFloat circleRadiusFraction; // ivar: _circleRadiusFraction
@property (nonatomic) NSObject<VUISBIconProgressViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat displayedFraction; // ivar: _displayedFraction
@property (nonatomic) NSInteger displayedState; // ivar: _displayedState
@property (nonatomic) BOOL displayingPaused; // ivar: _displayingPaused
@property (nonatomic) CGFloat foregroundAlpha; // ivar: _foregroundAlpha
@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage
@property (nonatomic) CGFloat pauseRadiusFraction; // ivar: _pauseRadiusFraction


+(id)_pieImageAtFraction:(CGFloat)arg0 ;
+(id)_pieImagesMemoryPool;
-(BOOL)_hasActiveTransitions;
-(id)_maskImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_clearDisplayLink;
-(void)_clearTransitionIfComplete:(*id)arg0 ;
-(void)_drawIncomingCircleWithCenter:(struct CGPoint )arg0 ;
-(void)_drawOutgoingCircleWithCenter:(struct CGPoint )arg0 ;
-(void)_drawPauseUIWithCenter:(struct CGPoint )arg0 ;
-(void)_drawPieWithCenter:(struct CGPoint )arg0 ;
-(void)_ensureDisplayLink;
-(void)_onDisplayLink:(id)arg0 ;
-(void)_updateFractionTransitionAnimated:(BOOL)arg0 ;
-(void)_updatePausedTransitionAnimated:(BOOL)arg0 ;
-(void)_updateStateTransitionAnimated:(BOOL)arg0 ;
-(void)_updateTransitionsAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setState:(NSInteger)arg0 paused:(BOOL)arg1 fractionLoaded:(CGFloat)arg2 animated:(BOOL)arg3 ;


@end


#endif