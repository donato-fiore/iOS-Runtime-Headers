// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AR2D3DSKELETONLIFTINGDATA_H
#define AR2D3DSKELETONLIFTINGDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AR2D3DSkeletonLiftingData : NSObject <NSSecureCoding, NSCopying>

 {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rawJointsUsedForLifting;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJointsUsedForLifting;
    array<float, 32UL> _multiArray;
    NSInteger _rotationNeeded;
}


@property (readonly, nonatomic) NSUInteger jointCount;
@property ? joints;
@property (readonly, nonatomic) *float liftingData3D;
@property (readonly, nonatomic) NSUInteger liftingData3DElementCount;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHumanForLifting:(*void)arg0 imageSize:(struct CGSize )arg1 rotation:(NSInteger)arg2 croppedRect:(struct CGRect )arg3 ;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(NSInteger)arg1 rotation:(struct CGRect )arg2 croppedRect:(*float)arg3 liftingData3D:(NSUInteger)arg4 liftingData3DElementCount;
-(void)_prepareLiftingInput:(*void)arg0 jointTrackingState:(*void)arg1 imageSize:(struct CGSize )arg2 pMultiArray:(*float)arg3 ;
-(void)_rotateAndUndoCroppingFromRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif