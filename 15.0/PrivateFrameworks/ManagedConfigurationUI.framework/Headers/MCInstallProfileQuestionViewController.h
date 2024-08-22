// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCINSTALLPROFILEQUESTIONVIEWCONTROLLER_H
#define MCINSTALLPROFILEQUESTIONVIEWCONTROLLER_H

@class NSString, UITextField;
@protocol MCProfileQuestionsControllerDelegate;


#import "MCUITableViewController.h"
#import "MCUIFieldCollection.h"

@interface MCInstallProfileQuestionViewController : MCUITableViewController {
    MCUIFieldCollection *_fieldCollection;
    NSString *_previousResponseValue;
    BOOL _waitingForPasscodePreflight;
}


@property (weak, nonatomic) NSObject<MCProfileQuestionsControllerDelegate> *questionsDelegate; // ivar: _questionsDelegate
@property (retain, nonatomic) UITextField *textField; // ivar: _textField


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFieldCollection:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithUserInput:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_addActionForError:(NSUInteger)arg0 title:(id)arg1 toAlert:(id)arg2 ;
-(void)_cancelInput;
-(void)_configureQuestionField:(id)arg0 ;
-(void)_continueOrFinish;
-(void)_continueWithCurrentField;
-(void)_didFinishPasscodePreflightWithError:(id)arg0 ;
-(void)_didFinishPreflightWithError:(id)arg0 ;
-(void)_finishInput;
-(void)_handleError:(NSUInteger)arg0 ;
-(void)_hideProgressIndicator;
-(void)_preflightCurrentPayload;
-(void)_processResponseAndContinue;
-(void)_retryCurrentPasswordFieldWithError:(id)arg0 ;
-(void)_retryWithCurrentField;
-(void)_setRightButtonEnabled:(BOOL)arg0 ;
-(void)_setup;
-(void)_showAlertForError:(id)arg0 ;
-(void)_showNavButtonsAnimated:(BOOL)arg0 ;
-(void)_showProgressIndicator;
-(void)_tellDelegateDidFinishWithUserInputResponses:(id)arg0 ;
-(void)_updateNavigationBar;
-(void)profileConnectionDidFinishPreflightWithError:(id)arg0 ;
-(void)stopWaitingForMoreInput;
-(void)updateWithUserInput:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)waitForMoreInput;


@end


#endif