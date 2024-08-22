// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNATURALLIGHTINGSETUPVIEWCONTROLLER_H
#define HUNATURALLIGHTINGSETUPVIEWCONTROLLER_H

@class NSString, HMHome, OBTrayButton;
@protocol HUNaturalLightingSetupModuleDelegate, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"
#import "HUSimpleItemModuleTableViewController.h"
#import "HUNaturalLightingSetupModule.h"

@interface HUNaturalLightingSetupViewController : HUItemTableOBWelcomeController <HUNaturalLightingSetupModuleDelegate, HUConfigurationViewController, HUPreloadableViewController>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) HUSimpleItemModuleTableViewController *itemTableViewController;
@property (retain, nonatomic) HUNaturalLightingSetupModule *module; // ivar: _module
@property (readonly) Class superclass;
@property (retain, nonatomic) OBTrayButton *useWithLightsButton; // ivar: _useWithLightsButton


+(id)moduleControllerInHome:(id)arg0 ;
-(id)_markAllAccessoriesAsOnboarded;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_activateNaturalLighting:(id)arg0 ;
-(void)_doNotActivateNaturalLighting:(id)arg0 ;
-(void)_updateButtonWithNumberOfLightsSelected:(NSUInteger)arg0 ;
-(void)naturalLanguageSetupModule:(id)arg0 didUpdateSelectedItems:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif