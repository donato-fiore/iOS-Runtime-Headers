// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADASMANAGER_H
#define ADASMANAGER_H


#import <Foundation/Foundation.h>

#import "ADASPreferenceStore.h"

@interface ADASManager : NSObject {
    ADASPreferenceStore *_prefStore;
}




-(BOOL)_featureFlagEnabled;
-(BOOL)_isAlertSupported;
-(BOOL)_isDeviceMandatoryForHAENotification:(BOOL)arg0 ;
-(BOOL)nanoSettingsAvailable;
-(BOOL)shouldSufaceHAENotificationMigrationAlert;
-(id)_error:(NSInteger)arg0 ;
-(id)_getCurrentVolumeLimit;
-(id)_getDefaultsFor:(id)arg0 ;
-(id)_getDefaultsKey:(id)arg0 ;
-(id)_getDeviceSpecificDefaultsFor:(id)arg0 ;
-(id)_getSpecialKeys:(id)arg0 nano:(BOOL)arg1 ;
-(id)_migrateVolumeLimitThreshold:(BOOL)arg0 ;
-(id)_setChainedKeys:(id)arg0 val:(id)arg1 nano:(BOOL)arg2 modifiedKeys:(id)arg3 ;
-(id)_setDefaultValueIfNeeded:(id)arg0 nano:(BOOL)arg1 sync:(BOOL)arg2 ;
-(id)_setDefaultsFor:(id)arg0 value:(id)arg1 ;
-(id)_setDeviceSpecificDefaultsFor:(id)arg0 value:(id)arg1 ;
-(id)getNanoPreferenceFor:(id)arg0 ;
-(id)getNanoPreferencesFor:(id)arg0 ;
-(id)getPreferenceFor:(id)arg0 ;
-(id)getPreferencesFor:(id)arg0 ;
-(id)init;
-(id)setNanoPreferenceFor:(id)arg0 value:(id)arg1 ;
-(id)setNanoPreferenceFor:(id)arg0 value:(id)arg1 notify:(BOOL)arg2 ;
-(id)setPreferenceFor:(id)arg0 value:(id)arg1 ;
-(id)setPreferenceFor:(id)arg0 value:(id)arg1 notify:(BOOL)arg2 ;
-(void)_clearCurrentVolumeLimit;
-(void)_donateSignalToTipsKit:(BOOL)arg0 ;
-(void)_notify:(id)arg0 ;
-(void)_sync;
-(void)_syncDeviceSpecificDomain;
-(void)_syncNanoDeviceSpecificForRead:(id)arg0 ;
-(void)_syncNanoForRead:(id)arg0 ;
-(void)_syncNanoForWrite:(id)arg0 ;
-(void)didSurfaceMigrationAlert;
-(void)migrateKeyEnableHAEHKMeasurement:(BOOL)arg0 ;
-(void)removeNanoPreferenceFor:(id)arg0 ;
-(void)removeNanoPreferenceFor:(id)arg0 notify:(BOOL)arg1 ;
-(void)removePreferenceFor:(id)arg0 ;
-(void)removePreferenceFor:(id)arg0 notify:(BOOL)arg1 ;


@end


#endif