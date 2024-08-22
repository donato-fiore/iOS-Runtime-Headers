// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8ROOMPLAN7RSFRAME_H
#define _TTC8ROOMPLAN7RSFRAME_H

@class SwiftObject;
@protocol RSFrame, RSCamera, RSRawPointCloud;



@interface _TtC8RoomPlan7RSFrame : SwiftObject <RSFrame>



@property (nonatomic, retain) NSObject<RSCamera> *camera; // ivar: camera
@property (nonatomic, retain) *__CVBuffer colorBuffer; // ivar: colorBuffer
@property (nonatomic, retain) *__CVBuffer depthBuffer; // ivar: depthBuffer
@property (nonatomic, retain) *__CVBuffer depthConfidenceBuffer; // ivar: depthConfidenceBuffer
@property (nonatomic) NSInteger deviceOrientation; // ivar: deviceOrientation
@property (nonatomic, retain) NSObject<RSRawPointCloud> *rawFeaturePoints; // ivar: rawFeaturePoints
@property (nonatomic) ? referenceOriginTransform; // ivar: referenceOriginTransform
@property (nonatomic, retain) NSObject<RSCamera> *sceneCamera; // ivar: sceneCamera
@property (nonatomic, retain) *__CVBuffer sceneColorBuffer; // ivar: sceneColorBuffer
@property (nonatomic, retain) *__CVBuffer semanticConfidenceBuffer; // ivar: semanticConfidenceBuffer
@property (nonatomic, retain) *__CVBuffer semanticLabelBuffer; // ivar: semanticLabelBuffer
@property (nonatomic) CGFloat timestamp; // ivar: timestamp
@property (nonatomic) NSInteger vioTrackingState; // ivar: vioTrackingState




@end


#endif