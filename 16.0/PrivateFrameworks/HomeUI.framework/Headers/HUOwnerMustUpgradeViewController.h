// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUOWNERMUSTUPGRADEVIEWCONTROLLER_H
#define HUOWNERMUSTUPGRADEVIEWCONTROLLER_H

@class OBWelcomeController, OBTrayButton, NSString;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HUOwnerMustUpgradeViewController : OBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithUpgradeRequirements:(NSUInteger)arg0 ;
-(void)_continueButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif