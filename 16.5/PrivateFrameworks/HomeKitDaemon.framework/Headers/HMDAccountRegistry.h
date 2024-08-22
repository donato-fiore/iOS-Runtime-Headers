// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCOUNTREGISTRY_H
#define HMDACCOUNTREGISTRY_H

@class NSArray, NSString;
@protocol HMFLogging, NSFastEnumeration, OS_dispatch_queue;


#import "HMCContextProvider.h"
#import "HMDAppleAccountManager.h"
#import "HMDRemoteAccountManager.h"

@interface HMDAccountRegistry : HMCContextProvider <HMFLogging, NSFastEnumeration>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) HMDAppleAccountManager *appleAccountManager; // ivar: _appleAccountManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDRemoteAccountManager *remoteAccountManager; // ivar: _remoteAccountManager
@property (readonly) BOOL started; // ivar: _started
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)logCategory;
+(id)sharedRegistry;
-(BOOL)accountExistsForHandle:(id)arg0 ;
-(BOOL)deviceExistsForDevice:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)accountForHandle:(id)arg0 ;
-(id)accountForHandle:(id)arg0 exists:(*BOOL)arg1 ;
-(id)attributeDescriptions;
-(id)deviceForAddress:(id)arg0 ;
-(id)deviceForDevice:(id)arg0 ;
-(id)deviceForDevice:(id)arg0 exists:(*BOOL)arg1 ;
-(id)deviceForHandle:(id)arg0 ;
-(id)deviceForHandle:(id)arg0 exists:(*BOOL)arg1 ;
-(id)deviceForIDSIdentifier:(id)arg0 ;
-(id)deviceForIdentifier:(id)arg0 ;
-(id)deviceForPushToken:(id)arg0 ;
-(id)existingAccountWithMergeIdentifier:(id)arg0 ;
-(id)fetchAccountsWithLocalFlag:(BOOL)arg0 ;
-(id)findBackingModelFromDevice:(id)arg0 ;
-(id)initWithAppleAccountManager:(id)arg0 remoteAccountManager:(id)arg1 ;
-(id)initWithAppleAccountManager:(id)arg0 remoteAccountManager:(id)arg1 context:(id)arg2 ;
-(void)__handleAddedRemoteAccount:(id)arg0 ;
-(void)__handleAppleAccountDeviceAdded:(id)arg0 ;
-(void)__handleAppleAccountHandlesUpdated:(id)arg0 ;
-(void)__handleAppleAccountUpdate:(id)arg0 ;
-(void)__handleRemovedRemoteAccount:(id)arg0 ;
-(void)_resolveAccountForHandle:(id)arg0 completionHandler:(id)arg1 ;
-(void)accountInformationChanged:(id)arg0 ;
-(void)addAccount:(id)arg0 isLocal:(BOOL)arg1 ;
-(void)addDevice:(id)arg0 toAccount:(id)arg1 ;
-(void)addHandle:(id)arg0 toAccount:(id)arg1 ;
-(void)registerForDatabaseChanges;
-(void)removeAccount:(id)arg0 ;
-(void)removeDevice:(id)arg0 fromAccount:(id)arg1 ;
-(void)removeHandle:(id)arg0 fromAccount:(id)arg1 ;
-(void)reset;
-(void)start;
-(void)stop;
-(void)updateAccount:(id)arg0 ;
-(void)updateDevice:(id)arg0 toVersion:(id)arg1 ;
-(void)updateDevice:(id)arg0 withDevice:(id)arg1 ;
-(void)updateDevices:(id)arg0 onAccount:(id)arg1 ;


@end


#endif