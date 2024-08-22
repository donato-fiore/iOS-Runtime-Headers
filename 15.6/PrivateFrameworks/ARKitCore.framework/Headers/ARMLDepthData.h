// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARMLDEPTHDATA_H
#define ARMLDEPTHDATA_H

@class NSString;
@protocol ARResultData;

#import <Foundation/Foundation.h>

#import "ARImageData.h"

@interface ARMLDepthData : NSObject <ARResultData>

 {
    os_unfair_lock_s _singleFrameDepthBufferLock;
    *__CVBuffer _singleFrameDepthBuffer;
}


@property (readonly, nonatomic) *__CVBuffer confidenceBuffer; // ivar: _confidenceBuffer
@property (nonatomic) *__CVBuffer confidenceMap; // ivar: _confidenceMap
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) *__CVBuffer depthBuffer; // ivar: _depthBuffer
@property (readonly, nonatomic) CGSize depthBufferSize;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CVBuffer normalsBuffer; // ivar: _normalsBuffer
@property (nonatomic) *__CVBuffer singleFrameConfidenceBuffer; // ivar: _singleFrameConfidenceBuffer
@property (nonatomic) *__CVBuffer singleFrameDepthBuffer;
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (retain, nonatomic) ARImageData *sourceImageData; // ivar: _sourceImageData
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithTimestamp:(CGFloat)arg0 depthBuffer:(struct __CVBuffer *)arg1 confidenceBuffer:(struct __CVBuffer *)arg2 source:(NSInteger)arg3 ;
-(id)initWithTimestamp:(CGFloat)arg0 depthBuffer:(struct __CVBuffer *)arg1 source:(NSInteger)arg2 ;
-(void)dealloc;


@end


#endif