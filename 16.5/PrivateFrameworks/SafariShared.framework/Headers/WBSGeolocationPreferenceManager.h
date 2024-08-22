// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSGEOLOCATIONPREFERENCEMANAGER_H
#define WBSGEOLOCATIONPREFERENCEMANAGER_H

@class NSString;
@protocol WBSPerSitePreferenceManagerDefaultsDelegate;


#import "WBSPerSitePreferenceManager.h"
#import "WBSPerSitePreference.h"
#import "WBSPerSitePreferencesSQLiteStore.h"

@interface WBSGeolocationPreferenceManager : WBSPerSitePreferenceManager <WBSPerSitePreferenceManagerDefaultsDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WBSPerSitePreference *geolocationPreference; // ivar: _geolocationPreference
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WBSPerSitePreferencesSQLiteStore *perSitePreferencesStore; // ivar: _perSitePreferencesStore
@property (readonly) Class superclass;


-(BOOL)_isDateLessThanOneDayAgo:(id)arg0 ;
-(id)defaultPreferenceValueForPreferenceIfNotCustomized:(id)arg0 ;
-(id)initWithPerSitePreferencesStore:(id)arg0 ;
-(id)localizedStringForValue:(id)arg0 inPreference:(id)arg1 ;
-(id)perSitePreferenceValueForGeolocationSetting:(NSInteger)arg0 ;
-(id)preferenceNameForPreference:(id)arg0 ;
-(id)preferences;
-(id)valuesForPreference:(id)arg0 ;
// -(void)_removePermissionsPassingTest:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_setValue:(id)arg0 forDomain:(id)arg1 shouldIncludeTimestamp:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)getAllDomainsConfiguredForPreference:(id)arg0 usingBlock:(id)arg1 ;
-(void)getGeolocationSettingForDomain:(id)arg0 completionHandler:(id)arg1 ;
-(void)getValueOfPreference:(id)arg0 forDomain:(id)arg1 withTimeout:(id)arg2 usingBlock:(id)arg3 ;
-(void)removeAllPermissions;
-(void)removeAllPermissionsWithCompletionHandler:(id)arg0 ;
-(void)removeAllTemporaryPermissions;
-(void)removePermissionsAddedAfterDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)removePreferenceValuesForDomains:(id)arg0 fromPreference:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeTemporaryPermissionsAddedAfterDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)setDefaultGeolocationSetting:(NSInteger)arg0 ;
-(void)setDefaultGeolocationSetting:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setGeolocationSetting:(NSInteger)arg0 forDomain:(id)arg1 completionHandler:(id)arg2 ;
-(void)setValue:(id)arg0 ofPreference:(id)arg1 forDomain:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif