// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITDEVICESETTINGSMANAGER_H
#define AXAUDITDEVICESETTINGSMANAGER_H

@class NSArray;
@protocol AXAuditDeviceSettingsManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXAuditDeviceSettingsManager : NSObject

@property (retain, nonatomic) NSArray *_cachedSettings; // ivar: __cachedSettings
@property (retain, nonatomic) NSArray *defaultSettings; // ivar: _defaultSettings
@property (weak, nonatomic) NSObject<AXAuditDeviceSettingsManagerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL deviceSettingsCanBeRestored; // ivar: _deviceSettingsCanBeRestored
@property NSInteger hostAPIVersion; // ivar: _hostAPIVersion
@property (retain, nonatomic) NSArray *settings; // ivar: _settings


-(id)init;
-(id)settingForIdentifier:(id)arg0 ;
-(void)cacheDeviceSettingsValues;
-(void)dealloc;
-(void)resetToDefaultAccessibilitySettings;
-(void)restoreDeviceSettingsValues;
-(void)startObservingChanges;
-(void)stopObservingChanges;
-(void)updateCurrentValueForAllSettingsAndPostNotificationIfChanged:(BOOL)arg0 ;
-(void)updateSetting:(id)arg0 withNumberValue:(id)arg1 ;


@end


#endif