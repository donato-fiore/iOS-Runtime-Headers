// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTCORRECTIVEMORPHERDESCRIPTOR_H
#define AVTCORRECTIVEMORPHERDESCRIPTOR_H

@class SCNMorpher, SCNNode;

#import <Foundation/Foundation.h>


@interface AVTCorrectiveMorpherDescriptor : NSObject {
    SCNMorpher *_correctiveWriteMorpher;
    NSInteger _correctiveTargetIndex;
    SCNNode *_drivingReadMorpherNode0;
    SCNNode *_drivingReadMorpherNode1;
    SCNNode *_drivingReadMorpherNode2;
    SCNNode *_drivingReadMorpherNode3;
    SCNNode *_drivingReadMorpherNode4;
    NSInteger _drivingTargetIndex0;
    NSInteger _drivingTargetIndex1;
    NSInteger _drivingTargetIndex2;
    NSInteger _drivingTargetIndex3;
    NSInteger _drivingTargetIndex4;
    NSInteger _drivingTargetCount;
}






@end


#endif