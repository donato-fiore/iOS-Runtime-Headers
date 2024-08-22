// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVMUTABLEVIDEOCOMPOSITION_H
#define AVMUTABLEVIDEOCOMPOSITION_H

@class AVMutableVideoCompositionInternal, NSArray;


#import "AVVideoComposition.h"
#import "AVVideoCompositionCoreAnimationTool.h"

@interface AVMutableVideoComposition : AVVideoComposition {
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}


@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (retain, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) ? frameDuration;
@property (copy, nonatomic) NSArray *instructions;
@property (nonatomic) float renderScale;
@property (nonatomic) CGSize renderSize;
@property (copy, nonatomic) NSArray *sourceSampleDataTrackIDs;
@property (nonatomic) int sourceTrackIDForFrameTiming;


+(id)videoComposition;
+(id)videoCompositionWithAsset:(id)arg0 applyingCIFiltersWithHandler:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg0 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg0 prototypeInstruction:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg0 videoGravity:(id)arg1 ;
// +(void)videoCompositionWithAsset:(id)arg0 applyingCIFiltersWithHandler:(id)arg1 completionHandler:(unk)arg2  ;
+(void)videoCompositionWithPropertiesOfAsset:(id)arg0 completionHandler:(id)arg1 ;
+(void)videoCompositionWithPropertiesOfAsset:(id)arg0 prototypeInstruction:(id)arg1 completionHandler:(id)arg2 ;
-(id)builtInCompositorName;
-(id)colorPrimaries;
-(id)colorTransferFunction;
-(id)colorYCbCrMatrix;
-(void)setBuiltInCompositorName:(id)arg0 ;
-(void)setColorPrimaries:(id)arg0 ;
-(void)setColorTransferFunction:(id)arg0 ;
-(void)setColorYCbCrMatrix:(id)arg0 ;


@end


#endif