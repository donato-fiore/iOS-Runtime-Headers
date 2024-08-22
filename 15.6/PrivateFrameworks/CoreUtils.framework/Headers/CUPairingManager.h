// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUPAIRINGMANAGER_H
#define CUPAIRINGMANAGER_H

@class NSXPCConnection, NSXPCListenerEndpoint;
@protocol CUPairingManagerXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUPairingManager : NSObject <CUPairingManagerXPCInterface>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _monitoring;
    NSUInteger _monitorOptions;
    NSXPCConnection *_xpcCnx;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *identityCreatedHandler; // ivar: _identityCreatedHandler
@property (copy, nonatomic) id *identityDeletedHandler; // ivar: _identityDeletedHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *pairedPeerAddedHandler; // ivar: _pairedPeerAddedHandler
@property (copy, nonatomic) id *pairedPeerChangedHandler; // ivar: _pairedPeerChangedHandler
@property (copy, nonatomic) id *pairedPeerRemovedHandler; // ivar: _pairedPeerRemovedHandler
@property (nonatomic) unsigned int targetUserID; // ivar: _targetUserID
@property (nonatomic) BOOL targetUserSession; // ivar: _targetUserSession
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint; // ivar: _testListenerEndpoint


-(id)init;
-(int)_ensureXPCStarted;
-(void)_deletePairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_findPairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_getPairedPeersWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)_getPairingIdentityWithOptions:(NSUInteger)arg0 tryCount:(unsigned int)arg1 completion:(id)arg2 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_removePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_savePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)_showWithCompletion:(id)arg0 ;
-(void)_startMonitoringWithOptions:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)deletePairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)findPairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getPairedPeersWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getPairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)pairedPeerAdded:(id)arg0 options:(NSUInteger)arg1 ;
-(void)pairedPeerChanged:(id)arg0 options:(NSUInteger)arg1 ;
-(void)pairedPeerRemoved:(id)arg0 options:(NSUInteger)arg1 ;
-(void)pairingIdentityCreated:(id)arg0 options:(NSUInteger)arg1 ;
-(void)pairingIdentityDeletedWithOptions:(NSUInteger)arg0 ;
-(void)removePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)savePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)showWithCompletion:(id)arg0 ;
-(void)startMonitoringWithOptions:(NSUInteger)arg0 ;


@end


#endif