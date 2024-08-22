// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSSYNCSETTINGSPROVIDER_H
#define DNDSSYNCSETTINGSPROVIDER_H

@class NPSDomainAccessor;
@protocol DNDSSyncSettingsProviderDelegate;

#import <Foundation/Foundation.h>

#import "DNDSSyncSettings.h"

@interface DNDSSyncSettingsProvider : NSObject {
    os_unfair_lock_s _lock;
    NPSDomainAccessor *_accessor;
    BOOL _initialized;
}


@property (weak, nonatomic) NSObject<DNDSSyncSettingsProviderDelegate> *delegate; // ivar: _delegate
@property (copy) DNDSSyncSettings *syncSettings; // ivar: _syncSettings


-(BOOL)_isCloudSyncPreferenceEnabled;
-(BOOL)_lock_isCloudSyncPreferenceEnabled;
-(BOOL)_lock_isPairSyncPreferenceEnabled;
-(id)_lock_accessor;
-(id)init;
-(void)_beginMonitoringForChanges;
-(void)_endMonitoringForChanges;
-(void)_lock_setCompanionCloudSyncPreferenceEnabled:(BOOL)arg0 ;
-(void)_lock_updateCompanionCloudSyncPreference;
-(void)_lock_updatePairSyncPreferences;
-(void)_lock_updateSyncSettingsIfNewSettingsDiffer:(id)arg0 ;
-(void)_updateCloudSyncPreferences;
-(void)_updatePairSyncPreferences;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pairedDeviceDidChange;
-(void)setPairSyncEnabled:(BOOL)arg0 ;


@end


#endif