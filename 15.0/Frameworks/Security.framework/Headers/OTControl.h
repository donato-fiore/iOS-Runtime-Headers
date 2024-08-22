// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)createCustodianRecoveryKey:(id)arg0 contextID:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)createInheritanceKey:(id)arg0 contextID:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)createRecoveryKey:(id)arg0 contextID:(id)arg1 recoveryKey:(id)arg2 reply:(id)arg3 ;
-(void)dealloc;
-(void)encryptionKey:(id)arg0 ;
-(void)establish:(id)arg0 context:(id)arg1 altDSID:(id)arg2 reply:(id)arg3 ;
-(void)fetchAccountSettings:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)fetchAccountWideSettings:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)fetchAllViableBottles:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)fetchCliqueStatus:(id)arg0 context:(id)arg1 configuration:(id)arg2 reply:(id)arg3 ;
-(void)fetchEgoPeerID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)fetchEscrowContents:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)fetchEscrowRecords:(id)arg0 contextID:(id)arg1 forceFetch:(BOOL)arg2 reply:(id)arg3 ;
-(void)fetchTrustStatus:(id)arg0 context:(id)arg1 configuration:(id)arg2 reply:(id)arg3 ;
-(void)fetchTrustedSecureElementIdentities:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)fetchUserControllableViewsSyncStatus:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)getCDPStatus:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)healthCheck:(id)arg0 context:(id)arg1 skipRateLimitingCheck:(BOOL)arg2 reply:(id)arg3 ;
-(void)invalidateEscrowCache:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)joinWithCustodianRecoveryKey:(id)arg0 contextID:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(id)arg3 ;
-(void)joinWithInheritanceKey:(id)arg0 contextID:(id)arg1 inheritanceKey:(id)arg2 reply:(id)arg3 ;
-(void)joinWithRecoveryKey:(id)arg0 contextID:(id)arg1 recoveryKey:(id)arg2 reply:(id)arg3 ;
-(void)launchBottledPeer:(id)arg0 bottleID:(id)arg1 reply:(id)arg2 ;
-(void)leaveClique:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)listOfEligibleBottledPeerRecords:(id)arg0 ;
-(void)listOfRecords:(id)arg0 ;
-(void)notifyIDMSTrustLevelChangeForContainer:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)octagonEncryptionPublicKey:(id)arg0 ;
-(void)octagonSigningPublicKey:(id)arg0 ;
-(void)peerDeviceNamesByPeerID:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)postCDPFollowupResult:(BOOL)arg0 type:(id)arg1 error:(id)arg2 containerName:(id)arg3 contextName:(id)arg4 reply:(id)arg5 ;
-(void)preflightBottledPeer:(id)arg0 dsid:(id)arg1 reply:(id)arg2 ;
-(void)preflightJoinWithCustodianRecoveryKey:(id)arg0 contextID:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(id)arg3 ;
-(void)preflightJoinWithInheritanceKey:(id)arg0 contextID:(id)arg1 inheritanceKey:(id)arg2 reply:(id)arg3 ;
-(void)refetchCKKSPolicy:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)removeCustodianRecoveryKey:(id)arg0 contextID:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)removeFriendsInClique:(id)arg0 context:(id)arg1 peerIDs:(id)arg2 reply:(id)arg3 ;
-(void)removeInheritanceKey:(id)arg0 contextID:(id)arg1 uuid:(id)arg2 reply:(id)arg3 ;
-(void)removeLocalSecureElementIdentityPeerID:(id)arg0 contextID:(id)arg1 secureElementIdentityPeerID:(id)arg2 reply:(id)arg3 ;
-(void)reset:(id)arg0 ;
-(void)resetAccountCDPContents:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)resetAndEstablish:(id)arg0 context:(id)arg1 altDSID:(id)arg2 resetReason:(NSInteger)arg3 reply:(id)arg4 ;
-(void)restore:(id)arg0 contextID:(id)arg1 bottleSalt:(id)arg2 entropy:(id)arg3 bottleID:(id)arg4 reply:(id)arg5 ;
-(void)restore:(id)arg0 dsid:(id)arg1 secret:(id)arg2 escrowRecordID:(id)arg3 reply:(id)arg4 ;
-(void)rpcEpochWithConfiguration:(id)arg0 reply:(id)arg1 ;
-(void)rpcJoinWithConfiguration:(id)arg0 vouchData:(id)arg1 vouchSig:(id)arg2 reply:(id)arg3 ;
-(void)rpcPrepareIdentityAsApplicantWithConfiguration:(id)arg0 reply:(id)arg1 ;
-(void)rpcVoucherWithConfiguration:(id)arg0 peerID:(id)arg1 permanentInfo:(id)arg2 permanentInfoSig:(id)arg3 stableInfo:(id)arg4 stableInfoSig:(id)arg5 reply:(id)arg6 ;
-(void)scrubBottledPeer:(id)arg0 bottleID:(id)arg1 reply:(id)arg2 ;
-(void)setCDPEnabled:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;
-(void)setLocalSecureElementIdentity:(id)arg0 contextID:(id)arg1 secureElementIdentity:(id)arg2 reply:(id)arg3 ;
-(void)setUserControllableViewsSyncStatus:(id)arg0 contextID:(id)arg1 enabled:(BOOL)arg2 reply:(id)arg3 ;
-(void)signIn:(id)arg0 container:(id)arg1 context:(id)arg2 reply:(id)arg3 ;
-(void)signOut:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)signingKey:(id)arg0 ;
-(void)startOctagonStateMachine:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)status:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)tapToRadar:(id)arg0 description:(id)arg1 radar:(id)arg2 reply:(id)arg3 ;
-(void)waitForOctagonUpgrade:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)waitForPriorityViewKeychainDataRecovery:(id)arg0 contextID:(id)arg1 reply:(id)arg2 ;


@end


#endif