// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVPLAYBACKCONTENTZOOMINGVIEW_H
#define AVPLAYBACKCONTENTZOOMINGVIEW_H

@class UIScrollView, NSString, UIWindow;
@protocol UIScrollViewDelegate, _UIViewBoundingPathChangeObserver, AVPlaybackContentContainer;


#import "AVPlaybackContentContainerView.h"

@interface AVPlaybackContentZoomingView : UIScrollView <UIScrollViewDelegate, _UIViewBoundingPathChangeObserver, AVPlaybackContentContainer>



@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView; // ivar: _activeContentView
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic) CGSize contentAspectRatio; // ivar: _contentAspectRatio
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFullScreen) BOOL fullScreen; // ivar: _fullScreen
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UIWindow *lastKnownWindow; // ivar: _lastKnownWindow
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // ivar: _playingOnSecondScreen
@property (nonatomic) CGRect previousBounds; // ivar: _previousBounds
@property (readonly) Class superclass;
@property (nonatomic) CGRect videoContentFrame; // ivar: _videoContentFrame
@property (nonatomic, getter=isZoomingEnabled) BOOL zoomingEnabled; // ivar: _zoomingEnabled


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 activeContentView:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(struct CGRect )_contentRectForScale:(CGFloat)arg0 ;
-(struct CGSize )_contentSizeForScale:(CGFloat)arg0 ;
-(struct CGSize )scrollView:(id)arg0 contentSizeForZoomScale:(CGFloat)arg1 withProposedSize:(struct CGSize )arg2 ;
-(struct UIEdgeInsets )_contentInsets;
-(void)_boundingPathMayHaveChangedForView:(id)arg0 relativeToBoundsOriginOnly:(BOOL)arg1 ;
-(void)_updateMinMaxZoomScales;
-(void)_updateMinMaxZoomScales:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setVideoGravity:(NSInteger)arg0 removingAllSublayerTransformAnimations:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg0 ;
-(void)zoomToPoint:(struct CGPoint )arg0 ;


@end


#endif