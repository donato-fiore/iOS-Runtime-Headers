// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBSCALABLEPIPEMANAGER_H
#define CBSCALABLEPIPEMANAGER_H

@class NSSet, NSHashTable;
@protocol CBScalablePipeManagerDelegate;


#import "CBManager.h"

@interface CBScalablePipeManager : CBManager {
    ? _delegateFlags;
}


@property (weak, nonatomic) NSObject<CBScalablePipeManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, retain, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (readonly, retain, nonatomic) NSHashTable *pipes; // ivar: _pipes


-(BOOL)isMsgAllowedWhenOff:(unsigned short)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 ;
-(id)pipeForName:(id)arg0 identifier:(id)arg1 ;
-(id)sharedPairingAgent;
-(void)dealloc;
-(void)handleEndpointAdded:(id)arg0 ;
-(void)handleEndpointRemoved:(id)arg0 ;
-(void)handleHostStateUpdated:(id)arg0 ;
-(void)handleMsg:(unsigned short)arg0 args:(id)arg1 ;
-(void)handlePipeConnected:(id)arg0 ;
-(void)handlePipeDisconnected:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)orphanPipes;
-(void)registerEndpoint:(id)arg0 type:(NSInteger)arg1 priority:(NSInteger)arg2 ;
-(void)registerEndpoint:(id)arg0 type:(NSInteger)arg1 priority:(NSInteger)arg2 options:(id)arg3 ;
-(void)registerEndpoint:(id)arg0 type:(NSInteger)arg1 priority:(NSInteger)arg2 transport:(NSInteger)arg3 ;
-(void)registerEndpoint:(id)arg0 type:(NSInteger)arg1 priority:(NSInteger)arg2 transport:(NSInteger)arg3 requireEncryption:(BOOL)arg4 ;
-(void)setLinkRequirementsForPeer:(id)arg0 packetsPerSecond:(unsigned int)arg1 inputBytesPerSecond:(unsigned int)arg2 outputBytesPerSecond:(unsigned int)arg3 ;
-(void)setLinkRequirementsForPeer:(id)arg0 withClientName:(id)arg1 packetsPerSecond:(unsigned int)arg2 inputBytesPerSecond:(unsigned int)arg3 outputBytesPerSecond:(unsigned int)arg4 ;
-(void)setLinkRequirementsForPeerWithLatency:(id)arg0 latencyInMs:(unsigned int)arg1 inputBytesPerSecond:(unsigned int)arg2 outputBytesPerSecond:(unsigned int)arg3 ;
-(void)unregisterAllEndpoints;
-(void)unregisterEndpoint:(id)arg0 ;


@end


#endif