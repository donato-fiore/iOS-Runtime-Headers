// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTRECORDINGBUTTON_H
#define AVTRECORDINGBUTTON_H

@class UIButton, UIColor, UIImpactFeedbackGenerator, UIImageView, NSDate, UIActivityIndicatorView;
@protocol AVTRecordingButtonLongPressDelegate;


#import "CAShapeLayerAnimated.h"

@interface AVTRecordingButton : UIButton

@property (retain, nonatomic) UIColor *centerCircleColor; // ivar: _centerCircleColor
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (nonatomic) BOOL forceUsePhoneStyle; // ivar: _forceUsePhoneStyle
@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (nonatomic) BOOL ignoresLongPress; // ivar: _ignoresLongPress
@property (retain, nonatomic) CAShapeLayerAnimated *innerCircle; // ivar: _innerCircle
@property (nonatomic) BOOL isTrackingLongPress; // ivar: _isTrackingLongPress
@property (retain, nonatomic) NSDate *lastFeedbackSent; // ivar: _lastFeedbackSent
@property (weak, nonatomic) NSObject<AVTRecordingButtonLongPressDelegate> *longPressDelegate; // ivar: _longPressDelegate
@property (retain, nonatomic) CAShapeLayerAnimated *outerCircle; // ivar: _outerCircle
@property (retain, nonatomic) UIActivityIndicatorView *spinner; // ivar: _spinner
@property (nonatomic, setter=setUIState:) NSUInteger uiState; // ivar: _uiState


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configure;
-(void)endLongPress:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)sendHapticFeedbackIfNeeded;
-(void)setEnabled:(BOOL)arg0 ;
-(void)startLongPress;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif