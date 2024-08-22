// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8STOCKSUI24TEXTFIELDALERTCONTROLLER_H
#define _TTC8STOCKSUI24TEXTFIELDALERTCONTROLLER_H

@class UIViewController;



@interface _TtC8StocksUI24TextFieldAlertController : UIViewController {
    ? alertTitle;
    ? message;
    ? submitTitle;
    ? cancelTitle;
    ? configureTextField;
    ? onSubmit;
    ? onCancel;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_messageLabel;
    ? $__lazy_storage_$_textFieldLabel;
    ? $__lazy_storage_$_textField;
    ? $__lazy_storage_$_cancelButton;
    ? $__lazy_storage_$_submitButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif