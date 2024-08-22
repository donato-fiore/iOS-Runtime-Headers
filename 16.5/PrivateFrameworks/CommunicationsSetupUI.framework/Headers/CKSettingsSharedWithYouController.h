// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKSETTINGSSHAREDWITHYOUCONTROLLER_H
#define CKSETTINGSSHAREDWITHYOUCONTROLLER_H

@class PSListController;



@interface CKSettingsSharedWithYouController : PSListController



-(id)appIsEnabled:(id)arg0 ;
-(id)getAppBundleIDsFromDefaults;
-(id)getAppSpecifiers;
-(id)sharedWithYouEnabled:(id)arg0 ;
-(id)specifiers;
-(void)postNotificationForAppEnablementChanges;
-(void)setAppIsEnabled:(id)arg0 specifier:(id)arg1 shouldPostNotification:(id)arg2 ;
-(void)setSharedWithYouEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setupDefaultAppsIfRequired;
-(void)updateAppPreferencesWith:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif