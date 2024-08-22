// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DSXPCSERVER_H
#define DSXPCSERVER_H

@class NSMutableSet;
@protocol OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DSScanManager.h"
#import "DSAdvertiseManager.h"
#import "DSCohortManager.h"
#import "DSDeviceContext.h"

@interface DSXPCServer : NSObject {
    BOOL _shouldActivate;
    NSObject<OS_xpc_object> *_xpcListener;
    BOOL _shouldScanDSInfo;
    BOOL _shouldScanDSAction;
    DSScanManager *_scanManager;
    DSAdvertiseManager *_advertiseManager;
    BOOL _shouldAdvertiseDSInfo;
    BOOL _shouldAdvertiseDSAction;
}


@property (retain, nonatomic) DSCohortManager *cohortManager; // ivar: _cohortManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) DSDeviceContext *myDeviceContext; // ivar: _myDeviceContext
@property (readonly, nonatomic) NSMutableSet *xpcConnections; // ivar: _xpcConnections


-(id)init;
-(void)_activate;
-(void)_deviceFoundHandler:(id)arg0 ;
-(void)_deviceLostHandler:(id)arg0 ;
-(void)_ensureAdvertiserStarted;
-(void)_ensureAdvertiserStopped;
-(void)_ensureScannerStarted;
-(void)_ensureScannerStopped;
-(void)_handleXPCConnection:(id)arg0 ;
-(void)_invalidate;
-(void)_receivedXPCObject:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)removeXPCConnection:(id)arg0 ;
-(void)updateAdvertiser;
-(void)updateScanner;


@end


#endif