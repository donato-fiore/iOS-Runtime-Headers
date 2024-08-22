// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK3DLIFTINGRESULT_H
#define ABPK3DLIFTINGRESULT_H


#import <Foundation/Foundation.h>

#import "ABPK2DDetectionResult.h"

@interface ABPK3DLiftingResult : NSObject {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _jointsVector;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _rawNetworkOutputJointsVector;
}


@property (nonatomic) float estimatedScale; // ivar: _estimatedScale
@property (readonly, nonatomic) NSUInteger jointCount;
@property ? joints;
@property ? rawNetworkOutputJoints;
@property (readonly, nonatomic) ABPK2DDetectionResult *skeletonDetectionResult2D; // ivar: _skeletonDetectionResult2D


-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(id)createResultScaledByFactor:(float)arg0 ;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(*id)arg1 rawNetworkOutputsreferenceDetectionResult;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(id)arg1 referenceDetectionResult;
-(id)initWithJoints:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )arg0 rawNetworkOutputs:(struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> )arg1 referenceDetectionResult:(id)arg2 ;


@end


#endif