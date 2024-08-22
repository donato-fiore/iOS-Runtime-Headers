// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACONBOARDINGCOMMANDSDETAILVIEWCONTROLLER_H
#define CACONBOARDINGCOMMANDSDETAILVIEWCONTROLLER_H

@class OBTextWelcomeController, NSArray, OBTrayButton;


#import "CACOnboardingCommandsDetailViewController.h"

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController

@property (retain, nonatomic) NSArray *commandGroups; // ivar: _commandGroups
@property (nonatomic) BOOL hideTrayButtons; // ivar: _hideTrayButtons
@property (readonly, nonatomic) OBTrayButton *mainButton; // ivar: _mainButton
@property (retain, nonatomic) CACOnboardingCommandsDetailViewController *nextCommandGroupVC; // ivar: _nextCommandGroupVC
@property (readonly, nonatomic) OBTrayButton *secondaryButton; // ivar: _secondaryButton
@property (nonatomic) BOOL skipAnalytics; // ivar: _skipAnalytics


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldInlineButtonTray;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 commandGroups:(id)arg2 ;
-(void)dismiss;
-(void)viewDidLoad;


@end


#endif