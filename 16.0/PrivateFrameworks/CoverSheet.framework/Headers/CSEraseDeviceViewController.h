// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSERASEDEVICEVIEWCONTROLLER_H
#define CSERASEDEVICEVIEWCONTROLLER_H

@class UIViewController, UILabel, UIView, UIButton;
@protocol CSEraseDeviceViewControllerDelegate;



@interface CSEraseDeviceViewController : UIViewController {
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UILabel *_linkLabel;
    UIView *_containerView;
    UIView *_labelsContainerView;
    UIButton *_cancelButton;
    UIButton *_eraseDeviceButton;
    UIButton *_eraseDeviceButtonForIPad;
}


@property (nonatomic) CGFloat buttonsBottomSpacing; // ivar: _buttonsBottomSpacing
@property (weak, nonatomic) NSObject<CSEraseDeviceViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)_canShowWhileLocked;
-(void)_activateConstraints;
-(void)_handleCancelButtonAction;
-(void)_handleEraseButtonAction;
-(void)loadView;
-(void)setBodyLabelTextWithTimeout:(id)arg0 ;
-(void)setDeviceEraseButtonForIPad:(id)arg0 ;


@end


#endif