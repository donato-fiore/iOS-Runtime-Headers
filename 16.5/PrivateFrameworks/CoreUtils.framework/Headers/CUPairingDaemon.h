// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUPAIRINGDAEMON_H
#define CUPAIRINGDAEMON_H

@class NSData, NSMutableSet, NSXPCListener, NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUHomeKitManager.h"

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate>

 {
    CUHomeKitManager *_homeKitManager;
    int _rpIdentityNotifier;
    NSData *_rpSelfIRK;
    NSUInteger _stateHandle;
    NSMutableSet *_xpcConnections;
    NSXPCListener *_xpcListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) BOOL testMode; // ivar: _testMode


+(id)sharedPairingDaemon;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_copyHomeKitExWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyHomeKitWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyHomeKitWithOptionsHAP:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyHomeKitWithOptionsKeychain:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyIdentityWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyOrCreateWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_copyPairedPeersWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)_findHomeKitExPairedPeer:(id)arg0 options:(NSUInteger)arg1 error:(*int)arg2 ;
-(id)_findHomeKitPairedPeer:(id)arg0 options:(NSUInteger)arg1 error:(*int)arg2 ;
-(id)_findPairedPeer:(id)arg0 options:(NSUInteger)arg1 error:(*int)arg2 ;
-(id)copyIdentityWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)copyPairedPeersWithOptions:(NSUInteger)arg0 error:(*int)arg1 ;
-(id)detailedDescription;
-(id)findPairedPeer:(id)arg0 options:(NSUInteger)arg1 error:(*int)arg2 ;
-(id)init;
-(int)_deleteIdentityWithOptions:(NSUInteger)arg0 ;
-(int)_removePairedPeer:(id)arg0 options:(NSUInteger)arg1 removeAdminAllowed:(BOOL)arg2 ;
-(int)_saveIdentity:(id)arg0 options:(NSUInteger)arg1 ;
-(int)_savePairedPeer:(id)arg0 options:(NSUInteger)arg1 removeAdminAllowed:(BOOL)arg2 ;
-(int)deleteIdentityWithOptions:(NSUInteger)arg0 ;
-(int)removePairedPeer:(id)arg0 options:(NSUInteger)arg1 ;
-(int)removePairedPeer:(id)arg0 options:(NSUInteger)arg1 removeAdminAllowed:(BOOL)arg2 ;
-(int)savePairedPeer:(id)arg0 options:(NSUInteger)arg1 ;
-(int)savePairedPeer:(id)arg0 options:(NSUInteger)arg1 removeAdminAllowed:(BOOL)arg2 ;
-(void)_activate;
-(void)_connectionInvalidated:(id)arg0 ;
-(void)_invalidate;
-(void)_removeDups:(id)arg0 ;
-(void)_rpIdentityUpdate;
-(void)activate;
-(void)dealloc;
-(void)getIdentityWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)invalidate;
-(void)reset;


@end


#endif