// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNFACEPRINTINFERENCENETWORKDESCRIPTOR_H
#define VNFACEPRINTINFERENCENETWORKDESCRIPTOR_H



#import "VNInferenceNetworkDescriptor.h"
#import "VNTensorDescriptor.h"

@interface VNFaceprintInferenceNetworkDescriptor : VNInferenceNetworkDescriptor

@property (readonly, nonatomic) VNTensorDescriptor *faceprintOutput; // ivar: _faceprintOutput


-(id)initWithNetworkFileURL:(id)arg0 version:(id)arg1 networkHeadVersions:(id)arg2 inputImage:(id)arg3 faceprintOutput:(id)arg4 confidencesOutput:(id)arg5 ;


@end


#endif