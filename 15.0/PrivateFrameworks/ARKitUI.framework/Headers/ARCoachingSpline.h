// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARCOACHINGSPLINE_H
#define ARCOACHINGSPLINE_H


#import <Foundation/Foundation.h>


@interface ARCoachingSpline : NSObject {
    vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> _controlPoints;
    vector<ARCoachingPatchData, std::allocator<ARCoachingPatchData>> _patchData;
    vector<unsigned short, std::allocator<unsigned short>> _indices;
    float _relativeThickness;
    float _cap_error;
}


@property (readonly, nonatomic) *? controlPoints;
@property (readonly, nonatomic) *unsigned short indices;
@property (readonly, nonatomic) unsigned int numControlPoints;
@property (readonly, nonatomic) unsigned int numIndices;
@property (readonly, nonatomic) *? patchData;
@property (readonly, nonatomic) unsigned int patchDataLength;


+(id)interpolateTangentp1p2p3t;
+(id)interpolatep1p2p3t;
-(id)initWithPoints:(*unsigned int)arg0 numPoints:(float)arg1 relativeThickness:(NSUInteger)arg2 pattern:(struct ? )arg3 mat;
-(void)genLeftCapWithWidth:(float)arg0 ;
-(void)genRightCapWithWidth:(float)arg0 ;
-(void)genTubeIndicesWithPattern:(NSUInteger)arg0 ;


@end


#endif