// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVVIDEOCOMPOSITINGEXPORTER_H
#define PVVIDEOCOMPOSITINGEXPORTER_H



#import "PVVideoCompositing.h"

@interface PVVideoCompositingExporter : PVVideoCompositing



-(id)init;
-(id)preferredDestinationPixelBufferFormat;
-(id)requiredPixelBufferAttributesForRenderContext;
-(void)setupEffectScheduler;
-(void)setupTextureFactories;


@end


#endif