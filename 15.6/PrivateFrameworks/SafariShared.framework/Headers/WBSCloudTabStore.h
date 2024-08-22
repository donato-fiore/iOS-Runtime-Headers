// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSCLOUDTABSTORE_H
#define WBSCLOUDTABSTORE_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSError, NSString, NSDictionary;
@protocol WBSCloudTabDeviceProvider, OS_dispatch_queue, WBSCloudTabStoreDelegate;

#import <Foundation/Foundation.h>

#import "WBSCloudTabDevice.h"

@interface WBSCloudTabStore : NSObject <WBSCloudTabDeviceProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_syncedCloudTabDevicesFromKVS;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromKVS;
    BOOL _hasAttemptedToRemoveCurrentDeviceFromKVS;
    BOOL _isFetchingDataFromCloudKit;
    BOOL _hasAttemptedToFetchDevicesAtLeastOnce;
    NSMutableArray *_syncedCloudTabDevicesFromCloudKit;
    NSArray *_filteredAndSortedSyncedCloudTabDevicesFromCloudKit;
    WBSCloudTabDevice *_currentDevice;
    NSMutableDictionary *_deviceUUIDsToCloseRequestsFromCloudKit;
    NSError *_lastFetchError;
}


@property (readonly, nonatomic) BOOL atLeastOneOtherActiveDeviceIsRegistered;
@property (readonly, nonatomic) BOOL currentDeviceIsRegisteredInCloudKit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentationOfCurrentDeviceInCloudKit;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSError *lastFetchError;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL syncAgentIsAvailable; // ivar: _syncAgentIsAvailable
@property (readonly, copy, nonatomic) NSArray *syncedCloudTabDevices;
@property (readonly, nonatomic) NSInteger uniqueDeviceMultiplicity;
@property (weak, nonatomic) NSObject<WBSCloudTabStoreDelegate> *wbsDelegate; // ivar: _wbsDelegate


-(BOOL)_closeTabs:(id)arg0 onDevice:(id)arg1 ;
-(BOOL)_deviceIsStoredInCloudKit:(id)arg0 ;
-(BOOL)_writeCloseRequestForTab:(id)arg0 onDevice:(id)arg1 deviceIsStoredInCloudKit:(BOOL)arg2 ;
-(BOOL)closeAllTabsOnDevice:(id)arg0 ;
-(BOOL)closeTab:(id)arg0 onDevice:(id)arg1 ;
-(BOOL)closeTabs:(id)arg0 onDevice:(id)arg1 ;
-(NSUInteger)_indexOfDevice:(id)arg0 inSyncedCloudTabDevices:(id)arg1 ;
-(id)_currentDeviceUUID;
-(id)_deviceWithTabsWithOutstandingCloseRequestsRemoved:(id)arg0 closeRequestsForDevice:(id)arg1 ;
-(id)_devicesByFilteringAndSortingDevices:(id)arg0 ;
-(id)_devicesByRemovingDevicesFromKVSWithOutstandingCloseRequests:(id)arg0 ;
-(id)_keyValueStoreDictionaryRepresentation:(NSInteger)arg0 ;
-(id)init;
-(void)_addCloseRequestDictionary:(id)arg0 toDeviceUUIDsToCloseRequestsDictionary:(id)arg1 requestUUID:(id)arg2 ;
-(void)_addDeviceDictionaryFromKVS:(id)arg0 deviceUUID:(id)arg1 ;
-(void)_closeRequestedTabIfPossible:(id)arg0 ;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg0 fetchedCloseRequests:(id)arg1 error:(id)arg2 ;
-(void)_didFetchDeviceDictionariesFromCloudKit:(id)arg0 fetchedCloseRequests:(id)arg1 fetchedDevicesBySyncing:(BOOL)arg2 error:(id)arg3 ;
-(void)_pruneOrphanedCloseRequestsFromKVS;
-(void)_removeObjectFromKeyValueStore:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)_setDictionaryInKeyValueStore:(NSInteger)arg0 dictionary:(id)arg1 forKey:(id)arg2 ;
-(void)_syncAgentProxyConnectionWasInvalidated:(id)arg0 ;
-(void)_tabWasClosed:(id)arg0 onDevice:(id)arg1 deviceIsStoredInCloudKit:(BOOL)arg2 syncedCloudTabDevices:(id)arg3 ;
-(void)_tabsWereClosed:(id)arg0 onDevice:(id)arg1 deviceIsStoredInCloudKit:(BOOL)arg2 syncedCloudTabDevices:(id)arg3 ;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg0 ;
-(void)clearTabsForFirstDuplicateDeviceInCloudKitWithName:(id)arg0 passingTest:(id)arg1 ;
-(void)createSyncedCloudTabDevicesAndCloseRequestsFromKVS;
-(void)deleteAllDevicesFromCloudKit;
-(void)fetchSyncedCloudTabDevicesAndCloseRequestsFromCloudKit;
-(void)handleCloseTabRequestsFromCloudKit;
-(void)pruneExpiredDevicesFromCloudKit;
-(void)saveCurrentCloudTabDeviceDictionaryToCloudKit:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif