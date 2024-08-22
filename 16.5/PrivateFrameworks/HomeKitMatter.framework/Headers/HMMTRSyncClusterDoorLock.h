// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSYNCCLUSTERDOORLOCK_H
#define HMMTRSYNCCLUSTERDOORLOCK_H

@class MTRClusterDoorLock, HMFFuture, MTRBaseDevice, NSString, MTRDevice;
@protocol HMFLogging, OS_dispatch_queue;



@interface HMMTRSyncClusterDoorLock : MTRClusterDoorLock <HMFLogging>



@property (retain) HMFFuture *apiSerializationFuture; // ivar: _apiSerializationFuture
@property (retain) MTRBaseDevice *baseDevice; // ivar: _baseDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MTRDevice *device; // ivar: _device
@property unsigned short endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)deriveHomePinFromUUID:(id)arg0 withNumberOfDigits:(NSInteger)arg1 ;
+(id)logCategory;
+(id)pinDataWithDigits:(id)arg0 ;
-(BOOL)accessoryHasCOTAEnabled;
-(NSInteger)totalNumberOfPINCredentialsSupported;
-(id)_findUserOrAvailableSlotWithUserUniqueID:(id)arg0 ;
-(id)_getUserAtIndex:(NSInteger)arg0 ;
-(id)_removeUserWithUniqueID:(id)arg0 ;
-(id)addCredentialData:(id)arg0 forCredentialType:(id)arg1 atIndex:(NSInteger)arg2 forUserAtUserIndex:(NSInteger)arg3 ;
-(id)addDeviceCredentialKeyData:(id)arg0 forUserIndex:(NSInteger)arg1 ;
-(id)addIssuerKeyData:(id)arg0 forUserIndex:(NSInteger)arg1 ;
-(id)addOrUpdatePinCodeWithValue:(id)arg0 forUserIndex:(NSInteger)arg1 ;
-(id)addOrUpdateReaderKeyData:(id)arg0 ;
-(id)addPinCodeWithValue:(id)arg0 forUserIndex:(NSInteger)arg1 ;
-(id)addPinCredentialAtIndex:(NSInteger)arg0 withValue:(id)arg1 forUserAtUserIndex:(NSInteger)arg2 ;
-(id)addReaderKeyData:(id)arg0 ;
-(id)addUserAtUserIndex:(NSInteger)arg0 withUserUniqueID:(NSInteger)arg1 isRemote:(BOOL)arg2 ;
-(id)clearCredentialAtIndex:(NSInteger)arg0 withCredentialType:(id)arg1 ;
-(id)clearUserAtIndex:(NSInteger)arg0 ;
-(id)deriveHomePinFromUUID:(id)arg0 ;
-(id)fetchCurrentFabricIndex;
-(id)findAvailableCredentialIndexStartingAtSlot:(NSInteger)arg0 forCredentialType:(NSInteger)arg1 assumingTotalNumberOfSlots:(NSInteger)arg2 ;
-(id)findHomeUserWithUniqueID:(id)arg0 indexStartingAtSlot:(NSInteger)arg1 assumingTotalNumberOfSlots:(NSInteger)arg2 availableSlots:(id)arg3 currentFabricIndex:(id)arg4 ;
-(id)findOrAddUserWithUniqueID:(id)arg0 ;
-(id)findOrAddUserWithUniqueID:(id)arg0 isRemote:(BOOL)arg1 ;
-(id)findUserOrAvailableSlotWithUserUniqueID:(id)arg0 ;
-(id)firstAvailableCredentialSlotForCredentialType:(NSInteger)arg0 ;
-(id)getAllCredentialsIndexStartingAtSlot:(NSInteger)arg0 forCredentialType:(NSInteger)arg1 credentials:(id)arg2 ;
-(id)getAllPinCodes;
-(id)getCredentialAtIndex:(NSInteger)arg0 forCredentialType:(NSInteger)arg1 ;
-(id)getUserAtIndex:(NSInteger)arg0 ;
-(id)initWithDevice:(id)arg0 baseDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3 ;
-(id)lock;
-(id)lockWithPin:(id)arg0 ;
-(id)pinCredentialForUser:(id)arg0 ;
-(id)provisionHomePin:(id)arg0 ;
-(id)removeHomeUser;
-(id)removePinCodeForUserIndex:(NSInteger)arg0 ;
-(id)removeUserWithUniqueID:(id)arg0 ;
-(id)rfidCredentialForUser:(id)arg0 ;
-(id)serialize:(id)arg0 ;
-(id)totalNumberOfUsersSupported;
-(id)unlock;
-(id)unlockWithPin:(id)arg0 ;
-(id)updateCredentialData:(id)arg0 forCredentialType:(id)arg1 atIndex:(NSInteger)arg2 forUserAtUserIndex:(NSInteger)arg3 ;
-(id)updatePinCredentialAtIndex:(NSInteger)arg0 withValue:(id)arg1 forUserAtUserIndex:(NSInteger)arg2 ;
-(void)accessorySupportsPinCodes;
-(void)dealloc;
-(void)lockDoorWithAccessoryUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)unlockDoorWithAccessoryUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif