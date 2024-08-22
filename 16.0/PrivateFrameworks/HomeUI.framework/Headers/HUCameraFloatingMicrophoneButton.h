// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCAMERAFLOATINGMICROPHONEBUTTON_H
#define HUCAMERAFLOATINGMICROPHONEBUTTON_H

@class UIButton, UIVisualEffectView, NAUILayoutConstraintSet, UIImageView, UILabel;



@interface HUCameraFloatingMicrophoneButton : UIButton

@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NAUILayoutConstraintSet *constraintSet; // ivar: _constraintSet
@property (readonly, nonatomic) UIImageView *microphoneImageView; // ivar: _microphoneImageView
@property (readonly, nonatomic) UILabel *microphoneLabel; // ivar: _microphoneLabel


+(BOOL)requiresConstraintBasedLayout;
+(id)_createBackgroundEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupConstraintSet;
-(void)_updateAlpha;
-(void)_updateSelectionState;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateConstraints;


@end


#endif