// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDAILYROUTINESHORTCUTSETUPVIEWCONTROLLER_H
#define WFDAILYROUTINESHORTCUTSETUPVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSString, WFDailyRoutineShortcutSetupFlow, CLCircularRegion, UINavigationController, NSMutableArray;
@protocol WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate, WFDailyRoutineShortcutSetupViewControllerDelegate;



@interface WFDailyRoutineShortcutSetupViewController : UIViewController <WFDailyRoutineShortcutSetupQuestionViewControllerDelegate, WFDailyRoutineShortcutSetupTriggerViewControllerDelegate, WFLocationPickerViewControllerDelegate>



@property (retain, nonatomic) NSMutableDictionary *actionsPerQuestionIndex; // ivar: _actionsPerQuestionIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFDailyRoutineShortcutSetupViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger metricsSource; // ivar: _metricsSource
@property (retain, nonatomic) CLCircularRegion *selectedRegion; // ivar: _selectedRegion
@property (retain, nonatomic) UINavigationController *setupNavigationController; // ivar: _setupNavigationController
@property (retain, nonatomic) NSMutableArray *setupStepEvents; // ivar: _setupStepEvents
@property (readonly) Class superclass;


-(NSInteger)currentQuestionIndex;
-(id)currentStepEvent;
-(id)initWithFlow:(id)arg0 metricsSource:(NSUInteger)arg1 ;
-(id)selectedLocationForDailyRoutineShortcutSetupQuestionViewController:(id)arg0 ;
-(void)configureBackButtonOnViewController:(id)arg0 ;
-(void)dailyRoutineShortcutSetupQuestionViewController:(id)arg0 didAddActions:(id)arg1 ;
-(void)dailyRoutineShortcutSetupQuestionViewControllerDidSkip:(id)arg0 ;
-(void)dailyRoutineShortcutSetupTriggerViewControllerDidAddTrigger:(id)arg0 ;
-(void)dailyRoutineShortcutSetupTriggerViewControllerDidSkip:(id)arg0 ;
-(void)didSelectCancel;
-(void)finishWithTrigger:(id)arg0 ;
-(void)locationPicker:(id)arg0 didFinishWithValue:(id)arg1 ;
-(void)locationPickerDidCancel:(id)arg0 ;
-(void)pushStepForQuestion:(id)arg0 ;
-(void)pushToNextStep;
-(void)pushTriggerSetupStep;
-(void)submitMetrics:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif