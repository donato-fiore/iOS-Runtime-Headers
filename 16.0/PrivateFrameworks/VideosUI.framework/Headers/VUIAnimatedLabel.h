// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIANIMATEDLABEL_H
#define VUIANIMATEDLABEL_H

@class CALayer, NSArray, UIImage;


#import "VUILabel.h"
#import "__TVAnimatedImageView.h"

@interface VUIAnimatedLabel : VUILabel {
    BOOL _crossfading;
    BOOL _marqueeNeeded;
    BOOL _marqueeing;
    BOOL _starting;
    BOOL _stopping;
    CALayer *_maskLayer;
}


@property (nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (copy, nonatomic) NSArray *attributedStrings; // ivar: _attributedStrings
@property (nonatomic) CGFloat crossfadeDuration; // ivar: _crossfadeDuration
@property (readonly, nonatomic) NSUInteger currentAttributedStringIndex; // ivar: _currentAttributedStringIndex
@property (readonly, weak, nonatomic) __TVAnimatedImageView *currentMarqueeView; // ivar: _currentMarqueeView
@property (retain, nonatomic) UIImage *marqueeContentImage; // ivar: _marqueeContentImage
@property (nonatomic) CGFloat marqueeDelay; // ivar: _marqueeDelay
@property (nonatomic) CGFloat maskCapWidth; // ivar: _maskCapWidth
@property (readonly, weak, nonatomic) __TVAnimatedImageView *nextMarqueeView; // ivar: _nextMarqueeView
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) CGFloat replicationPadding; // ivar: _replicationPadding
@property (nonatomic) float scrollRate; // ivar: _scrollRate
@property (nonatomic) CGFloat underPosterOutset; // ivar: _underPosterOutset


-(BOOL)_isRTL;
-(BOOL)_shouldCycle;
-(id)_rasterizedTextWithMarquee:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg0 ;
-(void)_applicationWillResignActiveNotification:(id)arg0 ;
-(void)_clearAnimations;
-(void)_clearAttributedStrings;
-(void)_prepareNextMarqueeWithDelay:(CGFloat)arg0 ;
-(void)_startMarqueeIfNeeded;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setMarqueeEnabled:(BOOL)arg0 ;
-(void)setMarqueeRunning:(BOOL)arg0 ;
-(void)setNeedsDisplay;
-(void)setText:(id)arg0 ;
-(void)stopAndResetScrollWithDuration:(CGFloat)arg0 ;
-(void)stopAnimating;
-(void)stopAnimatingWithoutResetWithDuration:(CGFloat)arg0 ;


@end


#endif