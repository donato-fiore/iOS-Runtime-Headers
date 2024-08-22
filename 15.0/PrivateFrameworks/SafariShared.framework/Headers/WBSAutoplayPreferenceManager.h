// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSAUTOPLAYPREFERENCEMANAGER_H
#define WBSAUTOPLAYPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreferencesSQLiteStore.h"
#import "WBSDomainWhitelistManager.h"
#import "WBSPerSitePreference.h"

@interface WBSAutoplayPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    WBSDomainWhitelistManager *_autoplayWhitelistManager;
}


@property (readonly, nonatomic) WBSPerSitePreference *autoplayPreference; // ivar: _autoplayPreference
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;


-(NSInteger)preferencesStoreKeyForPreference:(id)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithPerSitePreferencesStore:(id)arg0 whitelistManager:(id)arg1 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getAutoplayPreferenceValueForDomain:(id)arg0 withTimeout:(CGFloat)arg1 fallbackValue:(NSInteger)arg2 completionHandler:(id)arg3 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeout:(id)arg2 usingBlock:(id)arg3 ;
-(void)prepareForTermination;


@end


#endif