// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNSCREENGAZEFACEOBJECTSTATE_H
#define VNSCREENGAZEFACEOBJECTSTATE_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "VNFaceObservation.h"

@interface VNScreenGazeFaceObjectState : NSObject {
    VNFaceObservation *_faceObservation;
    NSUInteger _imageWidth;
    NSUInteger _imageHeight;
    unsigned int _frameIndex;
    NSUUID *_uuid;
    _Geometry2D_point2D_ _leftPupil;
    _Geometry2D_point2D_ _rightPupil;
    *void _screenGazeState;
    _Geometry2D_rect2D_ _unalignedFaceBoundingBox;
}




-(void)dealloc;


@end


#endif