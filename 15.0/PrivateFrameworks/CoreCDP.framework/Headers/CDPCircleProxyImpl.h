// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPCIRCLEPROXYIMPL_H
#define CDPCIRCLEPROXYIMPL_H

@class OTClique, NSString;
@protocol CDPDCircleProxy;

#import <Foundation/Foundation.h>

#import "CDPContext.h"

@interface CDPCircleProxyImpl : NSObject <CDPDCircleProxy>

 {
    OTClique *_clique;
}


@property (readonly, nonatomic) CDPContext *cdpContext; // ivar: _cdpContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_registerCredentialsOnlyIfNeeded:(BOOL)arg0 ;
-(BOOL)anyPeerHasEnabledViewsInSet:(id)arg0 error:(*id)arg1 ;
-(BOOL)canAuthenticate;
-(BOOL)fetchUserControllableViewsSyncingEnabled:(*id)arg0 ;
-(BOOL)hasNonViewAwarePeers;
-(BOOL)isLastBackupMakingPeer:(*id)arg0 ;
-(BOOL)registerCredentials;
-(BOOL)registerCredentialsIfMissing;
-(BOOL)removeNonViewAwarePeers:(*id)arg0 ;
-(BOOL)removeThisDeviceFromCircle:(*id)arg0 ;
-(BOOL)requestToJoinCircle:(*id)arg0 ;
-(BOOL)requestToJoinCircleAfterRestore:(*id)arg0 ;
-(BOOL)setUserControllableViewsSyncStatus:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeCircleViews;
-(BOOL)tryRegisteringCredentials;
-(BOOL)waitForInitialSync:(*id)arg0 ;
-(NSInteger)_authenticatedCliqueStatus:(*id)arg0 ;
-(NSInteger)_cliqueStatus:(*id)arg0 ;
-(NSUInteger)cachedCliqueStatus:(*id)arg0 ;
-(NSUInteger)cdpStatusFromOT:(NSInteger)arg0 ;
-(NSUInteger)cdpStatusFromSOS:(int)arg0 ;
-(NSUInteger)combinedCachedCircleStatus:(*id)arg0 ;
-(NSUInteger)combinedCircleStatus:(*id)arg0 ;
-(id)_pairingChannelContext;
-(id)contextType;
-(id)generateRecoveryKeyWithInfo:(id)arg0 error:(*id)arg1 ;
-(id)generateVerifierWithRecoveryKey:(id)arg0 error:(*id)arg1 ;
-(id)initWithContext:(id)arg0 ;
-(id)pairingChannelAcceptor;
-(id)pairingChannelInitiator;
-(id)peerDeviceNamesByPeerID;
-(id)peerId;
-(id)requestToResetProtectedData:(*id)arg0 ;
-(int)_sos_authenticatedCircleStatus:(*id)arg0 ;
-(int)_sos_circleStatus:(*id)arg0 ;
-(int)cachedSOSCircleStatus:(*id)arg0 ;
-(int)nonCachedSOSCircleStatus:(*id)arg0 ;
-(int)sos_circleStatus:(*id)arg0 ;
-(void)didJoinCircleAfterRecovery:(id)arg0 ;
-(void)recoverOctagonUsingCustodianInfo:(id)arg0 completion:(id)arg1 ;
-(void)reportFailure:(id)arg0 ;
-(void)reportSuccess;
-(void)waitForUpdate;


@end


#endif