// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PNPWIZARDVIEWCONTROLLER_H
#define PNPWIZARDVIEWCONTROLLER_H

@class UINavigationController, UIColor, NSString, PKTextInputSettings;
@protocol PNPWelcomeControllerDelegate, PNPWizardViewDelegate;



@interface PNPWizardViewController : UINavigationController <PNPWelcomeControllerDelegate>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showingWhatsNew; // ivar: _showingWhatsNew
@property (readonly) Class superclass;
@property (retain, nonatomic) PKTextInputSettings *textInputSettings; // ivar: _textInputSettings
@property (weak, nonatomic) NSObject<PNPWizardViewDelegate> *wizardDelegate; // ivar: _wizardDelegate


+(struct CGSize )preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(id)welcomeControllerWithType:(NSInteger)arg0 buttonType:(NSInteger)arg1 deviceType:(NSInteger)arg2 ;
-(void)prepareForPresentation;
-(void)viewDidLoad;
-(void)welcomeControllerButtonDidPress:(id)arg0 ;


@end


#endif