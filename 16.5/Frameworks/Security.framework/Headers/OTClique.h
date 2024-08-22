// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OTCLIQUE_H
#define OTCLIQUE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "OTConfigurationContext.h"

@interface OTClique : NSObject

@property (copy, nonatomic) NSString *cliqueMemberIdentifier; // ivar: _cliqueMemberIdentifier
@property (readonly, nonatomic) OTConfigurationContext *ctx; // ivar: _ctx


+(BOOL)isCloudServicesAvailable;
+(BOOL)platformSupportsSOS;
+(BOOL)setCDPEnabled:(id)arg0 error:(*id)arg1 ;
+(NSInteger)getCDPStatus:(id)arg0 error:(*id)arg1 ;
+(id)fetchEscrowRecordsInternal:(id)arg0 error:(*id)arg1 ;
+(id)findOptimalBottleIDsWithContextData:(id)arg0 error:(*id)arg1 ;
+(id)newFriendsWithContextData:(id)arg0 error:(*id)arg1 ;
+(id)newFriendsWithContextData:(id)arg0 resetReason:(NSInteger)arg1 error:(*id)arg2 ;
+(id)performEscrowRecoveryWithContextData:(id)arg0 escrowArguments:(id)arg1 error:(*id)arg2 ;
+(id)recoverWithContextData:(id)arg0 bottleID:(id)arg1 escrowedEntropy:(id)arg2 error:(*id)arg3 ;
+(id)resetProtectedData:(id)arg0 error:(*id)arg1 ;
+(id)resetProtectedData:(id)arg0 idmsTargetContext:(id)arg1 idmsCuttlefishPassword:(id)arg2 notifyIdMS:(BOOL)arg3 error:(*id)arg4 ;
+(void)createCustodianRecoveryKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
+(void)createInheritanceKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
+(void)generateInheritanceKey:(id)arg0 uuid:(id)arg1 reply:(id)arg2 ;
+(void)preflightRecoverOctagonUsingCustodianRecoveryKey:(id)arg0 custodianRecoveryKey:(id)arg1 reply:(id)arg2 ;
+(void)preflightRecoverOctagonUsingInheritanceKey:(id)arg0 inheritanceKey:(id)arg1 reply:(id)arg2 ;
+(void)recoverOctagonUsingCustodianRecoveryKey:(id)arg0 custodianRecoveryKey:(id)arg1 reply:(id)arg2 ;
+(void)recoverOctagonUsingInheritanceKey:(id)arg0 inheritanceKey:(id)arg1 reply:(id)arg2 ;
+(void)removeCustodianRecoveryKey:(id)arg0 custodianRecoveryKeyUUID:(id)arg1 reply:(id)arg2 ;
+(void)removeInheritanceKey:(id)arg0 inheritanceKeyUUID:(id)arg1 reply:(id)arg2 ;
+(void)setNewRecoveryKeyWithData:(id)arg0 recoveryKey:(id)arg1 reply:(id)arg2 ;
+(void)storeInheritanceKey:(id)arg0 ik:(id)arg1 reply:(id)arg2 ;
-(BOOL)accountUserKeyAvailable;
-(BOOL)establish:(*id)arg0 ;
-(BOOL)fetchUserControllableViewsSyncingEnabled:(*id)arg0 ;
-(BOOL)isLastFriend:(*id)arg0 ;
-(BOOL)joinAfterRestore:(*id)arg0 ;
-(BOOL)leaveClique:(*id)arg0 ;
-(BOOL)peersHaveViewsEnabled:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeFriendsInClique:(id)arg0 error:(*id)arg1 ;
-(BOOL)requestToJoinCircle:(*id)arg0 ;
-(BOOL)resetAndEstablish:(NSInteger)arg0 idmsTargetContext:(id)arg1 idmsCuttlefishPassword:(id)arg2 notifyIdMS:(BOOL)arg3 accountSettings:(id)arg4 error:(*id)arg5 ;
-(BOOL)safariPasswordSyncingEnabled:(*id)arg0 ;
-(BOOL)setOctagonUserControllableViewsSyncEnabled:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setUserControllableViewsSyncStatus:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setUserCredentialsAndDSID:(id)arg0 password:(id)arg1 error:(*id)arg2 ;
-(BOOL)sosSafariPasswordSyncingEnabled:(*id)arg0 ;
-(BOOL)sosViewSet:(id)arg0 disabledViews:(id)arg1 ;
-(BOOL)tryUserCredentialsAndDSID:(id)arg0 password:(id)arg1 error:(*id)arg2 ;
-(BOOL)viewSet:(id)arg0 disabledViews:(id)arg1 ;
-(BOOL)waitForInitialSync:(*id)arg0 ;
-(BOOL)waitForOctagonUpgrade:(*id)arg0 ;
-(NSInteger)_fetchCliqueStatus:(id)arg0 error:(*id)arg1 ;
-(NSInteger)cachedCliqueStatus:(BOOL)arg0 error:(*id)arg1 ;
-(NSInteger)fetchCliqueStatus:(*id)arg0 ;
-(NSInteger)fetchCliqueStatus:(id)arg0 error:(*id)arg1 ;
-(id)copyPeerPeerInfo:(*id)arg0 ;
-(id)copyViewUnawarePeerInfo:(*id)arg0 ;
-(id)description;
-(id)initWithContextData:(id)arg0 ;
-(id)makeOTControl:(*id)arg0 ;
-(id)peerDeviceNamesByPeerID:(*id)arg0 ;
-(id)setupPairingChannelAsAcceptor:(id)arg0 ;
-(id)setupPairingChannelAsAcceptor:(id)arg0 error:(*id)arg1 ;
-(id)setupPairingChannelAsInitator:(id)arg0 error:(*id)arg1 ;
-(id)setupPairingChannelAsInitiator:(id)arg0 ;
-(void)fetchEscrowContents:(id)arg0 ;
-(void)performedCDPStateMachineRun:(id)arg0 success:(BOOL)arg1 error:(id)arg2 reply:(id)arg3 ;
-(void)performedFailureCDPStateMachineRun:(id)arg0 error:(id)arg1 reply:(id)arg2 ;
-(void)performedSuccessfulCDPStateMachineRun:(id)arg0 reply:(id)arg1 ;


@end


#endif