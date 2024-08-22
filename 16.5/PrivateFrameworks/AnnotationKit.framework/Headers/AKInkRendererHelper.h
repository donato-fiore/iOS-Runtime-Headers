// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKINKRENDERERHELPER_H
#define AKINKRENDERERHELPER_H


#import <Foundation/Foundation.h>


@interface AKInkRendererHelper : NSObject



+(CGFloat)_calculateMaxRenderingSize;
+(CGFloat)maxRenderingSize;
+(id)_createFullSizeRenderer;
+(id)_sharedOfflineInkRendererSmallSize;
+(id)renderDrawing:(id)arg0 clippedToStrokeSpaceRect:(struct CGRect )arg1 scale:(CGFloat)arg2 ;
+(void)purgeSharedRenderer;


@end


#endif