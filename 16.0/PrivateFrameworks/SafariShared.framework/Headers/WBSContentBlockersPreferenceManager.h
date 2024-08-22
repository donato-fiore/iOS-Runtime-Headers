// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCONTENTBLOCKERSPREFERENCEMANAGER_H
#define WBSCONTENTBLOCKERSPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreferencesSQLiteStore.h"
#import "WBSPerSitePreference.h"

@interface WBSContentBlockersPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
}


@property (readonly, nonatomic) WBSPerSitePreference *contentBlockersPreference; // ivar: _contentBlockersPreference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
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
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getContentBlockersEnabledStateForDomain:(id)arg0 withTimeout:(CGFloat)arg1 fallbackEnabledState:(BOOL)arg2 completionHandler:(id)arg3 ;


@end


#endif