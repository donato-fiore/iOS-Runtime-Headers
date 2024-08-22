// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPERSONALREQUESTSSETUPVIEWCONTROLLER_H
#define HUPERSONALREQUESTSSETUPVIEWCONTROLLER_H

@class OBWelcomeController, OBLinkTrayButton, NSString, HMHome, NSArray, OBTrayButton;
@protocol HFItemManagerDelegate, HUItemModuleControllerHosting, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HULocationDevice.h"
#import "HUPersonalRequestsDevicesModuleController.h"
#import "HUPersonalRequestsEditorItemManager.h"

@interface HUPersonalRequestsSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemModuleControllerHosting, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) HULocationDevice *locationDevice; // ivar: _locationDevice
@property (retain, nonatomic) HUPersonalRequestsDevicesModuleController *prDevicesModuleController; // ivar: _prDevicesModuleController
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager; // ivar: _prEditorItemManager
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *supportedVoiceRecognitionLanguages; // ivar: _supportedVoiceRecognitionLanguages
@property (retain, nonatomic) OBTrayButton *usePRButton; // ivar: _usePRButton


+(id)_bulletImageWithSystemName:(id)arg0 color:(id)arg1 ;
-(BOOL)_allPersonalRequestsDevicesSupportVoiceRecognition;
-(Class)onboardingFlowClass;
-(NSUInteger)_numberOfDevicesSupportingVR;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;
-(void)_customizePersonalRequests:(id)arg0 ;
-(void)_dontUsePersonalRequests:(id)arg0 ;
-(void)_setupPersonalRequestsItemInfrastructure;
-(void)_turnOnAllPersonalRequests:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif