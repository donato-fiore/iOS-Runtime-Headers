// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AR3DSKELETONDETECTIONRESULT_H
#define AR3DSKELETONDETECTIONRESULT_H

@class ABPK2DDetectionResult;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AR3DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _jointsVector;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> _jointsVectorLocalSpace;
}


@property (readonly, nonatomic) NSUInteger jointCount;
@property ? joints;
@property ? jointsLocalSpace;
@property (readonly, nonatomic) ABPK2DDetectionResult *skeletonDetectionResult2D; // ivar: _skeletonDetectionResult2D


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isJointTracked:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createResultScaledByFactor:(float)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(id)arg1 referenceDetectionResult;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif