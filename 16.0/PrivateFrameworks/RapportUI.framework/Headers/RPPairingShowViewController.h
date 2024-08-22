// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPPAIRINGSHOWVIEWCONTROLLER_H
#define RPPAIRINGSHOWVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, UILabel;



@interface RPPairingShowViewController : UIViewController

@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (retain, nonatomic) UILabel *subTitleLabel; // ivar: _subTitleLabel
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UILabel *verificationCodeLabel; // ivar: _verificationCodeLabel


+(id)instantiateViewController;
-(void)_updatePasswordUI;
-(void)handleCancelButton:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif