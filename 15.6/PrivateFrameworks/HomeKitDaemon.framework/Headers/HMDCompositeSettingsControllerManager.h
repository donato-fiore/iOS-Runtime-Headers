// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLERMANAGER_H
#define HMDCOMPOSITESETTINGSCONTROLLERMANAGER_H

@class NSString, NSArray, NSMapTable;
@protocol HMDAccessorySettingsLocalMessageHandlerDelegate, HMFLogging, HMDCompositeSettingsControllerDelegate, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingControllerManagerStateManagerDataSource, OS_dispatch_queue, HMDCompositeSettingsControllerManagerDataSource, HMMLogEventSubmitting, HMDCompositeSettingControllerManagerStateManager;

#import <Foundation/Foundation.h>

#import "HMDCompositeSettingsOwnerToZoneManagerRegistry.h"

@interface HMDCompositeSettingsControllerManager : NSObject <HMDAccessorySettingsLocalMessageHandlerDelegate, HMFLogging, HMDCompositeSettingsControllerDelegate, HMDCompositeSettingControllerManagerStateTransitionDelegate, HMDCompositeSettingControllerManagerStateManagerDataSource>

 {
    HMDCompositeSettingsOwnerToZoneManagerRegistry *_registry;
    NSObject<OS_dispatch_queue> *_workQueue;
    id *_compositeSettingsControllerFactory;
}


@property (readonly, weak) NSObject<HMDCompositeSettingsControllerManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *homes;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventDispatcher; // ivar: _logEventDispatcher
@property (readonly) NSObject<HMDCompositeSettingControllerManagerStateManager> *stateManager; // ivar: _stateManager
@property (readonly, copy) NSMapTable *stringToCompositeSettingsController; // ivar: _stringToCompositeSettingsController
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)immutableSettingFromFetchReturn:(id)arg0 ;
+(id)logCategory;
-(id)dumpStateInfo;
-(id)initWithDataSource:(id)arg0 ;
// -(id)initWithDataSource:(id)arg0 registry:(id)arg1 controllerFactory:(id)arg2 stateManagerFactory:(unk)arg3 logEventDispatcher:(id)arg4  ;
-(void)_createSettingControllerForAccessory:(id)arg0 homeUUID:(id)arg1 ;
-(void)accessorySettingsLocalMessageHandler:(id)arg0 didRecieveFetchRequestMessage:(id)arg1 withHomeUUID:(id)arg2 accessoryUUID:(id)arg3 keyPaths:(id)arg4 callerVersion:(id)arg5 callerPrivilege:(NSUInteger)arg6 siriAvailableLanguagesSetting:(id)arg7 ;
-(void)accessorySettingsLocalMessageHandler:(id)arg0 didRecieveUpdateRequestMessage:(id)arg1 withHomeUUID:(id)arg2 accessoryUUID:(id)arg3 keyPath:(id)arg4 value:(id)arg5 callerVersion:(id)arg6 ;
-(void)applyOnboardingSelections:(id)arg0 accessoryUUID:(id)arg1 homeUUID:(id)arg2 completion:(id)arg3 ;
-(void)didConfigureCompositeSettingsControllerForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(void)didUpdateCurrentRunState:(NSInteger)arg0 updatedState:(NSInteger)arg1 forHome:(id)arg2 ;
-(void)didUpdateSiriEndpointSettingForHomeUUID:(id)arg0 accessoryUUID:(id)arg1 ;
-(void)languagesDidChangeForHome:(id)arg0 ;
-(void)localFetchSettingsForUUID:(id)arg0 homeUUID:(id)arg1 withKeyPaths:(id)arg2 callerVersion:(id)arg3 callerPrivilege:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)localFetchSettingsForUUID:(id)arg0 homeUUID:(id)arg1 withKeyPaths:(id)arg2 completion:(id)arg3 ;
-(void)localUpdateSettingForUUID:(id)arg0 homeUUID:(id)arg1 keyPath:(id)arg2 value:(id)arg3 callerVersion:(id)arg4 completion:(id)arg5 ;
-(void)localUpdateSettingForUUID:(id)arg0 homeUUID:(id)arg1 keyPath:(id)arg2 value:(id)arg3 completion:(id)arg4 ;
-(void)removeHomeZone:(id)arg0 ;
-(void)settingsController:(id)arg0 didUpdateSettings:(id)arg1 metadata:(id)arg2 ;


@end


#endif