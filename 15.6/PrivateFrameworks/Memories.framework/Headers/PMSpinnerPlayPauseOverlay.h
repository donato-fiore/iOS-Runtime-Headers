// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMSPINNERPLAYPAUSEOVERLAY_H
#define PMSPINNERPLAYPAUSEOVERLAY_H

@class UIView;



@interface PMSpinnerPlayPauseOverlay : UIView

@property (nonatomic) NSUInteger displayState; // ivar: _displayState
@property (retain, nonatomic) UIView *playPauseButton; // ivar: _playPauseButton
@property (retain, nonatomic) UIView *spinnerView; // ivar: _spinnerView


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setShowAsPause:(BOOL)arg0 ;
-(void)setup;


@end


#endif