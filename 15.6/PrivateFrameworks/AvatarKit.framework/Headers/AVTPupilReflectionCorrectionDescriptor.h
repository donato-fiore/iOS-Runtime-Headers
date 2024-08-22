// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTPUPILREFLECTIONCORRECTIONDESCRIPTOR_H
#define AVTPUPILREFLECTIONCORRECTIONDESCRIPTOR_H

@class SCNNode, SCNMaterial;

#import <Foundation/Foundation.h>


@interface AVTPupilReflectionCorrectionDescriptor : NSObject {
    SCNNode *_readMorpherNode;
    SCNMaterial *_leftEyeMaterial;
    SCNMaterial *_rightEyeMaterial;
    NSInteger _leftEyeTargetIndex;
    NSInteger _rightEyeTargetIndex;
}






@end


#endif