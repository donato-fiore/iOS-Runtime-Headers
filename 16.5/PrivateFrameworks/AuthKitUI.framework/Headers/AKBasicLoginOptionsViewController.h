// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKBASICLOGINOPTIONSVIEWCONTROLLER_H
#define AKBASICLOGINOPTIONSVIEWCONTROLLER_H

@class UIViewController, UIButton, OBPrivacyLinkController, UIStackView;


#import "AKAppleIDAuthenticationInAppContext.h"

@interface AKBasicLoginOptionsViewController : UIViewController

@property (weak, nonatomic) AKAppleIDAuthenticationInAppContext *context; // ivar: _context
@property (retain, nonatomic) UIButton *createButton; // ivar: _createButton
@property (copy, nonatomic) id *createIDAction; // ivar: _createIDAction
@property (copy, nonatomic) id *forgotAction; // ivar: _forgotAction
@property (retain, nonatomic) UIButton *forgotButton; // ivar: _forgotButton
@property (nonatomic) BOOL isCreateAppleIDAllowed; // ivar: _isCreateAppleIDAllowed
@property (retain, nonatomic) OBPrivacyLinkController *privacyController; // ivar: _privacyController
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView


-(BOOL)_shouldHideCreateButton;
-(id)_createLinkButtonWithSelector:(SEL)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(void)_configureButtonForFontAdjustment:(id)arg0 ;
-(void)_refreshCreateAppleIDButton;
-(void)_setupPrivacyLinkControllerWithContext:(id)arg0 ;
-(void)_setupStackView;
-(void)createPressed:(id)arg0 ;
-(void)forgotPressed:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif