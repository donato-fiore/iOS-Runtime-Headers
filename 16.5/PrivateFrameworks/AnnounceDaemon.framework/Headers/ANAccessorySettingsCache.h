// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANACCESSORYSETTINGSCACHE_H
#define ANACCESSORYSETTINGSCACHE_H

@class HMAccessorySettingsDataSource, NSMutableDictionary, NSString;
@protocol HMAccessorySettingsDataSourceDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ANAccessorySettingsCache : NSObject <HMAccessorySettingsDataSourceDelegate>



@property (readonly, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource; // ivar: _accessorySettingsDataSource
@property (readonly, nonatomic) NSMutableDictionary *cachedAccessorySettings; // ivar: _cachedAccessorySettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *lastAccessorySettingsFetch; // ivar: _lastAccessorySettingsFetch
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue; // ivar: _settingsQueue
@property (readonly) Class superclass;


-(id)_fetchSettingsForAccessory:(id)arg0 useCache:(BOOL)arg1 ;
-(id)initWithAccessorySettingsDataSource:(id)arg0 ;
-(id)settingsForAccessory:(id)arg0 ;
-(void)_removeSettingsForAccessoryWithIdentifier:(id)arg0 ;
-(void)_updateSettings:(id)arg0 forAccessoryWithIdentifier:(id)arg1 ;
-(void)accessorySettingsDataSource:(id)arg0 didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)arg1 settings:(id)arg2 ;


@end


#endif