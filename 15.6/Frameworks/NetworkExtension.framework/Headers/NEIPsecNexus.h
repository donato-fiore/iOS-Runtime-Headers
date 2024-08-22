// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIPSECNEXUS_H
#define NEIPSECNEXUS_H

@class NSArray;


#import "NEInternetNexus.h"

@interface NEIPsecNexus : NEInternetNexus

@property (retain, nonatomic) NSArray *nexusInstances; // ivar: _nexusInstances


-(?)setDefaultInputHandler;
-(BOOL)initializeWithCount:(unsigned int)arg0 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 enableWithChannelCount:(unsigned int)arg2 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 enableWithChannelCount:(unsigned int)arg2 netifRingSize:(unsigned int)arg3 kernelPipeTxRingSize:(unsigned int)arg4 kernelPipeRxRingSize:(unsigned int)arg5 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 enableWithChannelCount:(unsigned int)arg2 netifRingSize:(unsigned int)arg3 kernelPipeTxRingSize:(unsigned int)arg4 kernelPipeRxRingSize:(unsigned int)arg5 execUUID:(id)arg6 ;
-(id)initWithName:(id)arg0 delegate:(id)arg1 shouldCreateKernelChannel:(BOOL)arg2 ;
-(void)setRemotePacketProxy:(id)arg0 ;


@end


#endif