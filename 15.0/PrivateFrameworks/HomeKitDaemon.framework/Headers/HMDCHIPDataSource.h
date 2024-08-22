// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCHIPDATASOURCE_H
#define HMDCHIPDATASOURCE_H

@class HMFObject, CHIPPluginResidentStateManager, CHIPPluginStorage, NSString, NSDictionary, NSNotificationCenter, NSUUID;
@protocol CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, HMFLogging;


#import "HMDHomeManager.h"

@interface HMDCHIPDataSource : HMFObject <CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, HMFLogging>



@property (retain) CHIPPluginResidentStateManager *chipResidentStateManager; // ivar: _chipResidentStateManager
@property (retain) CHIPPluginStorage *chipStorage; // ivar: _chipStorage
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSDictionary *keyValueStore;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (copy) NSUUID *pairingTargetHomeUUID; // ivar: _pairingTargetHomeUUID
@property (readonly, getter=isResidentEnabledInAnyHome) BOOL residentEnabledInAnyHome;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)home;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 notificationCenter:(id)arg1 ;
-(void)configureWithResidentStateManager:(id)arg0 ;
-(void)configureWithStorage:(id)arg0 ;
-(void)handleCHIPKeyValueStoreChangedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdatedNotification:(id)arg0 ;
-(void)updateKeyValueStore:(id)arg0 completion:(id)arg1 ;


@end


#endif