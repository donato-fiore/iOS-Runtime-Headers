// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDLEGACYACCESSORYSETTINGSADAPTOR_H
#define HMDLEGACYACCESSORYSETTINGSADAPTOR_H

@class NSUUID, NSString;
@protocol HMEEventConsumer, HMFLogging, HMDLegacyAccessorySettingsAdaptor, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider, HMDLegacyAccessorySettingsAdaptorDelegate, OS_dispatch_queue, HMESubscriptionProviding;

#import <Foundation/Foundation.h>


@interface HMDLegacyAccessorySettingsAdaptor : NSObject <HMEEventConsumer, HMFLogging, HMDLegacyAccessorySettingsAdaptor>



@property (readonly, nonatomic) NSUUID *accessoryUUID; // ivar: _accessoryUUID
@property (readonly, weak, nonatomic) NSObject<HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider> *currentAccessorySettingsController; // ivar: _currentAccessorySettingsController
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDLegacyAccessorySettingsAdaptorDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<HMESubscriptionProviding> *subscriptionProvider; // ivar: _subscriptionProvider
@property (readonly) Class superclass;


+(id)logCategory;
+(id)parsedBoolSettingEvent:(id)arg0 topic:(id)arg1 ;
+(id)parsedIntegerSettingEvent:(id)arg0 topic:(id)arg1 ;
+(id)parsedLanguageListSetting:(id)arg0 topic:(id)arg1 ;
+(id)parsedLanguageSetting:(id)arg0 topic:(id)arg1 ;
-(id)_settingValueForKeyPath:(id)arg0 value:(id)arg1 ;
-(id)_transformLegacyLanguageSettingValueToImmutableSetting:(id)arg0 ;
-(id)initWithQueue:(id)arg0 homeUUID:(id)arg1 accessoryUUID:(id)arg2 settingsController:(id)arg3 subscriptionProvider:(id)arg4 ;
-(id)languageValueList;
-(void)didReceiveEvent:(id)arg0 topic:(id)arg1 ;
-(void)startup;
-(void)updateSettingWithKeyPath:(id)arg0 settingValue:(id)arg1 completion:(id)arg2 ;


@end


#endif