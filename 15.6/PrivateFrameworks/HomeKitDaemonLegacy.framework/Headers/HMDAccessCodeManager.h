// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDACCESSCODEMANAGER_H
#define HMDACCESSCODEMANAGER_H

@class HMFObject, NSString, NSUUID, NSHashTable;
@protocol HMFLogging, HMFMessageReceiver, HMDAccessCodeDataManagerDelegate, HMDAccessCodeManagerContext, OS_dispatch_queue;


#import "HMDAccessoryAccessCodeReaderWriter.h"
#import "HMDAccessCodeDataManager.h"

@interface HMDAccessCodeManager : HMFObject <HMFLogging, HMFMessageReceiver, HMDAccessCodeDataManagerDelegate>



@property (readonly) HMDAccessoryAccessCodeReaderWriter *accessoryReaderWriter; // ivar: _accessoryReaderWriter
@property (readonly) NSObject<HMDAccessCodeManagerContext> *context; // ivar: _context
@property (readonly) HMDAccessCodeDataManager *dataManager; // ivar: _dataManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isHomeAppForegrounded) BOOL homeAppForegrounded; // ivar: _homeAppForegrounded
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) NSHashTable *subscribedClientConnections; // ivar: _subscribedClientConnections
@property (readonly) Class superclass;
@property (readonly) Class utilities; // ivar: _utilities


+(id)logCategory;
-(BOOL)_redispatchToResidentIfNeccesaryForMessage:(id)arg0 withNewResponseHandler:(id)arg1 ;
-(BOOL)hasCurrentUserAccessCodeChangedWithChangedAccessCodes:(id)arg0 home:(id)arg1 ;
-(id)_accessCodeForUserWithUUID:(id)arg0 inHome:(id)arg1 ;
-(id)_addNewAccessCode:(id)arg0 toAccessoriesWithUUIDs:(id)arg1 withRetries:(BOOL)arg2 ;
-(id)_createNewAccessCodeForUserWithUUID:(id)arg0 ;
-(id)_removeAccessCode:(id)arg0 forUser:(id)arg1 removedByUserUUID:(id)arg2 ;
-(id)_removeAccessCode:(id)arg0 forUserWithUUID:(id)arg1 removedByUserUUID:(id)arg2 ;
-(id)_removeAccessCodeFromAccessoriesKeepingiCloudDataUponFailure:(id)arg0 ;
-(id)_resetAccessCodesForHomeAccessCode:(id)arg0 ;
-(id)_updateAccessCode:(id)arg0 toNewValue:(id)arg1 onAccessoriesWithFetchResponses:(id)arg2 withRetries:(BOOL)arg3 ;
-(id)_waitUntilDataHasSyncedToResidentForAccessoryUUIDs:(id)arg0 ;
-(id)_waitUntilDataHasSyncedToResidentIfNecessaryForAccessoryUUIDs:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 utilities:(Class)arg1 accessoryReaderWriter:(id)arg2 dataManager:(id)arg3 ;
-(id)logIdentifier;
-(void)_fetchAccessCodeConstraintsForMessage:(id)arg0 ;
-(void)_fetchAccessCodesForMessage:(id)arg0 ;
-(void)_generateNewAccessCodeWithCompletion:(id)arg0 ;
-(void)_generateNewUserAccessCodeForMessage:(id)arg0 ;
-(void)_notifySubscribersOfMessageWithName:(id)arg0 payload:(id)arg1 ;
-(void)_removeSimpleLabelAccessCodeMessage:(id)arg0 ;
-(void)_resetAccessoryAccessCodesForMessage:(id)arg0 ;
-(void)_setAccessCodeForUserForMessage:(id)arg0 ;
-(void)_submitAccessCodeModificationRequestsForMessage:(id)arg0 ;
-(void)_updateAccessoryAccessCodeCache;
-(void)_updateCacheWithModificationRespponses:(id)arg0 ;
-(void)accessCodeDataManager:(id)arg0 didAddAccessoryAccessCodes:(id)arg1 ;
-(void)accessCodeDataManager:(id)arg0 didAddHomeAccessCodes:(id)arg1 addedByUserUUID:(id)arg2 ;
-(void)accessCodeDataManager:(id)arg0 didRemoveAccessoryAccessCodes:(id)arg1 ;
-(void)accessCodeDataManager:(id)arg0 didRemoveHomeAccessCodes:(id)arg1 removedByUserUUID:(id)arg2 ;
-(void)accessCodeDataManager:(id)arg0 didUpdateAccessoryAccessCodes:(id)arg1 ;
-(void)accessCodeDataManager:(id)arg0 didUpdateHomeAccessCodes:(id)arg1 changedByUserUUID:(id)arg2 ;
-(void)configure;
-(void)fetchAccessCodeForIdentifier:(id)arg0 accessoryUUID:(id)arg1 completion:(id)arg2 ;
-(void)handleAccessorySupportsAccessCodeDidChangeNotification:(id)arg0 ;
-(void)handleConfirmDataHasSyncedToResidentMessage:(id)arg0 ;
-(void)handleFetchAccessCodeConstraintsMessage:(id)arg0 ;
-(void)handleFetchAccessCodesMessage:(id)arg0 ;
-(void)handleFetchCachedAccessCodesMessage:(id)arg0 ;
-(void)handleFetchHomeAccessCodesMessage:(id)arg0 ;
-(void)handleGenerateNewUserAccessCodeMessage:(id)arg0 ;
-(void)handleHomeDidDisableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeDidEnableCharacteristicNotification:(id)arg0 ;
-(void)handleHomeUserRemovedNotification:(id)arg0 ;
-(void)handleRemoveHomeAccessCodeMessage:(id)arg0 ;
-(void)handleRemoveSimpleLabelAccessCodeMessage:(id)arg0 ;
-(void)handleResetAccessoryAccessCodesMessage:(id)arg0 ;
-(void)handleSetAccessCodeForUserMessage:(id)arg0 ;
-(void)handleSetUserInformationMessage:(id)arg0 ;
-(void)handleSubmitAccessCodeModificationRequestsMessage:(id)arg0 ;
-(void)handleSubscribeMessage:(id)arg0 ;
-(void)handleUnsubscribeMessage:(id)arg0 ;


@end


#endif