// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNMTLSKIN_H
#define SCNMTLSKIN_H

@class MTLStageInputOutputDescriptor;
@protocol MTLBuffer;

#import <Foundation/Foundation.h>

#import "SCNMTLComputePipeline.h"

@interface SCNMTLSkin : NSObject {
    unsigned int _vertexCount;
    BOOL _needNormal;
    BOOL _needTangent;
    id<MTLBuffer> *_vertexWeightIndicesBuffer;
    id<MTLBuffer> *_boneIndicesBuffer;
    id<MTLBuffer> *_boneWeightsBuffer;
    SCNMTLComputePipeline *_computePS;
    MTLStageInputOutputDescriptor *_computeStageDesc;
}




-(?)initWithSkinner:(?)arg0 baseMesh:(?)arg1 baseGeometryresourceManager;
-(void)dealloc;
-(void)skinMesh:(id)arg0 with:(id)arg1 skinner:(struct __C3DSkinner *)arg2 renderContext:(id)arg3 ;


@end


#endif