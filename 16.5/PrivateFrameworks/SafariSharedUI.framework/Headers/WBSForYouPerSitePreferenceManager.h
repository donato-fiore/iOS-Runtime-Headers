// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORYOUPERSITEPREFERENCEMANAGER_H
#define WBSFORYOUPERSITEPREFERENCEMANAGER_H

@class WBSPerSitePreferenceManager, WBSPerSitePreferencesSQLiteStore, WBSPerSitePreference, NSString;
@protocol WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate;



@interface WBSForYouPerSitePreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerStorageDelegate, WBSPerSitePreferenceManagerDefaultsDelegate>

 {
    WBSPerSitePreferencesSQLiteStore *_preferencesStore;
    WBSPerSitePreference *_preference;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore;
@property (readonly) Class superclass;


-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)init;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)preferenceNameForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
-(void)allowedForYouRecommendationsFromRecommendations:(id)arg0 completionHandler:(id)arg1 ;
-(void)setPreferenceValue:(NSInteger)arg0 forURL:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif