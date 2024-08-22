// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTPADDLEVIEW_H
#define AVTPADDLEVIEW_H

@class UIView, NSArray, AVTUILogger, AVPlayerLooper, AVPlayer, AVPlayerViewController;
@protocol AVTPaddleViewDelegate;


#import "AVTCircularButton.h"
#import "AVTTouchDownGestureRecognizer.h"

@interface AVTPaddleView : UIView

@property (retain, nonatomic) NSArray *activeConstraints; // ivar: _activeConstraints
@property (retain, nonatomic) AVTCircularButton *addButton; // ivar: _addButton
@property (retain, nonatomic) UIView *addButtonViewContainer; // ivar: _addButtonViewContainer
@property (nonatomic) BOOL automaticallyStartsPlaying; // ivar: _automaticallyStartsPlaying
@property (weak, nonatomic) NSObject<AVTPaddleViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *dismissGestureRecognizer; // ivar: _dismissGestureRecognizer
@property (readonly, nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (retain, nonatomic) AVTUILogger *logger; // ivar: _logger
@property (retain, nonatomic) AVPlayerLooper *looper; // ivar: _looper
@property (nonatomic) CGFloat padding; // ivar: _padding
@property (retain, nonatomic) AVPlayer *player; // ivar: _player
@property (copy, nonatomic) id *preCommitBlock; // ivar: _preCommitBlock
@property (retain, nonatomic) AVTTouchDownGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) AVPlayerViewController *videoController; // ivar: _videoController
@property (retain, nonatomic) UIView *videoViewContainer; // ivar: _videoViewContainer


+(CGFloat)defaultPadding;
+(id)videoItem;
-(BOOL)isPointInsideTransparentRegion:(struct CGPoint )arg0 ;
-(BOOL)isRTL;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithLayoutDirection:(NSInteger)arg0 ;
-(id)initWithLayoutDirection:(NSInteger)arg0 symbolConfiguration:(id)arg1 ;
-(struct CGRect )frameForAddButtonInCoordinateSpace:(id)arg0 ;
-(struct CGRect )frameForVideoInCoordinateSpace:(id)arg0 ;
-(void)_configureWithSymbolConfiguration:(id)arg0 ;
-(void)attachVideoController:(id)arg0 looper:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)handleDismissGesture;
-(void)handleTapAddButton;
-(void)handleTapGesture;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pauseVideo;
-(void)playVideo;
-(void)showAnimated:(BOOL)arg0 ;
-(void)startPlayingIfNecessary;
-(void)stopPlayingIfNecessary;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLayoutFromPlusButtonView:(id)arg0 videoView:(id)arg1 ;


@end


#endif