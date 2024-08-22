// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTERSETUPPINVIEW_H
#define UIPRINTERSETUPPINVIEW_H

@class UIControl, NSString, UILabel, UIImageView, UIPasscodeField, UITextField;
@protocol UITextFieldDelegate;



@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *enterLabel; // ivar: _enterLabel
@property (nonatomic) NSInteger failedAttemptCount; // ivar: _failedAttemptCount
@property (retain, nonatomic) UIImageView *failedBackground; // ivar: _failedBackground
@property (retain, nonatomic) UILabel *failedLabel; // ivar: _failedLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPasscodeField *passcodeField; // ivar: _passcodeField
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textEntryField; // ivar: _textEntryField
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)PIN;
-(id)initWithPrinterName:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)showSuccess:(BOOL)arg0 ;
-(void)startPINInput;
-(void)stopPINInput;
-(void)textDidChange:(id)arg0 ;


@end


#endif