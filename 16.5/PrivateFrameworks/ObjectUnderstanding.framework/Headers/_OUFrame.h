// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _OUFRAME_H
#define _OUFRAME_H

@protocol OUFrame, OUCamera;

#import <Foundation/Foundation.h>


@interface _OUFrame : NSObject <OUFrame>



@property (retain, nonatomic) NSObject<OUCamera> *camera; // ivar: _camera
@property (nonatomic) *__CVBuffer colorBuffer; // ivar: _colorBuffer
@property (readonly, nonatomic) NSInteger deviceOrientation; // ivar: _deviceOrientation
@property (nonatomic) ? referenceOriginTransform; // ivar: _referenceOriginTransform
@property (retain, nonatomic) NSObject<OUCamera> *sceneCamera; // ivar: _sceneCamera
@property (nonatomic) *__CVBuffer sceneColorBuffer; // ivar: _sceneColorBuffer
@property (nonatomic) *__CVBuffer sceneDepthBuffer; // ivar: _sceneDepthBuffer
@property (nonatomic) *__CVBuffer sceneDepthConfidenceBuffer; // ivar: _sceneDepthConfidenceBuffer
@property (nonatomic) *__CVBuffer semanticConfidenceBuffer; // ivar: _semanticConfidenceBuffer
@property (nonatomic) *__CVBuffer semanticLabelBuffer; // ivar: _semanticLabelBuffer
@property (nonatomic) *__CVBuffer semanticLabelBufferOnWideCamera; // ivar: _semanticLabelBufferOnWideCamera
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger vioTrackingState; // ivar: _vioTrackingState


-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFrame:(id)arg0 ;
-(void)dealloc;


@end


#endif