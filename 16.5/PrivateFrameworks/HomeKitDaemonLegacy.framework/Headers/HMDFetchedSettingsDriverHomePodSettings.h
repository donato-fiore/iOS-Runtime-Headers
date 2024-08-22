// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDFETCHEDSETTINGSDRIVERHOMEPODSETTINGS_H
#define HMDFETCHEDSETTINGSDRIVERHOMEPODSETTINGS_H

@class NSString;
@protocol HMDHPSAccessorySettingServiceDelegate, HMDFetchedSettingsDriver, HMFLogging, HMDFetchedSettingsDriverDelegate, HMDHPSSettingsObjectFactoryProtocol, OS_dispatch_queue, HMDHPSAccessorySettingService;

#import <Foundation/Foundation.h>


@interface HMDFetchedSettingsDriverHomePodSettings : NSObject <HMDHPSAccessorySettingServiceDelegate, HMDFetchedSettingsDriver, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDFetchedSettingsDriverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMDHPSSettingsObjectFactoryProtocol> *hmdhpsObjectFactory; // ivar: _hmdhpsObjectFactory
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSObject<HMDHPSAccessorySettingService> *service; // ivar: _service
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_hpLanguageValueFromLanguageValue:(id)arg0 ;
-(id)_languageValueList;
-(id)_transformPreferredMediaUserEvent:(id)arg0 ;
-(id)_transformToImmutableSetting:(id)arg0 ;
-(id)initWithQueue:(id)arg0 settingsObjectFactory:(id)arg1 ;
-(void)_processReadResults:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_readSettingsAtKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)_writeSetting:(id)arg0 keyPath:(id)arg1 completion:(id)arg2 ;
-(void)didReconnect;
-(void)didUpdateSetting:(id)arg0 forKeyPath:(id)arg1 ;
-(void)fetchSettingsForKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)languageValueListWithCompletion:(id)arg0 ;
-(void)serviceDidInitializeForCurrentAccessory:(id)arg0 ;
-(void)startWithKeyPaths:(id)arg0 completion:(id)arg1 ;
-(void)updateSettingWithKeyPath:(id)arg0 boolSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 integerSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 languageSettingValue:(id)arg1 completion:(id)arg2 ;
-(void)updateSettingWithKeyPath:(id)arg0 primaryUserInfo:(id)arg1 completion:(id)arg2 ;


@end


#endif