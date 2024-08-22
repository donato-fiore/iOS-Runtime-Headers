// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSEXTERNALCNNUNARY_H
#define MPSEXTERNALCNNUNARY_H

@class MPSExternalPluginBase, NSString;
@protocol MPSExternalCNNUnary;



@interface MPSExternalCNNUnary : MPSExternalPluginBase <MPSExternalCNNUnary>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)encodeBatchWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;
-(NSUInteger)encodeToCommandBuffer:(id)arg0 computeCommandEncoder:(id)arg1 options:(NSUInteger)arg2 pluginOptions:(NSUInteger)arg3 sourceTexture:(id)arg4 sourceInfo:(struct ? *)arg5 destinationTexture:(id)arg6 destinationInfo:(struct ? *)arg7 ;
-(NSUInteger)encodeToCommandBuffer:(id)arg0 computeCommandEncoder:(id)arg1 options:(NSUInteger)arg2 sourceTexture:(id)arg3 sourceInfo:(struct ? *)arg4 destinationTexture:(id)arg5 destinationInfo:(struct ? *)arg6 ;
-(NSUInteger)encodeWithFilter:(id)arg0 encoder:(id)arg1 commandBuffer:(id)arg2 callInfo:(struct ? *)arg3 ;


@end


#endif