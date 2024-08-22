// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONFIDENTIALITYWARNINGVIEWCONTROLLER_H
#define PXCONFIDENTIALITYWARNINGVIEWCONTROLLER_H

@class UIViewController, UIButton, UIVisualEffectView, UILabel;



@interface PXConfidentialityWarningViewController : UIViewController

@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (copy, nonatomic) id *cancellationHandler; // ivar: _cancellationHandler
@property (readonly, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (readonly, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (readonly, nonatomic) UILabel *messageLabel; // ivar: _messageLabel


-(void)_handleButton:(id)arg0 ;
-(void)presentAsOverlayInWindowScene:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif