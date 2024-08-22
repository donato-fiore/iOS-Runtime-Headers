// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSEXTERNALCNNPOOLINGAVERAGE_H
#define MPSEXTERNALCNNPOOLINGAVERAGE_H

@class NSString;
@protocol MPSExternalCNNPoolingAverage;


#import "MPSExternalCNNUnary.h"

@interface MPSExternalCNNPoolingAverage : MPSExternalCNNUnary <MPSExternalCNNPoolingAverage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)encodeBatchWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;
-(NSUInteger)encodeToCommandBuffer:(id)arg0 computeCommandEncoder:(id)arg1 options:(NSUInteger)arg2 sourceTexture:(id)arg3 sourceInfo:(struct ? *)arg4 destinationTexture:(id)arg5 destinationInfo:(struct ? *)arg6 ;
-(NSUInteger)encodeToCommandBuffer:(id)arg0 computeCommandEncoder:(id)arg1 options:(NSUInteger)arg2 sourceTexture:(id)arg3 sourceInfo:(struct ? *)arg4 destinationTexture:(id)arg5 destinationInfo:(struct ? *)arg6 zeroPadSizeX:(NSUInteger)arg7 zeroPadSizeY:(NSUInteger)arg8 ;
-(NSUInteger)encodeWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;


@end


#endif