// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACMICSTATUSVIEW_H
#define CACMICSTATUSVIEW_H

@class UIView, NSTimer, UIImageView;



@interface CACMicStatusView : UIView

@property (nonatomic) CGFloat micPowerLevel; // ivar: _micPowerLevel
@property (nonatomic) NSInteger micStatus; // ivar: _micStatus
@property (retain, nonatomic) NSTimer *statusIndicatorAnimationTimer; // ivar: _statusIndicatorAnimationTimer
@property (retain, nonatomic) UIImageView *statusIndicatorImageView; // ivar: _statusIndicatorImageView
@property (nonatomic) BOOL swapPalette; // ivar: _swapPalette


-(id)imageBundle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)drawBase;
-(void)stopRecordingAnimation;
-(void)transitionToIdle;
-(void)transitionToListening;
-(void)transitionToRecording;


@end


#endif