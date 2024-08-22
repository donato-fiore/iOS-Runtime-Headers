// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULOCATIONSERVICESSETUPVIEWCONTROLLER_H
#define HULOCATIONSERVICESSETUPVIEWCONTROLLER_H

@class OBWelcomeController, NSString, OBLinkTrayButton, OBBoldTrayButton, HMHome;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;



@interface HULocationServicesSetupViewController : OBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) OBLinkTrayButton *disableLocationServicesButton; // ivar: _disableLocationServicesButton
@property (retain, nonatomic) OBBoldTrayButton *enableLocationServicesButton; // ivar: _enableLocationServicesButton
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_enableOrDisableLocationServices:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif