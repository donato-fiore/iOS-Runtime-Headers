// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTHIRDPARTYAPPCONTROLLER_H
#define PSTHIRDPARTYAPPCONTROLLER_H

@class NSString;
@protocol PSSystemPolicyForAppDelegate;


#import "PSSpecifierController.h"
#import "PSSystemPolicyForApp.h"

@interface PSThirdPartyAppController : PSSpecifierController <PSSystemPolicyForAppDelegate>



@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy; // ivar: _appPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // ivar: _systemPolicy


-(id)_readToggleSwitchSpecifierValue:(id)arg0 ;
-(id)_uiValueFromValue:(id)arg0 specifier:(id)arg1 ;
-(id)_valueFromUIValue:(id)arg0 specifier:(id)arg1 ;
-(id)bundle;
-(id)loadSpecifiers;
-(void)_setToggleSwitchSpecifierValue:(id)arg0 specifier:(id)arg1 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)showPrivacyControllerForSpecifier:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif