// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUUPGRADEMULTIUSERDEVICESVIEWCONTROLLER_H
#define HUUPGRADEMULTIUSERDEVICESVIEWCONTROLLER_H

@class OBTrayButton, NSString, HMHome;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"

@interface HUUpgradeMultiUserDevicesViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep; // ivar: _isFinalStep
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithUpgradeRequirements:(NSUInteger)arg0 home:(id)arg1 ;
-(void)_continueButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif