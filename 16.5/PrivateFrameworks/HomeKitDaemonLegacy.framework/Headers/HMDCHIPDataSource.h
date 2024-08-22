// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCHIPDATASOURCE_H
#define HMDCHIPDATASOURCE_H

@class HMFObject, NSSet, HMFTimer, HMMTRAttestationDataStore, HMMTRResidentStateManager, HMMTRStorage, NSNumber, NSString, NSDictionary, NSNotificationCenter, HMMTRUIDialogPresenter, HMMTRVendorMetadataStore;
@protocol HMMTRResidentStateManagerDataSource, HMMTRStorageDataSource, HMMTRUIDialogPresenterDelegate, HMMTRAccessoryServerBrowserDelegate, HMFLogging, HMFTimerDelegate;


#import "HMDUIDialogPresenter.h"
#import "HMDHomeManager.h"

@interface HMDCHIPDataSource : HMFObject <HMMTRResidentStateManagerDataSource, HMMTRStorageDataSource, HMMTRUIDialogPresenterDelegate, HMMTRAccessoryServerBrowserDelegate, HMFLogging, HMFTimerDelegate>



@property (readonly, copy, nonatomic) NSSet *allFabricIndexes;
@property (readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property (readonly) HMFTimer *attestationDataRefreshTimer; // ivar: _attestationDataRefreshTimer
@property (retain) HMMTRAttestationDataStore *attestationDataStore; // ivar: _attestationDataStore
@property (retain) HMMTRResidentStateManager *chipResidentStateManager; // ivar: _chipResidentStateManager
@property (retain) HMMTRStorage *chipStorage; // ivar: _chipStorage
@property (readonly, getter=isCurrentDevicePrimaryResident) BOOL currentDevicePrimaryResident;
@property (readonly, copy) NSNumber *currentFabricIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDUIDialogPresenter *dialogPresenter; // ivar: _dialogPresenter
@property (readonly) NSUInteger hash;
@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy) NSDictionary *keyValueStore;
@property (readonly) NSNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (readonly, copy) NSNumber *pairingTargetFabricIndex;
@property (readonly) Class superclass;
@property (retain) HMMTRUIDialogPresenter *uiDialogPresenter; // ivar: _uiDialogPresenter
@property (readonly) HMFTimer *vendorMetadataRefreshTimer; // ivar: _vendorMetadataRefreshTimer
@property (retain) HMMTRVendorMetadataStore *vendorMetadataStore; // ivar: _vendorMetadataStore


+(id)logCategory;
-(id)home;
-(id)homeWithCHIPFabricID:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 ;
-(id)initWithHomeManager:(id)arg0 notificationCenter:(id)arg1 vendorMetadataRefreshTimer:(id)arg2 attestationDataRefreshTimer:(id)arg3 dialogPresenter:(id)arg4 ;
-(id)storageDataSourceForFabricWithIndex:(id)arg0 ;
-(void)browser:(id)arg0 didRemoveAccessoryPairingWithNodeID:(id)arg1 ;
-(void)configureWithAccessoryServerBrowser:(id)arg0 ;
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


@end


#endif