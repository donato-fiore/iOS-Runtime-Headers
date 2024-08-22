// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DLINKABLEPIPELINE_H
#define TSCH3DLINKABLEPIPELINE_H

@class NSString;
@protocol TSCH3DPipelineLinkable;


#import "TSCH3DRenderPipeline.h"

@interface TSCH3DLinkablePipeline : TSCH3DRenderPipeline <TSCH3DPipelineLinkable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)output;


@end


#endif