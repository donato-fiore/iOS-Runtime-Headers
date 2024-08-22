// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSEXTERNALCNNBINARY_H
#define MPSEXTERNALCNNBINARY_H

@class MPSExternalPluginBase, NSString;
@protocol MPSExternalCNNBinary;



@interface MPSExternalCNNBinary : MPSExternalPluginBase <MPSExternalCNNBinary>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)encodeBatchWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;
-(NSUInteger)encodeToCommandBuffer:(id)arg0 computeCommandEncoder:(id)arg1 options:(NSUInteger)arg2 primaryTexture:(id)arg3 primaryInfo:(struct ? *)arg4 secondaryTexture:(id)arg5 secondaryInfo:(struct ? *)arg6 destinationTexture:(id)arg7 destinationInfo:(struct ? *)arg8 ;
-(NSUInteger)encodeWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;


@end


#endif