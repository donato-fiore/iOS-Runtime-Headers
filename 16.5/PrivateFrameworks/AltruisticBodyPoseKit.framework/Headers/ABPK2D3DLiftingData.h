// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPK2D3DLIFTINGDATA_H
#define ABPK2D3DLIFTINGDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ABPK2D3DLiftingData : NSObject <NSSecureCoding>

 {
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rawJointsUsedForLifting;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _rotatedJointsUsedForLifting;
    array<float, 32UL> _multiArray;
    array<float, 32UL> _unnormalizedMultiArray;
    NSInteger _rotationNeeded;
}


@property (readonly, nonatomic) NSUInteger jointCount;
@property ? joints;
@property (readonly, nonatomic) *float liftingData3D;
@property (readonly, nonatomic) NSUInteger liftingData3DElementCount;
@property ? rotatedJoints;
@property (readonly, nonatomic) *float unnormalizedLiftingData3D;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHumanForLifting:(*void)arg0 imageSize:(struct CGSize )arg1 rotation:(NSInteger)arg2 croppedRect:(struct CGRect )arg3 ;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(*float)arg1 liftingData3D:(NSUInteger)arg2 liftingData3DElementCount;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(NSInteger)arg1 rotation:(struct CGRect )arg2 croppedRect:(*float)arg3 liftingData3D:(NSUInteger)arg4 liftingData3DElementCount;
-(id)initWithJoints:(*NSUInteger)arg0 numberOfJoints:(struct CGSize )arg1 imageSize;
-(void)_rotateAndUndoCroppingFromRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareLiftingInput:(struct CGSize *)arg0 imageSize:(*float)arg1 pUnnormalizedMultiArray:(*float)arg2 pMultiArray;


@end


#endif