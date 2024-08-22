// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUHOMETHEATERSETUPVIEWCONTROLLER_H
#define HUHOMETHEATERSETUPVIEWCONTROLLER_H

@class OBWelcomeController, HMAccessory, UIImageView, NSLayoutConstraint, NSString, HMHome, OBLinkTrayButton, OBTrayButton;
@protocol HFItemManagerDelegate, HUItemModuleControllerHosting, HUHomeTheaterAudioItemModuleOnboardingDelegate, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUSimpleItemModuleTableViewController.h"
#import "HUHomeTheaterAudioItemModule.h"

@interface HUHomeTheaterSetupViewController : OBWelcomeController <HFItemManagerDelegate, HUItemModuleControllerHosting, HUHomeTheaterAudioItemModuleOnboardingDelegate, HUConfigurationViewControllerFlow, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) UIImageView *contentImageView; // ivar: _contentImageView
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // ivar: _contentViewHeightConstraint
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (retain, nonatomic) OBLinkTrayButton *notNowButton; // ivar: _notNowButton
@property (readonly) Class superclass;
@property (retain, nonatomic) HUSimpleItemModuleTableViewController *tableViewController; // ivar: _tableViewController
@property (weak, nonatomic) HUHomeTheaterAudioItemModule *tableViewControllerModule; // ivar: _tableViewControllerModule
@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint; // ivar: _tableViewHeightConstraint
@property (retain, nonatomic) OBTrayButton *useHomeTheaterButton; // ivar: _useHomeTheaterButton


-(Class)onboardingFlowClass;
-(id)hu_preloadContent;
-(id)initWithAppleTVAccessory:(id)arg0 inHome:(id)arg1 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;
-(void)_activateHomeTheater:(id)arg0 ;
-(void)_doNotActivateHomeTheater:(id)arg0 ;
-(void)_updateHeightConstraints;
-(void)homeTheaterItemModuleDidChangeSelectedDestination:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViewConstraints;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif