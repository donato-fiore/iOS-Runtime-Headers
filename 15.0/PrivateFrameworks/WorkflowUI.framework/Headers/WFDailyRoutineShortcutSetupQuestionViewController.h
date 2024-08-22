// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDAILYROUTINESHORTCUTSETUPQUESTIONVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPQUESTIONVIEWCONTROLLER_H

@class UIViewController, NSString, WFDailyRoutineShortcutSetupQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate, WFDailyRoutineShortcutSetupQuestionViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupQuestionViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupQuestionViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupQuestion *question; // ivar: _question
@property (readonly) Class superclass;


-(id)initWithQuestion:(id)arg0 ;
-(id)selectedLocationForDailyRoutineShortcutSetupQuestionChildViewController:(id)arg0 ;
-(void)dailyRoutineShortcutSetupQuestionChildViewController:(id)arg0 didSelectActions:(id)arg1 ;
-(void)dailyRoutineShortcutSetupQuestionChildViewControllerDidSkip:(id)arg0 ;
-(void)didSelectSkip;
-(void)viewDidLoad;


@end


#endif