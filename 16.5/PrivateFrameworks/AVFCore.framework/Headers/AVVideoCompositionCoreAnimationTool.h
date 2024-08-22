// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIDEOCOMPOSITIONCOREANIMATIONTOOL_H
#define AVVIDEOCOMPOSITIONCOREANIMATIONTOOL_H


#import <Foundation/Foundation.h>

#import "AVVideoCompositionCoreAnimationToolInternal.h"

@interface AVVideoCompositionCoreAnimationTool : NSObject {
    AVVideoCompositionCoreAnimationToolInternal *_videoCompositionTool;
}




+(id)videoCompositionCoreAnimationToolWithAdditionalLayer:(id)arg0 asTrackID:(int)arg1 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayer:(id)arg0 inLayer:(id)arg1 ;
+(id)videoCompositionCoreAnimationToolWithPostProcessingAsVideoLayers:(id)arg0 inLayer:(id)arg1 ;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(BOOL)_hasPostProcessingLayers;
-(id)_auxiliaryTrackLayer;
-(id)_postProcessingRootLayer;
-(id)_postProcessingVideoLayers;
-(id)initWithMagicTrackID:(int)arg0 animationLayer:(id)arg1 videoLayers:(id)arg2 ;
-(int)_auxiliaryTrackID;
-(void)dealloc;


@end


#endif