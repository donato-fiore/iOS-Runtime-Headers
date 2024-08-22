// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMINTERACTIVELEGACYPROFILESVIEWCONTROLLER_H
#define RMINTERACTIVELEGACYPROFILESVIEWCONTROLLER_H

@class PSListController, RMUIProfileViewModel, RMUIConfigurationInterface;



@interface RMInteractiveLegacyProfilesViewController : PSListController

@property (retain, nonatomic) RMUIProfileViewModel *profileModel; // ivar: _profileModel
@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface; // ivar: _rmuiConfigInterface


-(id)_isActivatedProfile:(id)arg0 ;
-(id)_specifiersForProfile;
-(id)specifiers;
-(void)_activateProfile:(id)arg0 specifier:(id)arg1 ;
-(void)_presentAlertForErrorModel:(id)arg0 ;
-(void)_processUserInfoDictionary;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif