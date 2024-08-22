// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEINTERNETNEXUS_H
#define NEINTERNETNEXUS_H

@class NWRemotePacketProxy;


#import "NENexus.h"

@interface NEInternetNexus : NENexus

@property (retain) NWRemotePacketProxy *packetProxy; // ivar: _packetProxy
@property *nw_protocol utunProtocol; // ivar: _utunProtocol
@property (readonly) *NEVirtualInterface_s virtualInterface;


-(?)setDefaultInputHandler;
-(BOOL)setUseFlowswitch:(BOOL)arg0 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 shouldCreateKernelChannel:(BOOL)arg2 ;
-(void)connectNewFlow:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFlow:(id)arg0 ;
-(void)setRemotePacketProxy:(id)arg0 ;


@end


#endif