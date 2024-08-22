// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRALERTVIEW_H
#define TVRALERTVIEW_H

@class UIView, TVRCPINEntryAttributes, UIVisualEffectView, NSString, UILabel;
@protocol TVRAlertViewDelegate;


#import "_TVRMAlertButton.h"
#import "TVRPasscodeField.h"

@interface TVRAlertView : UIView

@property (retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes;
@property (retain, nonatomic) UIView *blendModeView; // ivar: _blendModeView
@property (retain, nonatomic) _TVRMAlertButton *cancelButton; // ivar: _cancelButton
@property (weak, nonatomic) NSObject<TVRAlertViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UIView *hairlineView; // ivar: _hairlineView
@property (retain, nonatomic) TVRPasscodeField *passcodeField; // ivar: _passcodeField
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelButton:(id)arg0 ;
-(void)_pinTextDidChange:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif