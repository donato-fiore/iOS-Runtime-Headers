// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2DDETECTIONRESULT_H
#define ABPK2DDETECTIONRESULT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ABPK2D3DLiftingData.h"

@interface ABPK2DDetectionResult : NSObject <NSSecureCoding>

 {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rawJoints;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJoints;
    vector<unsigned int, std::allocator<unsigned int>> _jointTrackingStates;
}


@property (readonly, nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (readonly, nonatomic) NSUInteger jointCount;
@property (readonly, nonatomic) *unsigned int jointTrackingStates;
@property ? joints;
@property (readonly, nonatomic) ABPK2D3DLiftingData *liftingData; // ivar: _liftingData
@property ? rawJointsOutput;
@property (readonly, nonatomic) NSInteger rotation; // ivar: _rotation


-(BOOL)isEqual:(id)arg0 ;
-(id)alignSkeleton:(id)arg0 rotationNeeded:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJoints:(**unsigned int)arg0 trackingStates:(NSUInteger)arg1 numberOfJoints:(NSInteger)arg2 rotation:(struct CGRect )arg3 croppedRect:(id)arg4 liftingData;
-(id)initWithJoints:(**unsigned int)arg0 trackingStates:(NSUInteger)arg1 numberOfJoints:(struct CGSize )arg2 imageResolution:(NSInteger)arg3 rotation:(struct CGRect )arg4 croppedRect:(id)arg5 liftingData;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif