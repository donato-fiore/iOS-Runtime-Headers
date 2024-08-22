// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PINVIEW_H
#define PINVIEW_H

@class UIView, UILabel, NSString, UIButton;
@protocol PINEntryView, PSPINEntryViewDelegate;


#import "FailureBarView.h"

@interface PINView : UIView <PINEntryView>

 {
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    BOOL _error;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSPINEntryViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *optionsButton; // ivar: _optionsButton
@property (copy, nonatomic) NSString *optionsButtonTitle; // ivar: _optionsButtonTitle
@property (copy, nonatomic) id *passcodeOptionsHandler; // ivar: _passcodeOptionsHandler
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(CGFloat)getCurrentTitleFontSize;
-(id)stringValue;
-(void)_layoutBottomSubview:(id)arg0 withMinY:(CGFloat)arg1 withSize:(struct CGSize )arg2 ;
-(void)appendString:(id)arg0 ;
-(void)deleteLastCharacter;
-(void)hideError;
-(void)hideFailedAttempts;
-(void)hidePasscodeField:(BOOL)arg0 ;
-(void)layoutBottomSubview:(id)arg0 withLabel:(id)arg1 withMinY:(CGFloat)arg2 ;
-(void)layoutSubviews;
-(void)layoutTopLabel:(id)arg0 withMaxY:(CGFloat)arg1 ;
-(void)notifyDelegatePINChanged;
-(void)notifyDelegatePINEntered;
-(void)setBlocked:(BOOL)arg0 ;
-(void)setPINPolicyString:(id)arg0 visible:(BOOL)arg1 ;
-(void)setShowsOptionsButton:(BOOL)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setTextFieldKeyboardAppearance:(NSInteger)arg0 ;
-(void)setTextFieldKeyboardType:(NSInteger)arg0 ;
-(void)setTitle:(id)arg0 font:(id)arg1 ;
-(void)showError:(id)arg0 animate:(BOOL)arg1 ;
-(void)showFailedAttempts:(NSInteger)arg0 ;


@end


#endif