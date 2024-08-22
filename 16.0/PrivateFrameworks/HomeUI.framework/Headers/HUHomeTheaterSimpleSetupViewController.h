// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUHOMETHEATERSIMPLESETUPVIEWCONTROLLER_H
#define HUHOMETHEATERSIMPLESETUPVIEWCONTROLLER_H

@class HMAccessory, OBTrayButton, NSString, HMHome, OBLinkTrayButton;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUConfigurationViewControllerDelegate, HMMediaDestination;


#import "HUImageOBWelcomeController.h"

@interface HUHomeTheaterSimpleSetupViewController : HUImageOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) OBTrayButton *confirmButton; // ivar: _confirmButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<HMMediaDestination> *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *skipButton; // ivar: _skipButton
@property (readonly) Class superclass;


-(Class)onboardingFlowClass;
-(id)initWithAppleTVAccessory:(id)arg0 destination:(id)arg1 inHome:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentImage:(id)arg3 ;
-(void)_confirm:(id)arg0 ;
-(void)_skip:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif