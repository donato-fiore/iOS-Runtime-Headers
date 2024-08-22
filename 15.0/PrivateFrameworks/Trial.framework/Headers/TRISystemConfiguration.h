// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISYSTEMCONFIGURATION_H
#define TRISYSTEMCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRISystemConfiguration : NSObject {
    NSString *_persistentDeviceIdentifierPath;
    NSString *_cachedDeviceIdentifier;
}




+(id)_sharedSystemInfo;
+(id)sharedInstance;
-(BOOL)deleteDeviceIdentifier;
-(BOOL)deleteDeviceIdentifierWithPath:(id)arg0 ;
-(BOOL)isBetaBuild;
-(BOOL)isBetaUserWithIsStale:(*BOOL)arg0 ;
-(BOOL)isInternalBuild;
-(BOOL)resetDeviceIdentifier;
-(BOOL)setDeviceIdentifier:(id)arg0 ;
-(BOOL)setDeviceIdentifier:(id)arg0 path:(id)arg1 ;
-(NSUInteger)trialVersionMajor;
-(NSUInteger)trialVersionMinor;
-(id)_systemInfoWithIsStale:(*BOOL)arg0 ;
-(id)_trialVersion;
-(id)createDeviceIdentifierWithPath:(id)arg0 ;
-(id)createPersistentDeviceIdentifier;
-(id)deviceClass;
-(id)deviceId;
-(id)deviceInfoForQuestion:(id)arg0 ;
-(id)deviceModelCode;
-(id)enabledInputModeIdentifiers;
-(id)init;
-(id)initWithPaths:(id)arg0 ;
-(id)osBuild;
-(id)osType;
-(id)readDeviceIdentifierWithPath:(id)arg0 ;
-(id)reloadDeviceId;
-(id)reloadSystemInfo;
-(id)storedDeviceIdentifier;
-(id)systemInfo;
-(id)trialVersionTag;
-(id)userSettingsBCP47DeviceLocale;
-(id)userSettingsLanguageCode;
-(id)userSettingsRegionCode;
-(int)populationType;
-(struct ? )marketingOSVersion;


@end


#endif