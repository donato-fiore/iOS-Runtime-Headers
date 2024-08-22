// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKBASICLOGINOPTIONSVIEWCONTROLLER_H
#define AKBASICLOGINOPTIONSVIEWCONTROLLER_H

@class UIViewController, UIButton, UIStackView, OBPrivacyLinkController, UIView;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKBasicLoginOptionsViewController : UIViewController

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (retain, nonatomic) UIButton *createButton; // ivar: _createButton
@property (copy, nonatomic) id *createIDAction; // ivar: _createIDAction
@property (copy, nonatomic) id *forgotAction; // ivar: _forgotAction
@property (retain, nonatomic) UIButton *forgotButton; // ivar: _forgotButton
@property (nonatomic) BOOL isCreateAppleIDAllowed; // ivar: _isCreateAppleIDAllowed
@property (retain, nonatomic) UIStackView *optionsStack; // ivar: _optionsStack
@property (retain, nonatomic) OBPrivacyLinkController *privacyController; // ivar: _privacyController
@property (retain, nonatomic) UIView *privacyView; // ivar: _privacyView


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