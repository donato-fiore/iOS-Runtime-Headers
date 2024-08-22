// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI47SHARINGSUMMARYONBOARDINGSETTINGUPVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI47SHARINGSUMMARYONBOARDINGSETTINGUPVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI47SharingSummaryOnboardingSettingUpViewController : OBWelcomeController {
    ? selectionFlowContext;
    ? healthExperienceStore;
    ? healthStore;
    ? hasRunningGeneration;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)onCancelTapped;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif