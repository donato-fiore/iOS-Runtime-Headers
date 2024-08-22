// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUHOMEKITMANAGER_H
#define CUHOMEKITMANAGER_H

@class HMHomeManager, NSMutableDictionary, NSUUID, HMUser, NSString, NSArray, HMAccessory, NSDictionary, HMMediaSystem, HMMediaSystemRole;
@protocol HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUHomeKitManager : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate>

 {
    int _homeKitPrefsNotifyToken;
    HMHomeManager *_homeManager;
    BOOL _homeManagerDidUpdateHomes;
    NSMutableDictionary *_homes;
    NSMutableDictionary *_resolvableAccessoriesMap;
    BOOL _selfAccessoryEnabled;
    NSUUID *_selfAccessoryRoomID;
    BOOL _selfAccessoryMediaAccessEnabled;
    BOOL _selfAccessoryMediaSystemEnabled;
    BOOL _selfAccessorySiriAccessEnabled;
    HMUser *_selfAccessoryUser;
    NSMutableDictionary *_users;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    *LogCategory _ucat;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) NSArray *resolvableAccessories; // ivar: _resolvableAccessories
@property (copy, nonatomic) id *resolvableAccessoriesChangedHandler; // ivar: _resolvableAccessoriesChangedHandler
@property (readonly, nonatomic) HMAccessory *selfAccessory; // ivar: _selfAccessory
@property (readonly, copy, nonatomic) NSDictionary *selfAccessoryAppData; // ivar: _selfAccessoryAppData
@property (copy, nonatomic) id *selfAccessoryAppDataChangedHandler; // ivar: _selfAccessoryAppDataChangedHandler
@property (readonly, nonatomic) unsigned int selfAccessoryMediaAccessFlags; // ivar: _selfAccessoryMediaAccessFlags
@property (readonly, copy, nonatomic) NSString *selfAccessoryMediaAccessPassword; // ivar: _selfAccessoryMediaAccessPassword
@property (copy, nonatomic) id *selfAccessoryMediaAccessUpdatedHandler; // ivar: _selfAccessoryMediaAccessUpdatedHandler
@property (readonly, nonatomic) HMMediaSystem *selfAccessoryMediaSystem; // ivar: _selfAccessoryMediaSystem
@property (readonly, nonatomic) HMAccessory *selfAccessoryMediaSystemCounterpart; // ivar: _selfAccessoryMediaSystemCounterpart
@property (copy, nonatomic) NSString *selfAccessoryMediaSystemName; // ivar: _selfAccessoryMediaSystemName
@property (readonly, nonatomic) HMMediaSystemRole *selfAccessoryMediaSystemRole; // ivar: _selfAccessoryMediaSystemRole
@property (copy, nonatomic) id *selfAccessoryMediaSystemUpdatedHandler; // ivar: _selfAccessoryMediaSystemUpdatedHandler
@property (copy, nonatomic) id *selfAccessorySiriAccessUpdatedHandler; // ivar: _selfAccessorySiriAccessUpdatedHandler
@property (readonly, nonatomic) BOOL selfAccessorySiriEnabled; // ivar: _selfAccessorySiriEnabled
@property (copy, nonatomic) id *selfAccessoryUpdatedHandler; // ivar: _selfAccessoryUpdatedHandler
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (copy, nonatomic) id *stateChangedHandler; // ivar: _stateChangedHandler
@property (readonly) Class superclass;


-(BOOL)_isOwnerOfHome:(id)arg0 ;
-(id)_bestUserAndLabel:(*id)arg0 ;
-(id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_selfAccessoryMediaSystemUncached:(*id)arg0 ;
-(id)init;
-(void)_activateIfNeeded;
-(void)_clearHomeKitState;
-(void)_findPairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_findPairedPeerWithContext:(id)arg0 ;
-(void)_findPairedPeerWithContext:(id)arg0 label:(id)arg1 pairingIdentity:(id)arg2 error:(id)arg3 ;
-(void)_getPairingIdentityCompleted:(id)arg0 options:(NSUInteger)arg1 error:(id)arg2 label:(id)arg3 completion:(id)arg4 ;
-(void)_getPairingIdentityForAccessoryWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_getPairingIdentityForLegacyWithOptions:(NSUInteger)arg0 user:(id)arg1 nonLegacyIdentity:(id)arg2 label:(id)arg3 completion:(id)arg4 ;
-(void)_getPairingIdentityForUserWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_interrupted;
-(void)_invalidated;
-(void)_updateAccessories;
-(void)_updateHomes;
-(void)_updateSelfAccessoryIfNeeded;
-(void)_updateSelfAccessoryMediaAccess;
-(void)_updateSelfAccessoryMediaSystem;
-(void)_updateSelfAccessorySiriAccess;
-(void)_updateState;
-(void)_updateUsers;
-(void)accessory:(id)arg0 didUpdateDevice:(id)arg1 ;
-(void)accessoryDidUpdateApplicationData:(id)arg0 ;
-(void)accessoryDidUpdatePairingIdentity:(id)arg0 ;
-(void)activate;
-(void)dealloc;
-(void)findPairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getPairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)home:(id)arg0 didAddAccessory:(id)arg1 ;
-(void)home:(id)arg0 didAddMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didAddUser:(id)arg1 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)home:(id)arg0 didRemoveMediaSystem:(id)arg1 ;
-(void)home:(id)arg0 didRemoveUser:(id)arg1 ;
-(void)home:(id)arg0 didUpdateMediaPassword:(id)arg1 ;
-(void)home:(id)arg0 didUpdateMediaPeerToPeerEnabled:(BOOL)arg1 ;
-(void)home:(id)arg0 didUpdateMinimumMediaUserPrivilege:(NSInteger)arg1 ;
-(void)home:(id)arg0 didUpdateRoom:(id)arg1 forAccessory:(id)arg2 ;
-(void)homeManager:(id)arg0 didAddHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didRemoveHome:(id)arg1 ;
-(void)homeManager:(id)arg0 didUpdateStatus:(NSUInteger)arg1 ;
-(void)homeManagerDidUpdateDataSyncState:(id)arg0 ;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)invalidate;
-(void)mediaSystem:(id)arg0 didUpdateComponents:(id)arg1 ;
-(void)mediaSystem:(id)arg0 didUpdateName:(id)arg1 ;
-(void)user:(id)arg0 didUpdateAssistantAccessControl:(id)arg1 forHome:(id)arg2 ;
-(void)user:(id)arg0 didUpdatePairingIdentity:(id)arg1 ;


@end


#endif