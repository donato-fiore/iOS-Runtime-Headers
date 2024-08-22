// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKNAVBARUNIFIEDCALLBUTTON_H
#define CKNAVBARUNIFIEDCALLBUTTON_H

@class UIButton, UIAction, NSArray;
@protocol CKNavBarUnifiedCallButtonDelegate;



@interface CKNavBarUnifiedCallButton : UIButton

@property (nonatomic) NSInteger buttonStyle; // ivar: _buttonStyle
@property (weak, nonatomic) NSObject<CKNavBarUnifiedCallButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIAction *faceTimeAudioAction; // ivar: _faceTimeAudioAction
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable; // ivar: _faceTimeAudioAvailable
@property (retain, nonatomic) UIAction *faceTimeJoinWithAudioAction; // ivar: _faceTimeJoinWithAudioAction
@property (retain, nonatomic) UIAction *faceTimeJoinWithVideoAction; // ivar: _faceTimeJoinWithVideoAction
@property (retain, nonatomic) UIAction *faceTimeVideoAction; // ivar: _faceTimeVideoAction
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable; // ivar: _faceTimeVideoAvailable
@property (nonatomic) BOOL joinPillShouldDisableLabel; // ivar: _joinPillShouldDisableLabel
@property (retain, nonatomic) UIAction *openJoinedCallAction; // ivar: _openJoinedCallAction
@property (retain, nonatomic) NSArray *overrideAudioCallActions; // ivar: _overrideAudioCallActions
@property (retain, nonatomic) UIAction *telephonyCallAction; // ivar: _telephonyCallAction
@property (nonatomic, getter=isTelephonyAvailable) BOOL telephonyCallAvailable; // ivar: _telephonyCallAvailable


-(BOOL)_isStyledForJoinableCall;
-(BOOL)_isStyledForJoinedCall;
-(BOOL)_shouldEnableAdjustFontSizeForCurrentStyle;
-(CGFloat)_bottomMarginForCurrentState;
-(CGFloat)_cornerRadiusForCurrentStyle;
-(CGFloat)_currentLabelPreferredWidth;
-(CGFloat)_imageToTextSpacingForCurrentState;
-(CGFloat)_leadingMarginForCurrentState;
-(CGFloat)_minimumFontScaleFactorForCurrentStyle;
-(CGFloat)_topMarginForCurrentState;
-(CGFloat)_trailingMarginForCurrentState;
-(id)_actionsForCurrentStyle;
-(id)_axLabelForCurrentStyle;
-(id)_backgroundColorForCurrentStyle;
-(id)_joinCallActions;
-(id)_startCallActions;
-(id)_targetImageForCurrentFlags;
-(id)_tintColorForCurrentStyle;
-(id)_titleColorForCurrentStyle;
-(id)_titleForCurrentStyle;
-(id)_titleLabelFontForCurrentStyle;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureActionsForCurrentState;
-(void)_configureFrameForCurrentState;
-(void)_configureInsetsForCurrentState;
-(void)_localeDidChange:(id)arg0 ;
-(void)_updateForCurrentState;
-(void)layoutSubviews;
-(void)updateWithStyle:(NSInteger)arg0 availabilityForVideo:(BOOL)arg1 audio:(BOOL)arg2 telephony:(BOOL)arg3 ;


@end


#endif