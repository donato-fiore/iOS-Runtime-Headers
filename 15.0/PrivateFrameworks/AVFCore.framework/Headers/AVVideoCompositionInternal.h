// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVVIDEOCOMPOSITIONINTERNAL_H
#define AVVIDEOCOMPOSITIONINTERNAL_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "AVVideoCompositionCoreAnimationTool.h"

@interface AVVideoCompositionInternal : NSObject {
    NSUInteger changeSeed;
    NSString *builtInCompositorName;
    Class customCompositorClass;
    ? frameDuration;
    int sourceTrackIDForFrameTiming;
    CGSize renderSize;
    float renderScale;
    NSString *colorPrimaries;
    NSString *colorYCbCrMatrix;
    NSString *colorTransferFunction;
    NSArray *instructions;
    BOOL auxiliaryTrackLayerSetLast;
    AVVideoCompositionCoreAnimationTool *animationTool;
    NSArray *sourceSampleDataTracks;
}






@end


#endif