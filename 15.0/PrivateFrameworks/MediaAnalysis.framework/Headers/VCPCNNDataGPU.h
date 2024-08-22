// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPCNNDATAGPU_H
#define VCPCNNDATAGPU_H



#import "VCPCNNData.h"

@interface VCPCNNDataGPU : VCPCNNData



-(int)allocBuffers:(BOOL)arg0 ;
-(int)bufferAllocGPU;
-(int)convertCPUData2GPU;
-(int)convertGPUData2CPU;
-(int)reallocGPUTemporalBuffers;


@end


#endif