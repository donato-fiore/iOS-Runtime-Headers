// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DPYRAMIDBLURSHADOWSRENDERER_H
#define TSCH3DPYRAMIDBLURSHADOWSRENDERER_H

@class NSArray;
@protocol TSCH3DShadowsRenderer;

#import <Foundation/Foundation.h>

#import "TSCH3DPyramidBlurFBOResource.h"

@interface TSCH3DPyramidBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>

 {
    NSArray *_pyramidResources;
    TSCH3DPyramidBlurFBOResource *_finalShadowResource;
    tvec2<int> _initialSize;
    int _requestedSize;
    float _targetRadiusFactor;
}




-(float)blurSlackForQuality:(float)arg0 ;
-(id)initWithSize:(int)arg0 targetRadiusFactor:(float)arg1 ;
-(id)p_allResources;
-(id)shadowsFBOForContext:(id)arg0 ;
-(void)invalidate;
-(void)p_setupResourcesForSize:(struct tvec2<int> )arg0 ;
-(void)protectShadowForQuality:(float)arg0 pipeline:(id)arg1 renderBlock:(id)arg2 ;
-(void)unprotectShadowInSession:(id)arg0 ;


@end


#endif