// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKRESULTRETARGETING_H
#define ABPKRESULTRETARGETING_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "ABPK3DLiftingResult.h"

@interface ABPKResultRetargeting : NSObject {
    vector<simd_float4x4, std::allocator<simd_float4x4>> _modelTransforms;
    vector<ABPKSRT, std::allocator<ABPKSRT>> _localTransformsSRT;
    vector<simd_float4x4, std::allocator<simd_float4x4>> _localTransforms;
    ABPK3DLiftingResult *_liftingResult;
}


@property (nonatomic) float estimatedScale; // ivar: _estimatedScale
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) *? jointLocalTransforms;
@property (readonly, nonatomic) *? jointModelTransforms;
@property (readonly, nonatomic) NSUInteger jointTransformCount;
@property (readonly, nonatomic) *? localJointTransformsSRT;


-(id)initWithModelJointTransforms:(struct ? *)arg0 localJointTransformsSRT:(struct ? *)arg1 numberOfTransforms:(NSUInteger)arg2 liftedSkeletonData:(id)arg3 identifier:(id)arg4 ;


@end


#endif