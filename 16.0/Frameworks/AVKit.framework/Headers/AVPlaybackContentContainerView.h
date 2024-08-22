// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKCONTENTCONTAINERVIEW_H
#define AVPLAYBACKCONTENTCONTAINERVIEW_H

@class UIView, NSString;
@protocol AVPlaybackContentContainer;


#import "AVPlaybackContentContainerView.h"
#import "__AVPlayerLayerView.h"
#import "AVStatusBarBackgroundGradientView.h"
#import "AVVisualAnalysisView.h"

@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer>



@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; // ivar: _canShowStatusBarBackgroundGradientWhenStatusBarVisible
@property (readonly, nonatomic) UIView *contentOverlayView; // ivar: _contentOverlayView
@property (retain, nonatomic) UIView *contentOverlayViewSubview; // ivar: _contentOverlayViewSubview
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isObservingStatusBarHidden) BOOL observingStatusBarHidden; // ivar: _observingStatusBarHidden
@property (retain, nonatomic) __AVPlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // ivar: _playingOnSecondScreen
@property (readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView; // ivar: _statusBarBackgroundGradientView
@property (readonly) Class superclass;
@property (nonatomic) CGRect videoContentFrame; // ivar: _videoContentFrame
@property (retain, nonatomic) AVVisualAnalysisView *visualAnalysisView; // ivar: _visualAnalysisView


-(id)initWithFrame:(struct CGRect )arg0 activeContentView:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 playerLayerView:(id)arg1 contentOverlayView:(id)arg2 ;
-(void)_updateStatusBarBackgroundGradientViewAlpha;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)removeAllSublayerTransformAnimations;
-(void)setVideoGravity:(NSInteger)arg0 removingAllSublayerTransformAnimations:(BOOL)arg1 ;


@end


#endif