// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OTCONTROL_H
#define OTCONTROL_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface OTControl : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL sync; // ivar: _sync
@property BOOL synchronous; // ivar: _synchronous


+(id)controlObject:(*id)arg0 ;
+(id)controlObject:(BOOL)arg0 error:(*id)arg1 ;
-(id)getConnection:(id)arg0 ;
-(id)initWithConnection:(id)arg0 sync:(BOOL)arg1 ;
-(void)appleAccountSignedIn:(id)arg0 reply:(id)arg1 ;
-(void)appleAccountSignedOut:(id)arg0 reply:(id)arg1 ;
-(void)createCustodianRecoveryKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)createInheritanceKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)createRecoveryKey:(id)arg0 recoveryKey:(id)arg1 reply:(id)arg2 ;
-(void)dealloc;
-(void)deliverAKDeviceListDelta:(id)arg0 reply:(id)arg1 ;
-(void)encryptionKey:(id)arg0 ;
-(void)establish:(id)arg0 reply:(id)arg1 ;
-(void)fetchAccountSettings:(id)arg0 reply:(id)arg1 ;
-(void)fetchAccountWideSettings:(id)arg0 reply:(id)arg1 ;
-(void)fetchAllViableBottles:(id)arg0 reply:(id)arg1 ;
-(void)fetchCliqueStatus:(id)arg0 configuration:(id)arg1 reply:(id)arg2 ;
-(void)fetchEgoPeerID:(id)arg0 reply:(id)arg1 ;
-(void)fetchEscrowContents:(id)arg0 reply:(id)arg1 ;
-(void)fetchEscrowRecords:(id)arg0 forceFetch:(BOOL)arg1 reply:(id)arg2 ;
-(void)fetchTrustStatus:(id)arg0 configuration:(id)arg1 reply:(id)arg2 ;
-(void)fetchTrustedSecureElementIdentities:(id)arg0 reply:(id)arg1 ;
-(void)fetchUserControllableViewsSyncStatus:(id)arg0 reply:(id)arg1 ;
-(void)generateInheritanceKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)getCDPStatus:(id)arg0 reply:(id)arg1 ;
-(void)healthCheck:(id)arg0 skipRateLimitingCheck:(BOOL)arg1 reply:(id)arg2 ;
-(void)invalidateEscrowCache:(id)arg0 reply:(id)arg1 ;
-(void)joinWithCustodianRecoveryKey:(id)arg0 custodianRecoveryKey:(id)arg1 reply:(id)arg2 ;
-(void)joinWithInheritanceKey:(id)arg0 inheritanceKey:(id)arg1 reply:(id)arg2 ;
-(void)joinWithRecoveryKey:(id)arg0 recoveryKey:(id)arg1 reply:(id)arg2 ;
-(void)launchBottledPeer:(id)arg0 bottleID:(id)arg1 reply:(id)arg2 ;
-(void)leaveClique:(id)arg0 reply:(id)arg1 ;
-(void)listOfEligibleBottledPeerRecords:(id)arg0 ;
-(void)listOfRecords:(id)arg0 ;
-(void)notifyIDMSTrustLevelChangeForAltDSID:(id)arg0 reply:(id)arg1 ;
-(void)octagonEncryptionPublicKey:(id)arg0 ;
-(void)octagonSigningPublicKey:(id)arg0 ;
-(void)peerDeviceNamesByPeerID:(id)arg0 reply:(id)arg1 ;
-(void)persistAccountSettings:(id)arg0 setting:(id)arg1 reply:(id)arg2 ;
-(void)postCDPFollowupResult:(id)arg0 success:(BOOL)arg1 type:(id)arg2 error:(id)arg3 reply:(id)arg4 ;
-(void)preflightBottledPeer:(id)arg0 dsid:(id)arg1 reply:(id)arg2 ;
-(void)preflightJoinWithCustodianRecoveryKey:(id)arg0 custodianRecoveryKey:(id)arg1 reply:(id)arg2 ;
-(void)preflightJoinWithInheritanceKey:(id)arg0 inheritanceKey:(id)arg1 reply:(id)arg2 ;
-(void)refetchCKKSPolicy:(id)arg0 reply:(id)arg1 ;
-(void)removeCustodianRecoveryKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)removeFriendsInClique:(id)arg0 peerIDs:(id)arg1 reply:(id)arg2 ;
-(void)removeInheritanceKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
-(void)removeLocalSecureElementIdentityPeerID:(id)arg0 secureElementIdentityPeerID:(id)arg1 reply:(id)arg2 ;
-(void)reset:(id)arg0 ;
-(void)resetAccountCDPContents:(id)arg0 reply:(id)arg1 ;
-(void)resetAndEstablish:(id)arg0 resetReason:(NSInteger)arg1 reply:(id)arg2 ;
-(void)restore:(id)arg0 dsid:(id)arg1 secret:(id)arg2 escrowRecordID:(id)arg3 reply:(id)arg4 ;
-(void)restoreFromBottle:(id)arg0 entropy:(id)arg1 bottleID:(id)arg2 reply:(id)arg3 ;
-(void)rpcEpochWithArguments:(id)arg0 configuration:(id)arg1 reply:(id)arg2 ;
-(void)rpcJoinWithArguments:(id)arg0 configuration:(id)arg1 vouchData:(id)arg2 vouchSig:(id)arg3 reply:(id)arg4 ;
-(void)rpcPrepareIdentityAsApplicantWithArguments:(id)arg0 configuration:(id)arg1 reply:(id)arg2 ;
-(void)rpcVoucherWithArguments:(id)arg0 configuration:(id)arg1 peerID:(id)arg2 permanentInfo:(id)arg3 permanentInfoSig:(id)arg4 stableInfo:(id)arg5 stableInfoSig:(id)arg6 reply:(id)arg7 ;
-(void)scrubBottledPeer:(id)arg0 bottleID:(id)arg1 reply:(id)arg2 ;
-(void)setCDPEnabled:(id)arg0 reply:(id)arg1 ;
-(void)setLocalSecureElementIdentity:(id)arg0 secureElementIdentity:(id)arg1 reply:(id)arg2 ;
-(void)setMachineIDOverride:(id)arg0 machineID:(id)arg1 reply:(id)arg2 ;
-(void)setUserControllableViewsSyncStatus:(id)arg0 enabled:(BOOL)arg1 reply:(id)arg2 ;
-(void)signingKey:(id)arg0 ;
-(void)startOctagonStateMachine:(id)arg0 reply:(id)arg1 ;
-(void)status:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)status:(id)arg0 reply:(id)arg1 ;
-(void)storeInheritanceKey:(id)arg0 ik:(id)arg1 reply:(id)arg2 ;
-(void)tapToRadar:(id)arg0 description:(id)arg1 radar:(id)arg2 reply:(id)arg3 ;
-(void)tlkRecoverabilityForEscrowRecordData:(id)arg0 recordData:(id)arg1 reply:(id)arg2 ;
-(void)waitForOctagonUpgrade:(id)arg0 reply:(id)arg1 ;
-(void)waitForPriorityViewKeychainDataRecovery:(id)arg0 reply:(id)arg1 ;


@end


#endif