// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCGPUNEURON_H
#define _MLCGPUNEURON_H

@class MLCGPULayer;



@interface _MLCGPUNeuron : MLCGPULayer



+(id)createMPSNeuronDescriptorWith:(id)arg0 ;
+(id)layerWithDevice:(id)arg0 descriptor:(id)arg1 ;
+(int)mpsNeurontypeFrom:(int)arg0 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;


@end


#endif