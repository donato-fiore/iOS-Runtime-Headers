// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILECHROMELESSPLAYBACKCONTROLSVIEW_H
#define AVMOBILECHROMELESSPLAYBACKCONTROLSVIEW_H

@protocol AVMobileChromelessPlaybackControlsViewDelegate;


#import "AVView.h"
#import "AVButton.h"
#import "AVMobileChromelessControlsStyleSheet.h"

@interface AVMobileChromelessPlaybackControlsView : AVView {
    AVButton *_leftSecondaryButton;
    AVButton *_rightSecondaryButton;
    AVButton *_playPauseButton;
}


@property (weak) NSObject<AVMobileChromelessPlaybackControlsViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger leftSecondaryControlIcon; // ivar: _leftSecondaryControlIcon
@property (nonatomic) BOOL playPauseButtonShowsPlayIcon; // ivar: _playPauseButtonShowsPlayIcon
@property (nonatomic) NSUInteger rightSecondaryControlIcon; // ivar: _rightSecondaryControlIcon
@property (retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // ivar: _styleSheet


-(id)initWithStyleSheet:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_addPlaybackControlViews:(id)arg0 ;
-(void)_updateLeftSecondaryControlIcon;
-(void)_updateRightSecondaryControlIcon;
-(void)layoutSubviews;
-(void)leftSecondaryControlWasPressed;
-(void)playPauseButtonWasPressed;
-(void)rightSecondaryControlWasPressed;


@end


#endif