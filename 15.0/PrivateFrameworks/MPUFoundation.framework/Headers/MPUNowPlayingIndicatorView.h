// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPUNOWPLAYINGINDICATORVIEW_H
#define MPUNOWPLAYINGINDICATORVIEW_H

@class UIControl, NSMutableArray, UIColor;



@interface MPUNowPlayingIndicatorView : UIControl {
    NSMutableArray *_levelViews;
}


@property (nonatomic) CGFloat interLevelSpacing; // ivar: _interLevelSpacing
@property (nonatomic) CGFloat levelCornerRadius; // ivar: _levelCornerRadius
@property (retain, nonatomic) UIColor *levelGuttersColor; // ivar: _levelGuttersColor
@property (nonatomic) CGFloat levelWidth; // ivar: _levelWidth
@property (nonatomic) CGFloat maximumLevelHeight; // ivar: _maximumLevelHeight
@property (nonatomic) CGFloat minimumFrameInterval; // ivar: _minimumFrameInterval
@property (nonatomic) CGFloat minimumLevelHeight; // ivar: _minimumLevelHeight
@property (nonatomic) NSInteger numberOfLevels; // ivar: _numberOfLevels
@property (nonatomic) NSInteger playbackState; // ivar: _playbackState
@property (nonatomic) BOOL showsLevelGutters; // ivar: _showsLevelGutters


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_reloadLevelViews;
-(void)_removeAllAnimations:(BOOL)arg0 ;
-(void)_updateLevelAnimations;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;


@end


#endif