// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTVVIEWINGPROFILESSETUPVIEWCONTROLLER_H
#define HUTVVIEWINGPROFILESSETUPVIEWCONTROLLER_H

@class OBLinkTrayButton, NSString, HMHome, OBTrayButton;
@protocol HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController, HUConfigurationViewControllerDelegate;


#import "HUImageOBWelcomeController.h"
#import "HUTVViewingProfilesEditorItemManager.h"

@interface HUTVViewingProfilesSetupViewController : HUImageOBWelcomeController <HFItemManagerDelegate, HUItemTableModuleControllerHosting, HUConfigurationViewController, HUPreloadableViewController>



@property (retain, nonatomic) OBLinkTrayButton *customizeButton; // ivar: _customizeButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL isFinalStep;
@property (readonly) Class superclass;
@property (retain, nonatomic) HUTVViewingProfilesEditorItemManager *tvVPEditorItemManager; // ivar: _tvVPEditorItemManager
@property (retain, nonatomic) OBTrayButton *useTVVPButton; // ivar: _useTVVPButton


-(id)hu_preloadContent;
-(id)initWithHome:(id)arg0 ;
-(id)moduleController:(id)arg0 dismissViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 presentViewControllerForRequest:(id)arg1 ;
-(id)moduleController:(id)arg0 textFieldForVisibleItem:(id)arg1 ;
-(void)_customizeOrOffButton:(id)arg0 ;
-(void)_setupTVViewingProfilesItemInfrastructure;
-(void)_turnOnAllTVViewingProfiles:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif