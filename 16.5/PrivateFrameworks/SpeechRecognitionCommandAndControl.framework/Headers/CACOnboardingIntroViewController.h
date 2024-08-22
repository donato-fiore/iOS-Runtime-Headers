// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACONBOARDINGINTROVIEWCONTROLLER_H
#define CACONBOARDINGINTROVIEWCONTROLLER_H

@class OBWelcomeController, OBTrayButton, CACOnboardingCommandsTableViewController;



@interface CACOnboardingIntroViewController : OBWelcomeController

@property (retain, nonatomic) OBTrayButton *linkButton; // ivar: _linkButton
@property (retain, nonatomic) OBTrayButton *mainButton; // ivar: _mainButton
@property (retain, nonatomic) CACOnboardingCommandsTableViewController *onboardingTVC; // ivar: _onboardingTVC
@property (nonatomic) NSUInteger style; // ivar: _style


+(id)defaultControllerWithStyle:(NSUInteger)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldInlineButtonTray;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 style:(NSUInteger)arg3 ;
-(void)configureDownloadCaption;
-(void)configureLanguageButton;
-(void)dealloc;
-(void)dismissWelcomeController;
-(void)enableVoiceControlAndMoveToCommandsOverview;
-(void)languageDidChange;
-(void)presentLanguageSelection;
-(void)viewDidLoad;


@end


#endif