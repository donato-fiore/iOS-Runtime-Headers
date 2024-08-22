// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNCONVBLOCKSCALAR_H
#define VCPCNNCONVBLOCKSCALAR_H



#import "VCPCNNConvBlock.h"

@interface VCPCNNConvBlockScalar : VCPCNNConvBlock



-(int)forward;
-(int)readFromDisk:(struct __sFILE *)arg0 quantFactor:(short)arg1 ;


@end


#endif