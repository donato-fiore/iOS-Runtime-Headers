// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LOADINGINDICATORVIEWCONTROLLER_H
#define LOADINGINDICATORVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, UIActivityIndicatorView;



@interface LoadingIndicatorViewController : UIViewController

@property (weak, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) NSString *messageText; // ivar: _messageText
@property (weak) UIActivityIndicatorView *spinnerView; // ivar: _spinnerView
@property (weak, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText; // ivar: _titleText


-(id)init;
-(id)initWithTitle:(id)arg0 message:(id)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif