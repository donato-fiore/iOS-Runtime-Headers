// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTSYNCPROVIDER_H
#define NTKPIGMENTSYNCPROVIDER_H

@class NSString, CLKDevice, NSMutableSet, NSMutableArray;
@protocol NTKPigmentEditOptionStoreListener, NTKPigmentSyncProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKPigmentEditOptionStore.h"
#import "NTKPigmentPersistentStorageController.h"

@interface NTKPigmentSyncProvider : NSObject <NTKPigmentEditOptionStoreListener>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKPigmentSyncProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) NSMutableSet *domainsRequiringDeltaSync; // ivar: _domainsRequiringDeltaSync
@property (retain, nonatomic) NSMutableArray *faceDomainsToBeSynced; // ivar: _faceDomainsToBeSynced
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NTKPigmentEditOptionStore *pigmentStore; // ivar: _pigmentStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (nonatomic) BOOL receivedUpdateDuringSync; // ivar: _receivedUpdateDuringSync
@property (nonatomic) BOOL requestDeltaSyncAfterSyncing; // ivar: _requestDeltaSyncAfterSyncing
@property (nonatomic) BOOL shouldSyncSharedCollections; // ivar: _shouldSyncSharedCollections
@property (retain, nonatomic) NTKPigmentPersistentStorageController *storageController; // ivar: _storageController
@property (readonly) Class superclass;
@property (nonatomic, getter=isSyncing) BOOL syncing; // ivar: _syncing


+(BOOL)areCollections:(id)arg0 equalToCollections:(id)arg1 ;
-(BOOL)prepareForSyncing:(BOOL)arg0 ;
-(BOOL)shouldForceFullSync;
-(id)allAvailableFacesSupportingPigment;
-(id)compareLocalSyncDifferences;
-(id)initWithDelegate:(id)arg0 ;
-(id)nextSyncData:(*id)arg0 ;
-(void)_requestDeltaSyncIfNeeded;
-(void)colorBundleContentChanged;
-(void)colorEditOptionStore:(id)arg0 didChangeForDomain:(id)arg1 ;
-(void)enumerateAllFacesPigmentDomains:(id)arg0 ;
-(void)faceBundlesUpdated;
-(void)finishSyncing:(BOOL)arg0 ;
-(void)saveSyncVersion;


@end


#endif