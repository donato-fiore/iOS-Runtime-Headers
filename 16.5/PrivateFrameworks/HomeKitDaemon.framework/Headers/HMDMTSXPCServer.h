// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMTSXPCSERVER_H
#define HMDMTSXPCSERVER_H

@class HMFObject, MTSXPCServer;


#import "HMDMTSDeviceSetupServer.h"
#import "HMDMTSPairingServer.h"

@interface HMDMTSXPCServer : HMFObject

@property (readonly) HMDMTSDeviceSetupServer *deviceSetupServer; // ivar: _deviceSetupServer
@property (readonly) HMDMTSPairingServer *pairingServer; // ivar: _pairingServer
@property (readonly) MTSXPCServer *xpcServer; // ivar: _xpcServer


-(id)initWithPairingServer:(id)arg0 deviceSetupServer:(id)arg1 ;
-(id)initWithPairingServer:(id)arg0 deviceSetupServer:(id)arg1 xpcServer:(id)arg2 ;
-(void)start;


@end


#endif