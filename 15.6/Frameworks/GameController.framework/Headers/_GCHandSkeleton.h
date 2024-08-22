// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCHANDSKELETON_H
#define _GCHANDSKELETON_H


#import <Foundation/Foundation.h>

#import "GCPhysicalInputProfile.h"

@interface _GCHandSkeleton : NSObject {
    GCPhysicalInputProfile *_physicalInput;
    NSInteger _handedness;
    ? _boneData;
    ? referenceSkeletons;
    ? referenceDQs;
    NSInteger _interpolationMethod;
    float _lastFingerPositions;
}


@property (readonly) BOOL rightHand;


-(BOOL)fingerPositionsChangedForCurlAmts:(struct ? *)arg0 ;
-(float)getFingerCurlAmt:(struct ? *)arg0 boneType:(NSInteger)arg1 ;
-(id)initWithBoneData:(struct ? )arg0 profile:(id)arg1 handedness:(NSInteger)arg2 ;
-(struct ? )_boneDataWithMotionRange:(NSInteger)arg0 curlAmts:(struct ? *)arg1 ;
-(struct ? )_boneDataWithMotionRangeDq:(NSInteger)arg0 curlAmts:(struct ? *)arg1 ;
-(struct ? )_convertToModelSpaceUsingDQs:(struct ? *)arg0 ;
-(struct ? )_convertToModelSpaceUsingMatrices:(struct ? *)arg0 ;
-(struct ? )boneDataWithTransformSpace:(NSInteger)arg0 motionRange:(NSInteger)arg1 ;
-(struct ? )boneDataWithTransformSpace:(NSInteger)arg0 referencePose:(NSInteger)arg1 ;
-(void)_setInterpolationMethod:(NSInteger)arg0 ;


@end


#endif