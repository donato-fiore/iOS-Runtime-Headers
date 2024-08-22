// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCHIPDATASOURCE_H
#define HMDCHIPDATASOURCE_H

@class HMFObject, NSSet, HMFTimer, CHIPPluginAttestationDataStore, CHIPPluginResidentStateManager, CHIPPluginStorage, NSNumber, NSString, NSDictionary, NSNotificationCenter, NSUUID, CHIPPluginUIDialogPresenter, CHIPPluginVendorMetadataStore;
@protocol CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, CHIPPluginUIDialogPresenterDelegate, HMFLogging, HMFTimerDelegate;


#import "HMDHomeManager.h"

@interface HMDCHIPDataSource : HMFObject <CHIPPluginResidentStateManagerDataSource, CHIPPluginStorageDataSource, CHIPPluginUIDialogPresenterDelegate, HMFLogging, HMFTimerDelegate>



@property (readonly, copy, nonatomic) NSSet *allFabricIndexes;
@property (readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property (readonly) HMFTimer *attestationDataRefreshTimer; // ivar: _attestationDataRefreshTimer
@property (retain) CHIPPluginAttestationDataStore *attestationDataStore; // ivar: _attestationDataStore
@property (retain) CHIPPluginResidentStateManager *chipResidentStateManager; // ivar: _chipResidentStateManager
@property (retain) CHIPPluginStorage *chipStorage; // ivar: _chipStorage
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, copy) NSNumber *currentFabricIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSDictionary *keyValueStore;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSNumber *pairingTargetFabricIndex;
@property (copy) NSUUID *pairingTargetHomeUUID; // ivar: _pairingTargetHomeUUID
@property (readonly) Class superclass;
@property (retain) CHIPPluginUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter
@property (readonly) HMFTimer *vendorMetadataRefreshTimer; // ivar: _vendorMetadataRefreshTimer
@property (retain) CHIPPluginVendorMetadataStore *vendorMetadataStore; // ivar: _vendorMetadataStore


+(id)logCategory;
-(id)home;
-(id)homeWithCHIPFabricID:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 notificationCenter:(id)arg1 vendorMetadataRefreshTimer:(id)arg2 attestationDataRefreshTimer:(id)arg3 ;
-(id)keyValueStoreForFabricWithID:(id)arg0 ;
-(id)storageDataSourceForFabricWithIndex:(id)arg0 ;
-(void)configureWithAttestationDataStore:(id)arg0 ;
-(void)configureWithResidentStateManager:(id)arg0 ;
-(void)configureWithStorage:(id)arg0 ;
-(void)configureWithUIDialogPresenter:(id)arg0 ;
-(void)configureWithVendorMetadataStore:(id)arg0 ;
-(void)handleAccessoryCHIPStorageChangedNotification:(id)arg0 ;
-(void)handleHomeCHIPStorageChangedNotification:(id)arg0 ;
-(void)handleHomeRemovedNotification:(id)arg0 ;
-(void)handlePrimaryResidentUpdatedNotification:(id)arg0 ;
-(void)requestUserPermissionForUnauthenticatedAccessory:(id)arg0 withContext:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(void)timerDidFire:(id)arg0 ;
-(void)updateKeyValueStore:(id)arg0 completion:(id)arg1 ;
-(void)updateKeyValueStore:(id)arg0 forFabricWithID:(id)arg1 completion:(id)arg2 ;


@end


#endif