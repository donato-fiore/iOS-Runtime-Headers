// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CFXPLAYBUTTONVIEW_H
#define CFXPLAYBUTTONVIEW_H

@class UIView, UIImage, UIButton, CAShapeLayer;
@protocol CFXPlayButtonViewDelegate;



@interface CFXPlayButtonView : UIView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) NSObject<CFXPlayButtonViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *pauseImage; // ivar: _pauseImage
@property (weak, nonatomic) UIButton *playButton; // ivar: _playButton
@property (retain, nonatomic) CAShapeLayer *playControlMaskLayer; // ivar: _playControlMaskLayer
@property (retain, nonatomic) UIImage *playImage; // ivar: _playImage


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)notifyPlaybackDidStart;
-(void)notifyPlaybackDidStop;
-(void)notifyWasTapped;
-(void)playButtonTapped:(id)arg0 ;
-(void)sharedInit;


@end


#endif