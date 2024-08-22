// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTDETAILCONTROLLER_H
#define ASSISTANTDETAILCONTROLLER_H

@class PSListController, NSMutableSet, PSSpecifier;



@interface AssistantDetailController : PSListController {
    NSMutableSet *_disabledSpotlightBundles;
    NSMutableSet *_disabledLockScreenBundles;
    NSMutableSet *_disabledSpotlightApps;
    NSMutableSet *_disabledSpotlightShortcuts;
    NSMutableSet *_disabledSuggestApps;
    PSSpecifier *_whileSearchingGroup;
    PSSpecifier *_whileSearchingShowAppSpecifier;
    PSSpecifier *_whileSearchingShowContentSpecifier;
}




-(id)_appName;
-(id)_bundleId;
-(id)_enableSiriAppSpecifiersWithAppId:(id)arg0 accessGranted:(BOOL)arg1 ;
-(id)_loadDisabledShortcutsSet;
-(id)_loadDisabledSuggestAppsSet;
-(id)_siriSuggestionsClients;
-(id)_suggestionsFooterString;
-(id)_suggestionsShowToggleLableString;
-(id)_watchBundleToMirrorWithBundleId:(id)arg0 ;
-(id)askSiriUseWithAskSiriEnabled:(id)arg0 ;
-(id)inAppLearnFromAppEnabled:(id)arg0 ;
-(id)specifiers;
-(id)suggestionsShowInAppEnabled:(id)arg0 ;
-(id)suggestionsShowOnHomeScreenEnabled:(id)arg0 ;
-(id)suggestionsSuggestAppEnabled:(id)arg0 ;
-(id)suggestionsSuggestionNotificationEnabled:(id)arg0 ;
-(id)whileSearchingShowAppEnabled:(id)arg0 ;
-(id)whileSearchingShowContentEnabled:(id)arg0 ;
-(void)_addInAppSpecifiersToSpecifiers:(id)arg0 ;
-(void)_addSuggestionsSpecifiersToSpecifiers:(id)arg0 ;
-(void)_addWhileSearchingSpecifiersToSpecifiers:(id)arg0 ;
-(void)_asyncAddAskSiriSettingsIfNecessary;
-(void)_fetchIntentsSpecifiersWithCompletion:(id)arg0 ;
-(void)_saveSuggestionsShowOnHomeScreenEnabled:(BOOL)arg0 ;
-(void)_saveSuggestionsSuggestAppEnabled:(BOOL)arg0 ;
-(void)_saveSuggestionsSuggestionNotificationsEnabled:(BOOL)arg0 ;
-(void)_saveWhileSearchingShowAppEnabled:(BOOL)arg0 ;
-(void)_saveWhileSearchingShowContentEnabled:(BOOL)arg0 ;
-(void)setAskSiriUseWithAskSiriEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setInAppLearnFromAppEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setNanoInAppShowSiriSuggestionsEnabled:(BOOL)arg0 bundleId:(id)arg1 ;
-(void)setSuggestionsShowInAppEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSuggestionsShowOnHomeScreenEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSuggestionsSuggestAppEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setSuggestionsSuggestionNotificationsEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setWhileSearchingShowAppEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setWhileSearchingShowContentEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif