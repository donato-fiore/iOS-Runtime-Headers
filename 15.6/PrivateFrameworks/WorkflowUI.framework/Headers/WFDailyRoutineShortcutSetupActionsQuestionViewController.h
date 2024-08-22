// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDAILYROUTINESHORTCUTSETUPACTIONSQUESTIONVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPACTIONSQUESTIONVIEWCONTROLLER_H

@class OBWelcomeController, NSString, WFDailyRoutineShortcutSetupActionsQuestion;
@protocol CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController, WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupActionsQuestionViewController : OBWelcomeController <CNContactPickerDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupActionsQuestion *question; // ivar: _question
@property (readonly) Class superclass;


-(id)initWithQuestion:(id)arg0 ;
-(void)contactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)didSelectAddButton;
-(void)didSelectSkipButton;


@end


#endif