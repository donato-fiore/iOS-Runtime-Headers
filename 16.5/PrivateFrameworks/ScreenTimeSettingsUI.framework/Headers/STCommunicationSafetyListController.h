// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCOMMUNICATIONSAFETYLISTCONTROLLER_H
#define STCOMMUNICATIONSAFETYLISTCONTROLLER_H

@class PSSpecifier;


#import "STPINListViewController.h"
#import "STCommunicationSafetyOnboardingController.h"

@interface STCommunicationSafetyListController : STPINListViewController

@property (retain, nonatomic) PSSpecifier *checkSpecifier; // ivar: _checkSpecifier
@property (retain, nonatomic) PSSpecifier *enableAnalyticsSpecifier; // ivar: _enableAnalyticsSpecifier
@property (retain, nonatomic) STCommunicationSafetyOnboardingController *onboardingController; // ivar: _onboardingController


-(BOOL)_hasAcknowledgedIntroScreens;
-(BOOL)_isAnyCommunicationSafetySettingEnabled;
-(BOOL)_isCommunicationSafetyAnalyticsEnabled;
-(id)_checkForUnsafePhotos:(id)arg0 ;
-(id)_createCheckForUnsafePhotosSpecifier;
-(id)_createEnableAnalyticsGroupSpecifier;
-(id)_createEnableAnalyticsSpecifier;
-(id)_createUnsafePhotosGroupSpecifier;
-(id)_createViewChildSafetyResourcesGroupSpecifier;
-(id)_createViewChildSafetyResourcesSpecifier;
-(id)_getEnableAnalytics:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_acknowledgeAnalyticsTip;
-(void)_acknowledgeIntroScreens;
-(void)_disableAnalyticsIfNeeded;
-(void)_dismissChildSafetyResourcesView:(id)arg0 ;
-(void)_openAboutAnalytics;
-(void)_openChildSafetyWebsite;
-(void)_persistSettings;
-(void)_setCheckForUnsafePhotos:(BOOL)arg0 ;
-(void)_setCheckForUnsafePhotos:(id)arg0 specifier:(id)arg1 ;
-(void)_setEnableAnalytics:(BOOL)arg0 ;
-(void)_setEnableAnalytics:(id)arg0 specifier:(id)arg1 ;
-(void)_showChildSafetyResources;
-(void)_showCommunicationSafetyCompatibilityAlertIfNeeded;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif