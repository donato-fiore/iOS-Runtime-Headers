// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSDAEMONLISTENER_H
#define IDSDAEMONLISTENER_H

@class NSHashTable, NSProtocolChecker, NSMutableDictionary, NSString;
@protocol IDSDaemonListenerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSInternalQueueController.h"

@interface IDSDaemonListener : NSObject <IDSDaemonListenerProtocol>

 {
    IDSInternalQueueController *_internalQueueController;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSHashTable *_handlers;
    NSProtocolChecker *_protocol;
    NSMutableDictionary *_topicToAccountDictionaries;
    NSMutableDictionary *_topicToEnabledAccounts;
    NSMutableDictionary *_accountToDevices;
    NSMutableDictionary *_serviceToLinkedDevices;
    NSMutableDictionary *_serviceToFamilyInfo;
    NSMutableDictionary *_serviceToFamilyDevices;
    NSMutableDictionary *_serviceToPendingInvitations;
    NSMutableDictionary *_serviceToReceivedInvitations;
    NSMutableDictionary *_serviceToMaxMessageSize;
    NSMutableDictionary *_accountToActiveDeviceUniqueID;
    NSMutableDictionary *_serviceToActiveDeviceUniqueID;
    NSMutableDictionary *_directMessagingMetadata;
    NSString *_deviceIdentifier;
    BOOL _setupComplete;
    BOOL _postedSetupComplete;
    BOOL _setupInfoComplete;
    BOOL _connectionComplete;
    BOOL _hidingDisconnect;
}


@property (nonatomic, setter=_setHidingDisconnect:) BOOL _hidingDisconnect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL hasPostedSetupComplete;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSetupComplete;
@property (readonly) Class superclass;


-(NSInteger)maxEffectivePayloadSizeForService:(id)arg0 ;
-(id)_uniqueIDForDevice:(id)arg0 ;
-(id)_updateService:(id)arg0 withTinkerDevice:(id)arg1 shouldAdd:(BOOL)arg2 shouldSwitch:(BOOL)arg3 ;
-(id)accountDictionariesForService:(id)arg0 ;
-(id)dependentDevicesForAccount:(id)arg0 ;
-(id)enabledAccountsForService:(id)arg0 ;
-(id)familyInfoForService:(id)arg0 ;
-(id)getDirectMessagingMetadataDictionary;
-(id)init;
-(id)initWithQueueController:(id)arg0 ivarQueue:(id)arg1 ;
-(id)linkedDevicesForService:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)pendingInvitationsForService:(id)arg0 ;
-(id)receivedInvitationsForService:(id)arg0 ;
-(void)__postSetupComplete;
-(void)_callHandlersAsyncWithBlock:(id)arg0 ;
-(void)_callHandlersWithBlock:(id)arg0 ;
-(void)_callHandlersWithBlockOnIvarQueue:(id)arg0 ;
// -(void)_callHandlersWithBlockOnIvarQueue:(id)arg0 cleanup:(unk)arg1  ;
-(void)_internalDidSwitchActivePairedDevice:(id)arg0 forService:(id)arg1 ;
-(void)_internalSwitchActivePairedDevice:(id)arg0 forAccount:(id)arg1 ;
-(void)_internalSwitchActivePairedDevice:(id)arg0 forService:(id)arg1 ;
-(void)_noteDisconnected;
-(void)_performSyncBlock:(id)arg0 ;
-(void)_removeAccountOnIvarQueue:(id)arg0 ;
-(void)account:(id)arg0 accountInfoChanged:(id)arg1 ;
-(void)account:(id)arg0 aliasesChanged:(id)arg1 ;
-(void)account:(id)arg0 dependentDevicesUpdated:(id)arg1 ;
-(void)account:(id)arg0 displayNameChanged:(id)arg1 ;
-(void)account:(id)arg0 localDeviceAdded:(id)arg1 ;
-(void)account:(id)arg0 localDeviceRemoved:(id)arg1 ;
-(void)account:(id)arg0 loginChanged:(id)arg1 ;
-(void)account:(id)arg0 profileChanged:(id)arg1 ;
-(void)account:(id)arg0 registrationStatusInfoChanged:(id)arg1 ;
-(void)account:(id)arg0 vettedAliasesChanged:(id)arg1 ;
-(void)accountAdded:(id)arg0 ;
-(void)accountDisabled:(id)arg0 onService:(id)arg1 ;
-(void)accountEnabled:(id)arg0 onService:(id)arg1 ;
-(void)accountRemoved:(id)arg0 ;
-(void)addHandler:(id)arg0 ;
-(void)connectionComplete:(BOOL)arg0 withResponse:(id)arg1 ;
-(void)continuityDidConnectToPeer:(id)arg0 withError:(id)arg1 ;
-(void)continuityDidDisconnectFromPeer:(id)arg0 withError:(id)arg1 ;
-(void)continuityDidDiscoverPeerWithData:(id)arg0 fromPeer:(id)arg1 ;
-(void)continuityDidDiscoverType:(NSInteger)arg0 withData:(id)arg1 fromPeer:(id)arg2 ;
-(void)continuityDidFailToStartAdvertisingOfType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidFailToStartScanningForType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidLosePeer:(id)arg0 ;
-(void)continuityDidStartAdvertisingOfType:(NSInteger)arg0 ;
-(void)continuityDidStartScanningForType:(NSInteger)arg0 ;
-(void)continuityDidStopAdvertisingOfType:(NSInteger)arg0 ;
-(void)continuityDidStopAdvertisingOfType:(NSInteger)arg0 withError:(id)arg1 ;
-(void)continuityDidStopScanningForType:(NSInteger)arg0 ;
-(void)continuityDidUpdateStateToState:(NSInteger)arg0 ;
-(void)deactivatePairedDevices;
-(void)device:(id)arg0 nsuuidChanged:(id)arg1 ;
-(void)deviceIdentifierDidChange:(id)arg0 ;
-(void)didGetIdentities:(id)arg0 error:(id)arg1 ;
-(void)didSwitchActivePairedDevice:(id)arg0 ;
-(void)familyDevicesForService:(id)arg0 listenerID:(id)arg1 withCompletion:(id)arg2 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)refreshRegistrationForAccount:(id)arg0 ;
-(void)registrationFailedForAccount:(id)arg0 needsDeletion:(id)arg1 ;
-(void)removeHandler:(id)arg0 ;
-(void)service:(id)arg0 familyInfoUpdated:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceAdded:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceRemoved:(id)arg1 ;
-(void)service:(id)arg0 tinkerDeviceUpdated:(id)arg1 ;
-(void)setupCompleteWithInfo:(id)arg0 ;
-(void)switchActivePairedDevice:(id)arg0 forAccount:(id)arg1 ;
-(void)switchActivePairedDevice:(id)arg0 forService:(id)arg1 ;
-(void)updateAccount:(id)arg0 withAccountInfo:(id)arg1 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif