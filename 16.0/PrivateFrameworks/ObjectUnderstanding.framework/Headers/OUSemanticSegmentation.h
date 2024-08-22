// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUSEMANTICSEGMENTATION_H
#define OUSEMANTICSEGMENTATION_H

@class SISceneSegmentationAlgorithm, SISceneSegmentationNetworkConfiguration, SISceneSegmentationData;

#import <Foundation/Foundation.h>

#import "OUCVPixelRotate.h"

@interface OUSemanticSegmentation : NSObject {
    OUCVPixelRotate *cvRotate90;
    OUCVPixelRotate *cvRotate90r;
    OUCVPixelRotate *cvRotate180;
    OUCVPixelRotate *cvRotate180r;
    OUCVPixelRotate *cvRotate270;
    OUCVPixelRotate *cvRotate270r;
    SISceneSegmentationAlgorithm *siSceneSegmentationAlgorithm;
    SISceneSegmentationNetworkConfiguration *semanticConfig;
    SISceneSegmentationData *semResultData;
    NSInteger semanticModel;
    NSInteger deviceOrientation;
    BOOL _initRotater;
    BOOL _initSegModel;
}




-(BOOL)setupRotater:(id)arg0 ;
-(id)init;
-(struct __CVBuffer *)generateSemanticOnWideCameraWithFrame:(id)arg0 ;


@end


#endif