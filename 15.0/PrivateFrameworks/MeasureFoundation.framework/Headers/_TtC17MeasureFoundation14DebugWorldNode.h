// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC17MEASUREFOUNDATION14DEBUGWORLDNODE_H
#define _TTC17MEASUREFOUNDATION14DEBUGWORLDNODE_H

@class TtC17MeasureFoundation9MetalNode;



@interface _TtC17MeasureFoundation14DebugWorldNode : TtC17MeasureFoundation9MetalNode {
    ? kCameraRotationThreshold;
    ? worldPointsPipelineState;
    ? capturedImageTextureY;
    ? capturedImageTextureCbCr;
    ? capturedImageTextureCache;
    ? worldPointsBuffer;
    ? worldPointsBufferPtr;
    ? worldPointsColorsBuffer;
    ? worldPointsColorsBufferPtr;
    ? worldPointsCurrentIndex;
    ? worldPointsNum;
    ? scene;
    ? lastCameraTransform;
}




-(void)appDidEnterBackground;


@end


#endif