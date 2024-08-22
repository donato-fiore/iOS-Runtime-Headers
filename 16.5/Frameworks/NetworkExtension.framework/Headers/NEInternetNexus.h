// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEINTERNETNEXUS_H
#define NEINTERNETNEXUS_H

@class NWRemotePacketProxy;


#import "NENexus.h"

@interface NEInternetNexus : NENexus {
    *nw_protocol _utunProtocol;
}


@property (retain) NWRemotePacketProxy *packetProxy; // ivar: _packetProxy
@property (readonly) *NEVirtualInterface_s virtualInterface;


-(?)setDefaultInputHandler;
-(BOOL)setUseFlowswitch:(BOOL)arg0 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 shouldCreateKernelChannel:(BOOL)arg2 ;
-(void)dealloc;
-(void)setRemotePacketProxy:(id)arg0 ;


@end


#endif