// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKBASICLOGINOPTIONSVIEWCONTROLLER_H
#define AKBASICLOGINOPTIONSVIEWCONTROLLER_H

@class UIViewController, UIButton, UIStackView, OBPrivacyLinkController, UIView;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKBasicLoginOptionsViewController : UIViewController

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (retain) UIButton *createButton; // ivar: _createButton
@property (copy, nonatomic) id *createIDAction; // ivar: _createIDAction
@property (copy, nonatomic) id *forgotAction; // ivar: _forgotAction
@property (retain) UIButton *forgotButton; // ivar: _forgotButton
@property BOOL isCreateAppleIDAllowed; // ivar: _isCreateAppleIDAllowed
@property (retain) UIStackView *optionsStack; // ivar: _optionsStack
@property (retain) OBPrivacyLinkController *privacyController; // ivar: _privacyController
@property (retain) UIView *privacyView; // ivar: _privacyView


-(BOOL)_shouldHideCreateButton;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_addPrivacyView:(id)arg0 ;
-(void)_configureButtonForFontAdjustment:(id)arg0 ;
-(void)_configureOptionsStack;
-(void)_refreshCreateAppleIDButton;
-(void)createPressed:(id)arg0 ;
-(void)forgotPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif