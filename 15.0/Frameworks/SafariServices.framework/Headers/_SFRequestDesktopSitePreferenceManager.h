// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFREQUESTDESKTOPSITEPREFERENCEMANAGER_H
#define _SFREQUESTDESKTOPSITEPREFERENCEMANAGER_H

@class WBSPerSitePreferenceManager, WBSPerSitePreferencesSQLiteStore, NSMutableSet, NSString, WBSPerSitePreference;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager;


#import "_SFRequestDesktopSiteQuirksManager.h"

@interface _SFRequestDesktopSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate, WBSPerSitePreferenceBinaryToggleItemManager>

 {
    WBSPerSitePreferencesSQLiteStore *_perSitePreferencesStore;
    _SFRequestDesktopSiteQuirksManager *_quirksManager;
    NSMutableSet *_observers;
}


@property (nonatomic) BOOL clientPrefersMobileUserAgentByDefault; // ivar: _clientPrefersMobileUserAgentByDefault
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly, nonatomic) WBSPerSitePreference *requestDesktopSitePreference; // ivar: _requestDesktopSitePreference
@property (readonly) Class superclass;


-(NSInteger)_defaultPreferenceValue;
-(NSInteger)preferencesStoreKeyForPreference:(id)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithPerSitePreferencesStore:(id)arg0 quirksManager:(id)arg1 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)offValueForPreference:(id)arg0 ;
-(id)onValueForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)_notifyObserversOfPerSitePreferenceDefaultValueUpdate;
-(void)_notifyObserversOfPerSitePreferenceDomainValuesUpdate;
-(void)_requestDesktopSitePerSitePreferenceDidChange:(id)arg0 ;
-(void)addRequestDesktopSitePerSitePreferenceObserver:(id)arg0 ;
-(void)dealloc;
-(void)didUpdatePreference:(id)arg0 toValue:(id)arg1 forDomain:(id)arg2 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg0 usingBlock:(id)arg1 ;
-(void)getAllRequestDesktopSitePerSitePreferenceValues:(id)arg0 ;
-(void)getDefaultPreferenceValueForPreference:(id)arg0 completionHandler:(id)arg1 ;
-(void)getDefaultPreferenceValueIfNotCustomizedForPreference:(id)arg0 domain:(id)arg1 completionHandler:(id)arg2 ;
-(void)getRequestDesktopSitePreferenceForDomain:(id)arg0 withTimeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeout:(id)arg2 usingBlock:(id)arg3 ;
-(void)removeRequestDesktopSitePerSitePreferenceObserver:(id)arg0 ;


@end


#endif