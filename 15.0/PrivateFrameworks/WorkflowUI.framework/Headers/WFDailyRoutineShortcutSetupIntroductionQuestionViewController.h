// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDAILYROUTINESHORTCUTSETUPINTRODUCTIONQUESTIONVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPINTRODUCTIONQUESTIONVIEWCONTROLLER_H

@class OBWelcomeController, NSString, WFDailyRoutineShortcutSetupIntroductionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewController, WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupIntroductionQuestionViewController : OBWelcomeController <WFDailyRoutineShortcutSetupQuestionChildViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupIntroductionQuestion *question; // ivar: _question
@property (readonly) Class superclass;


-(id)initWithQuestion:(id)arg0 ;
-(void)didSelectContinueButton;


@end


#endif