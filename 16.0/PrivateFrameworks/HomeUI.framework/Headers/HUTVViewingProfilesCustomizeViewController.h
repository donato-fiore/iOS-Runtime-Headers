// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTVVIEWINGPROFILESCUSTOMIZEVIEWCONTROLLER_H
#define HUTVVIEWINGPROFILESCUSTOMIZEVIEWCONTROLLER_H

@class OBLinkTrayButton, NSString, HMHome, OBTrayButton;
@protocol HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUItemTableOBWelcomeController.h"

@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;
@property (retain, nonatomic) OBTrayButton *usePRButton; // ivar: _usePRButton


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(void)_dontSetupTVViewingProfiles:(id)arg0 ;
-(void)_setupTVViewingProfiles:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif