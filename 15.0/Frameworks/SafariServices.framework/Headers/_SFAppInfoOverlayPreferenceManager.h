// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAPPINFOOVERLAYPREFERENCEMANAGER_H
#define _SFAPPINFOOVERLAYPREFERENCEMANAGER_H

@class WBSPerSitePreferenceManager, WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager;



@interface _SFAppInfoOverlayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}


@property (readonly, nonatomic) WBSPerSitePreference *appInfoOverlayPreference; // ivar: _appInfoOverlayPreference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;


-(NSInteger)_defaultPreferenceValue;
-(NSInteger)preferencesStoreKeyForPreference:(id)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)offValueForPreference:(id)arg0 ;
-(id)onValueForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)getAppInfoOverlayPreferenceForDomain:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif