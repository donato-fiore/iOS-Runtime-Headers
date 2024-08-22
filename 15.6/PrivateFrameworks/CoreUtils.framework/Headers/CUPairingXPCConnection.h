// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUPAIRINGXPCCONNECTION_H
#define CUPAIRINGXPCCONNECTION_H

@class NSXPCConnection;
@protocol CUPairingDaemonXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUPairingDaemon.h"

@interface CUPairingXPCConnection : NSObject <CUPairingDaemonXPCInterface>

 {
    CUPairingDaemon *_daemon;
    BOOL _pmEntitledDeleteIdentity;
    BOOL _pmEntitledHomeKit;
    BOOL _pmEntitledRead;
    BOOL _pmEntitledRemoveAdmin;
    BOOL _pmEntitledRemovePeer;
    BOOL _pmEntitledWrite;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _monitoring;
    NSXPCConnection *_xpcCnx;
}




-(int)_entitled:(id)arg0 state:(*BOOL)arg1 label:(id)arg2 ;
-(void)connectionInvalidated;
-(void)deletePairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)findPairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getPairedPeersWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getPairingIdentityWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)removePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)savePairedPeer:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)showWithCompletion:(id)arg0 ;
-(void)startMonitoringWithOptions:(NSUInteger)arg0 ;


@end


#endif