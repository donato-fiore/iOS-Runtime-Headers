// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSLOCKDOWNMODEPREFERENCEMANAGER_H
#define WBSLOCKDOWNMODEPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceBinaryToggleItemManager;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreferencesSQLiteStore.h"
#import "WBSPerSitePreference.h"

@interface WBSLockdownModePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceBinaryToggleItemManager>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferenceStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreference *lockdownPreference; // ivar: _lockdownPreference
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;


-(BOOL)preferenceDoesNotHaveForOtherWebsitesDefault:(id)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)initWithPerSitePreferenceStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)offValueForPreference:(id)arg0 ;
-(id)onValueForPreference:(id)arg0 ;
-(id)preferenceNameForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getLockdownModeEnabledForDomain:(id)arg0 withTimeout:(CGFloat)arg1 fallbackEnabledState:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)setLockdownModeEnabled:(BOOL)arg0 forDomain:(id)arg1 ;


@end


#endif