// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NDOAPPLECAREVIEWCONTROLLER_H
#define NDOAPPLECAREVIEWCONTROLLER_H

@class UIViewController, UIStackView, UIButton, UILabel, NDODeviceInfo, NSLayoutConstraint, UINavigationBar, UINavigationItem;
@protocol NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol, NDOAppleCareFlowDelegate;



@interface NDOAppleCareViewController : UIViewController <NDOAppleCareWebViewPresenterProtocol, NDOAppleCareAMSUIViewPresenterProtocol>



@property (weak, nonatomic) UIStackView *buttonStackView; // ivar: _buttonStackView
@property (weak, nonatomic) UIStackView *comboStackView; // ivar: _comboStackView
@property (weak, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (weak, nonatomic) UILabel *detailsTextView; // ivar: _detailsTextView
@property (retain) NDODeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (weak, nonatomic) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (weak, nonatomic) UINavigationBar *navBar; // ivar: _navBar
@property (weak, nonatomic) UINavigationItem *navBarItem; // ivar: _navBarItem
@property (weak, nonatomic) UIButton *notNowButton; // ivar: _notNowButton
@property NSUInteger presentationType; // ivar: _presentationType
@property (weak) NSObject<NDOAppleCareFlowDelegate> *presentor; // ivar: _presentor
@property (weak, nonatomic) UILabel *promoTextLabel; // ivar: _promoTextLabel
@property (weak, nonatomic) NSLayoutConstraint *trailingConstraint; // ivar: _trailingConstraint


-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithDeviceInfo:(id)arg0 presentationType:(NSUInteger)arg1 ;
-(id)initWithWarranty:(id)arg0 ;
-(id)initWithWarranty:(id)arg0 presentationType:(NSUInteger)arg1 ;
-(id)initWithWarranty:(id)arg0 presentationType:(NSUInteger)arg1 serialNumber:(id)arg2 ;
-(void)amsUIViewFinishedWithCompletion:(NSUInteger)arg0 ;
-(void)amsUIViewFinishedWithCompletion:(NSUInteger)arg0 params:(id)arg1 ;
-(void)cancelPressed:(id)arg0 ;
-(void)completeWithStatus:(NSUInteger)arg0 ;
-(void)completeWithStatus:(NSUInteger)arg0 params:(id)arg1 ;
-(void)getAppleCarePressed:(id)arg0 ;
-(void)loadView;
-(void)notNowPressed:(id)arg0 ;
-(void)okButtonPressed;
-(void)updatePromotionLabelWithWarranty:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)webviewFinishedWithCompletion:(NSUInteger)arg0 ;


@end


#endif