// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCOMPOSITIONCOREANIMATIONTOOLINTERNAL_H
#define AVVIDEOCOMPOSITIONCOREANIMATIONTOOLINTERNAL_H

@class CALayer, NSArray;

#import <Foundation/Foundation.h>


@interface AVVideoCompositionCoreAnimationToolInternal : NSObject {
    CALayer *animationLayer;
    int auxiliaryTrackID;
    NSArray *postProcessingVideoLayers;
    NSInteger way;
}






@end


#endif