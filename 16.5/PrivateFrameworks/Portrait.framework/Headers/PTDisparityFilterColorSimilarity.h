// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTDISPARITYFILTERCOLORSIMILARITY_H
#define PTDISPARITYFILTERCOLORSIMILARITY_H

@class NSString;
@protocol PTAbstractDisparityFilter, MTLCommandQueue, MTLComputePipelineState, MTLTexture;

#import <Foundation/Foundation.h>


@interface PTDisparityFilterColorSimilarity : NSObject <PTAbstractDisparityFilter>

 {
    int _frameIndex;
    id<MTLCommandQueue> *_commandQueue;
    id<MTLComputePipelineState> *_temporalFilterExponentialMovingAverageColorSimilarities;
    id<MTLTexture> *_inputRGB;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initFilter:(id)arg0 ;
-(id)initWithCommandQueue:(id)arg0 ;
-(int)prepareFilter:(id)arg0 inRGBA:(id)arg1 outDisplacement:(id)arg2 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityPrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 disparityBias:(float)arg5 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inStatePrev:(id)arg2 inDisparity:(id)arg3 outDisparity:(id)arg4 outState:(id)arg5 ;
-(void)reset;


@end


#endif