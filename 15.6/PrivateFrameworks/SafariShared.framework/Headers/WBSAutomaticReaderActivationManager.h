// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSAUTOMATICREADERACTIVATIONMANAGER_H
#define WBSAUTOMATICREADERACTIVATIONMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreferencesSQLiteStore.h"
#import "WBSPerSitePreference.h"

@interface WBSAutomaticReaderActivationManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly, nonatomic) WBSPerSitePreference *readerPreference; // ivar: _readerPreference
@property (readonly) Class superclass;


-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)offValueForPreference:(id)arg0 ;
-(id)onValueForPreference:(id)arg0 ;
-(id)preferenceNameForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)_submitOptInOutStateForAnalyticsGivenAutomaticReaderIsNotGloballyEnabled;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getAutomaticReaderEnabledByDefaultUsingBlock:(id)arg0 ;
-(void)getAutomaticReaderEnabledForDomain:(id)arg0 usingBlock:(id)arg1 ;
-(void)getAutomaticReaderStateForDomain:(id)arg0 usingBlock:(id)arg1 ;
-(void)setAutomaticReaderEnabled:(BOOL)arg0 forDomain:(id)arg1 ;
-(void)setAutomaticReaderEnabledByDefault:(BOOL)arg0 removingExistingPreferencesForSites:(BOOL)arg1 ;
-(void)submitOptInOutStateForAnalytics;


@end


#endif