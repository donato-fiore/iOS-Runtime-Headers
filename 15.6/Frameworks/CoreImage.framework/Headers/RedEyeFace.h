// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDEYEFACE_H
#define REDEYEFACE_H

@class VNFaceLandmarks2D, VNFaceObservation, NSArray;

#import <Foundation/Foundation.h>

#import "CIVector.h"
#import "CIImage.h"

@interface RedEyeFace : NSObject

@property (nonatomic) float areaMax; // ivar: _areaMax
@property (nonatomic) float faceOrientation; // ivar: _faceOrientation
@property (retain, nonatomic) CIVector *faceRect; // ivar: _faceRect
@property (nonatomic) int imageOrientation; // ivar: _imageOrientation
@property (nonatomic) float junkiness; // ivar: _junkiness
@property (retain, nonatomic) VNFaceLandmarks2D *landmarks; // ivar: _landmarks
@property (retain, nonatomic) VNFaceObservation *observation; // ivar: _observation
@property (retain, nonatomic) CIVector *pupilLeft; // ivar: _pupilLeft
@property (retain, nonatomic) CIVector *pupilRight; // ivar: _pupilRight
@property (retain, nonatomic) CIVector *roiRenderOriginLeft; // ivar: _roiRenderOriginLeft
@property (retain, nonatomic) CIVector *roiRenderOriginRight; // ivar: _roiRenderOriginRight
@property (retain, nonatomic) CIVector *roiRenderSize; // ivar: _roiRenderSize
@property (retain, nonatomic) CIImage *segmentationIris; // ivar: _segmentationIris
@property (retain, nonatomic) CIImage *segmentationSclera; // ivar: _segmentationSclera
@property (retain, nonatomic) CIImage *segmentationSkin; // ivar: _segmentationSkin
@property (retain, nonatomic) NSArray *uvLeft; // ivar: _uvLeft
@property (retain, nonatomic) NSArray *uvRight; // ivar: _uvRight


-(id)init;
-(void)dealloc;


@end


#endif