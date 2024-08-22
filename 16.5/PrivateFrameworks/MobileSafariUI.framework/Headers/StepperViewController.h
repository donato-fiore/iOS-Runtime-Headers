// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEPPERVIEWCONTROLLER_H
#define STEPPERVIEWCONTROLLER_H

@class UIViewController, SFStepperView, NSString;
@protocol _SFSettingsAlertStepperConfiguration, UIViewControllerTransitioningDelegate, _SFSettingsAlertStepperController;



@interface StepperViewController : UIViewController <_SFSettingsAlertStepperConfiguration, UIViewControllerTransitioningDelegate>

 {
    SFStepperView *_stepperView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_SFSettingsAlertStepperController> *stepperController; // ivar: _stepperController
@property (readonly) Class superclass;


-(id)_buttonForStepperButton:(NSInteger)arg0 ;
-(id)initWithStepperController:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)loadView;
-(void)setEnabled:(BOOL)arg0 forButton:(NSInteger)arg1 ;
-(void)setImage:(id)arg0 forButton:(NSInteger)arg1 ;
-(void)setText:(id)arg0 forButton:(NSInteger)arg1 ;
-(void)viewDidLoad;


@end


#endif