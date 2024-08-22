// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AR2DSKELETONDETECTIONRESULT_H
#define AR2DSKELETONDETECTIONRESULT_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "AR2D3DSkeletonLiftingData.h"

@interface AR2DSkeletonDetectionResult : NSObject <NSSecureCoding, NSCopying>

 {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rawJoints;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJoints;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rawJointsLocalSpace;
    vector<unsigned char, std::allocator<unsigned char>> _jointTrackingStates;
}


@property (readonly, nonatomic) NSUInteger jointCount;
@property (readonly, nonatomic) char * jointTrackingStates;
@property ? joints;
@property ? jointsLocalSpace;
@property (readonly, nonatomic) AR2D3DSkeletonLiftingData *liftingData; // ivar: _liftingData
@property (readonly, nonatomic) *float liftingData3D;
@property (readonly, nonatomic) NSUInteger liftingJointCount;
@property ? rawJointsOutput;
@property (readonly, nonatomic) NSInteger rotation; // ivar: _rotation
@property (readonly, nonatomic) NSUInteger trackedJointCount;


-(BOOL)isEqual:(id)arg0 ;
-(float)computeDistanceBetweenSkeletonDetectionResult:(id)arg0 ;
-(id)alignSkeleton:(id)arg0 rotationNeeded:(NSInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJoints:(*char *)arg0 trackingStates:(NSUInteger)arg1 numberOfJoints:(NSInteger)arg2 rotation:(struct CGRect )arg3 croppedRect:(id)arg4 liftingData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif