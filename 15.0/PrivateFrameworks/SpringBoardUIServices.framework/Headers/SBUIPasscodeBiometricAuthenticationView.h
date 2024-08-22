// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIPASSCODEBIOMETRICAUTHENTICATIONVIEW_H
#define SBUIPASSCODEBIOMETRICAUTHENTICATIONVIEW_H

@class UIButton, UILabel, UILayoutGuide, NSLayoutConstraint, NSString, PKGlyphView;
@protocol SBUIPasscodeBiometricAuthenticationViewDelegate, SBUIPasscodeBiometricAuthenticationViewLayoutDelegate;


#import "SBUIInteractionForwardingView.h"
#import "SBUIButton.h"
#import "SBUIPasscodePillButton.h"

@interface SBUIPasscodeBiometricAuthenticationView : SBUIInteractionForwardingView

@property (nonatomic) BOOL ancillaryButtonsVisible; // ivar: _ancillaryButtonsVisible
@property (retain, nonatomic) UIButton *backgroundCancelButton; // ivar: _backgroundCancelButton
@property (retain, nonatomic) SBUIButton *cancelButton; // ivar: _cancelButton
@property (weak, nonatomic) NSObject<SBUIPasscodeBiometricAuthenticationViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) SBUIButton *emergencyCallButton; // ivar: _emergencyCallButton
@property (retain, nonatomic) UILabel *faceIDLabel; // ivar: _faceIDLabel
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonHelperGuide; // ivar: _faceIDLabelAndReasonHelperGuide
@property (retain, nonatomic) UILayoutGuide *faceIDLabelAndReasonLayoutGuide; // ivar: _faceIDLabelAndReasonLayoutGuide
@property (retain, nonatomic) NSLayoutConstraint *faceIDLabelFaceIDReasonBaselineConstraint; // ivar: _faceIDLabelFaceIDReasonBaselineConstraint
@property (copy, nonatomic, setter=_setFaceIDReason:) NSString *faceIDReason; // ivar: _faceIDReason
@property (retain, nonatomic) UILabel *faceIDReasonLabel; // ivar: _faceIDReasonLabel
@property (copy, nonatomic, setter=_setFaceIDReason2:) NSString *faceIDReasonLine2; // ivar: _faceIDReasonLine2
@property (retain, nonatomic) SBUIPasscodePillButton *faceIDUsePasscodeButton; // ivar: _faceIDUsePasscodeButton
@property (nonatomic) BOOL faceIDUsePasscodeButtonVisible; // ivar: _faceIDUsePasscodeButtonVisible
@property (retain, nonatomic) UIButton *invisibleUsePasscodeButton; // ivar: _invisibleUsePasscodeButton
@property (weak, nonatomic) NSObject<SBUIPasscodeBiometricAuthenticationViewLayoutDelegate> *layoutDelegate; // ivar: _layoutDelegate
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsEmergencyCallButton;
@property (retain, nonatomic) PKGlyphView *touchIDGlyphView; // ivar: _touchIDGlyphView
@property (copy, nonatomic, setter=_setTouchIDReason:) NSString *touchIDReason; // ivar: _touchIDReason
@property (retain, nonatomic) UILabel *touchIDReasonLabel; // ivar: _touchIDReasonLabel
@property (retain, nonatomic) SBUIButton *touchIDUsePasscodeButton; // ivar: _touchIDUsePasscodeButton
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSString *unlockDestination; // ivar: _unlockDestination


-(CGFloat)_leadingForFaceIDReason;
-(id)initWithFrame:(struct CGRect )arg0 layoutDelegate:(id)arg1 ;
-(void)_layoutAuthReasonLabel:(id)arg0 ;
-(void)_noteContentSizeCategoryDidChange;
-(void)_setFaceIDReasonLine2:(id)arg0 ;
-(void)_updateConstraints;
-(void)_updateReasonTextIfPossible;
-(void)_updateSubviews;
-(void)_usePasscodeButtonHit;
-(void)layoutSubviews;
-(void)setGlyphViewState:(NSInteger)arg0 ;
-(void)setGlyphViewState:(NSInteger)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif