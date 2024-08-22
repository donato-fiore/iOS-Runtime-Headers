// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOMPOSITESETTINGSCONTROLLER_H
#define HMDCOMPOSITESETTINGSCONTROLLER_H

@class NSDictionary, NSArray, NSString, NSUUID;
@protocol HMFLogging, HMDCompositeSettingsDatabaseAdapterDelegate, HMDCompositeSettingsControllerPrivate, HMDCompositeSettingsController, HMMLogEventSubmitting, HMDCompositeSettingsDatabaseAdapter, HMDCompositeSettingsControllerDelegate;

#import <Foundation/Foundation.h>

#import "HMDCompositeSettingsZoneManager.h"

@interface HMDCompositeSettingsController : NSObject <HMFLogging, HMDCompositeSettingsDatabaseAdapterDelegate, HMDCompositeSettingsControllerPrivate, HMDCompositeSettingsController>

 {
    os_unfair_lock_s _lock;
    NSDictionary *_settings;
    NSDictionary *_settingMetadata;
    Class _modelClass;
    id<HMMLogEventSubmitting> *_logEventDispatcher;
    NSArray *_settingKeyPathBlockList;
    id<HMDCompositeSettingsDatabaseAdapter> *_databaseAdapter;
}


@property BOOL configured; // ivar: _configured
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCompositeSettingsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid; // ivar: _uuid
@property (weak) HMDCompositeSettingsZoneManager *zoneManager; // ivar: _zoneManager


+(id)logCategory;
-(id)_settingFromSetting:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)fetchSynchronousSettingsForKeyPaths:(id)arg0 callerVersion:(id)arg1 callerPrivilege:(NSUInteger)arg2 ;
-(id)initWithDatabaseAdapter:(id)arg0 model:(Class)arg1 homeUUID:(id)arg2 ownerUUID:(id)arg3 logEventDispatcher:(id)arg4 settingKeyPathBlockList:(id)arg5 ;
-(id)initWithDatabaseAdapter:(id)arg0 model:(Class)arg1 homeUUID:(id)arg2 ownerUUID:(id)arg3 settingKeyPathBlockList:(id)arg4 ;
-(id)logIdentifier;
-(void)_createSettingsFromModel:(id)arg0 ;
-(void)database:(id)arg0 didConfigureWithError:(id)arg1 ;
-(void)database:(id)arg0 didProcessCreationForModel:(id)arg1 ;
-(void)database:(id)arg0 didProcessDeletionForModel:(id)arg1 ;
-(void)database:(id)arg0 didProcessUpdateForModel:(id)arg1 ;
-(void)fetchSettingForKeyPath:(id)arg0 callerVersion:(id)arg1 callerPrivilege:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchSettingsForKeyPaths:(id)arg0 callerVersion:(id)arg1 callerPrivilege:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)start;
-(void)updateSettingForKeyPath:(id)arg0 value:(id)arg1 callerVersion:(id)arg2 completion:(id)arg3 ;
-(void)updateSettingsForKeyPaths:(id)arg0 callerVersion:(id)arg1 completion:(id)arg2 ;


@end


#endif