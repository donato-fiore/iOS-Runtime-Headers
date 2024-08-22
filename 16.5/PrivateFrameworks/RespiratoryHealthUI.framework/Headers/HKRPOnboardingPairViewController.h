// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRPONBOARDINGPAIRVIEWCONTROLLER_H
#define HKRPONBOARDINGPAIRVIEWCONTROLLER_H

@class BPSWelcomeOptinViewController, HKRPOxygenSaturationOnboardingManager, HKRPOxygenSaturationSettings;
@protocol BPSMiniFlowStepController, BPSSetupMiniFlowControllerDelegate;


#import "RespiratoryHealthHeroView.h"

@interface HKRPOnboardingPairViewController : BPSWelcomeOptinViewController <BPSMiniFlowStepController>

 {
    RespiratoryHealthHeroView *_heroView;
}


@property (weak, nonatomic) NSObject<BPSSetupMiniFlowControllerDelegate> *miniFlowDelegate; // ivar: miniFlowDelegate
@property (readonly, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (readonly, nonatomic) HKRPOxygenSaturationSettings *settings; // ivar: _settings


-(id)_localizedStringForKey:(id)arg0 ;
-(id)alternateButtonTitle;
-(id)captionText;
-(id)detailString;
-(id)initWithSettings:(id)arg0 onboardingManager:(id)arg1 ;
-(id)suggestedButtonTitle;
-(id)titleString;
-(void)_makeHeroView;
-(void)_onboardWithCompletion:(id)arg0 ;
-(void)_presentOnboardingError:(id)arg0 completion:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif