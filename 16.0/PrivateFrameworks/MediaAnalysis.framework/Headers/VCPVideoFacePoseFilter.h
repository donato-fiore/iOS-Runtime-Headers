// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPVIDEOFACEPOSEFILTER_H
#define VCPVIDEOFACEPOSEFILTER_H


#import <Foundation/Foundation.h>


@interface VCPVideoFacePoseFilter : NSObject {
    Matrix<float, 12U, 1U, false> _previousState;
    Matrix<float, 12U, 12U, false> _previousCovar;
    BOOL _previousStateIsValid;
}




-(int)eulerAnglesToRotation:(float)arg0 R:(float)arg1 ;
-(int)filteringPose:(struct ? *)arg0 ;
-(int)kalmanFiltering:(float)arg0 T:(float)arg1 ;
-(int)rotationToEulerAngles:(float)arg0 angles:(float)arg1 ;
-(void)reset;


@end


#endif