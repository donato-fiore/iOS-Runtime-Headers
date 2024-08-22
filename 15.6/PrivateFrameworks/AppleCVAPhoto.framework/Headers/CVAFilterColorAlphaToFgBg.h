// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVAFILTERCOLORALPHATOFGBG_H
#define CVAFILTERCOLORALPHATOFGBG_H

@class NSString;
@protocol MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface CVAFilterColorAlphaToFgBg : NSObject {
    id<MTLComputePipelineState> *_splitFgBgKernel_rgba;
    id<MTLComputePipelineState> *_splitBgKernel_rgba;
    id<MTLComputePipelineState> *_splitFgKernel_rgba;
}


@property (readonly) NSString *label; // ivar: _label


-(id)initWithDevice:(id)arg0 library:(id)arg1 pipelineLibrary:(id)arg2 error:(*id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 srcColorTex:(id)arg1 srcAlphaTex:(id)arg2 dstForegroundTex:(id)arg3 ;
-(void)encodeToCommandBuffer:(id)arg0 srcColorTex:(id)arg1 srcAlphaTex:(id)arg2 dstForegroundTex:(id)arg3 dstBackgroundTex:(id)arg4 ;


@end


#endif