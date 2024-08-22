// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN7OUFRAME_H
#define _TTC8ROOMPLAN7OUFRAME_H

@class SwiftObject;
@protocol OUFrame, OUCamera;



@interface _TtC8RoomPlan7OUFrame : SwiftObject <OUFrame>

 {
    ? vioTrackingState;
}


@property (nonatomic, retain) NSObject<OUCamera> *camera; // ivar: camera
@property (nonatomic, retain) *__CVBuffer colorBuffer; // ivar: colorBuffer
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (nonatomic) ? referenceOriginTransform; // ivar: referenceOriginTransform
@property (nonatomic, retain) NSObject<OUCamera> *sceneCamera; // ivar: sceneCamera
@property (nonatomic, retain) *__CVBuffer sceneColorBuffer; // ivar: sceneColorBuffer
@property (nonatomic, retain) *__CVBuffer sceneDepthBuffer; // ivar: sceneDepthBuffer
@property (nonatomic, retain) *__CVBuffer sceneDepthConfidenceBuffer; // ivar: sceneDepthConfidenceBuffer
@property (nonatomic, retain) *__CVBuffer semanticConfidenceBuffer; // ivar: semanticConfidenceBuffer
@property (nonatomic, retain) *__CVBuffer semanticLabelBuffer; // ivar: semanticLabelBuffer
@property (nonatomic) CGFloat timestamp; // ivar: timestamp




@end


#endif