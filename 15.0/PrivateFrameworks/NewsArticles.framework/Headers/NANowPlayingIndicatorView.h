// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NANOWPLAYINGINDICATORVIEW_H
#define NANOWPLAYINGINDICATORVIEW_H

@class UIControl, NSMutableArray, UIColor;



@interface NANowPlayingIndicatorView : UIControl {
    NSMutableArray *_levelViews;
    BOOL bufferingShouldDisplayAsPaused;
}


@property (nonatomic) NSInteger bounceStyle; // ivar: _bounceStyle
@property (nonatomic) CGFloat interLevelSpacing; // ivar: _interLevelSpacing
@property (nonatomic) CGFloat levelCornerRadius; // ivar: _levelCornerRadius
@property (retain, nonatomic) UIColor *levelGuttersColor; // ivar: _levelGuttersColor
@property (nonatomic) CGFloat levelWidth; // ivar: _levelWidth
@property (nonatomic) CGFloat maximumLevelHeight; // ivar: _maximumLevelHeight
@property (nonatomic) CGFloat minimumLevelHeight; // ivar: _minimumLevelHeight
@property (nonatomic) NSInteger numberOfLevels; // ivar: _numberOfLevels
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) BOOL showsLevelGutters; // ivar: _showsLevelGutters


-(BOOL)canBecomeFocused;
-(CGFloat)_fixedSeedValueForBarIndex:(NSUInteger)arg0 ;
-(CGFloat)_randomSeedValueForBar;
-(CGFloat)_seedValueForBarIndex:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_bufferTimerFired;
-(void)_reloadLevelViews;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_updateLevelAnimations;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif