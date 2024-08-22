// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSAPPLISTCONTROLLER_H
#define PSAPPLISTCONTROLLER_H

@class NSString;
@protocol PSSystemPolicyForAppDelegate;


#import "PSListController.h"
#import "PSSystemPolicyForApp.h"

@interface PSAppListController : PSListController <PSSystemPolicyForAppDelegate>



@property (retain, nonatomic) PSSystemPolicyForApp *appPolicy; // ivar: _appPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) PSSystemPolicyForApp *systemPolicy; // ivar: _systemPolicy


+(BOOL)canUseOnBoardingKitFOrPrivacyDisplayForBundleName:(id)arg0 ;
+(BOOL)canUseOnBoardingKitForPrivacyDisplayForBundleID:(id)arg0 ;
+(id)_typeErrorStringForKeyWithName:(id)arg0 expectedType:(Class)arg1 actualType:(Class)arg2 ;
+(id)allowedPrivacyBundlesForID;
+(id)allowedPrivacyBundlesForName;
+(id)childPaneSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)groupSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)localizedTitlesFromUnlocalizedTitles:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 ;
+(id)multiValueSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)onBoardingKitBundleIDDict;
+(id)onBoardingKitBundleNameDict;
+(id)radioGroupSpecifiersFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)sliderSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)specifiersFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)textFieldSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)titleValueSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
+(id)toggleSwitchSpecifierFromDictionary:(id)arg0 stringsTable:(id)arg1 parentSpecifier:(id)arg2 target:(id)arg3 ;
-(id)_readToggleSwitchSpecifierValue:(id)arg0 ;
-(id)_uiValueFromValue:(id)arg0 specifier:(id)arg1 ;
-(id)_valueFromUIValue:(id)arg0 specifier:(id)arg1 ;
-(id)bundle;
-(id)specifiers;
-(void)_setToggleSwitchSpecifierValue:(id)arg0 specifier:(id)arg1 ;
-(void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)arg0 ;
-(void)setPreferenceValue:(id)arg0 specifier:(id)arg1 ;
-(void)showPrivacyControllerForBundleID:(id)arg0 ;
-(void)showPrivacyControllerForBundleName:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif