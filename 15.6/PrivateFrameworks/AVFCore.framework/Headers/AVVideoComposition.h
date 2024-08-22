// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVVIDEOCOMPOSITION_H
#define AVVIDEOCOMPOSITION_H

@class NSString, NSArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "AVVideoCompositionInternal.h"
#import "AVVideoCompositionCoreAnimationTool.h"

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying>

 {
    AVVideoCompositionInternal *_videoComposition;
}


@property (readonly, retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (readonly, nonatomic) NSString *colorPrimaries;
@property (readonly, nonatomic) NSString *colorTransferFunction;
@property (readonly, nonatomic) NSString *colorYCbCrMatrix;
@property (readonly, nonatomic) Class customVideoCompositorClass;
@property (readonly, nonatomic) ? frameDuration;
@property (readonly, copy, nonatomic) NSArray *instructions;
@property (readonly, nonatomic) float renderScale;
@property (readonly, nonatomic) CGSize renderSize;
@property (readonly, nonatomic) NSArray *sourceSampleDataTrackIDs;
@property (readonly, nonatomic) int sourceTrackIDForFrameTiming;


+(id)_mutableVideoCompositionWithAsset:(id)arg0 applyingCIFiltersWithHandler:(id)arg1 ;
+(id)videoCompositionWithAsset:(id)arg0 applyingCIFiltersWithHandler:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg0 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg0 videoGravity:(id)arg1 ;
+(void)initialize;
-(BOOL)_copyFigVideoCompositor:(**void)arg0 andSession:(*id)arg1 recyclingSession:(id)arg2 forFigRemaker:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(BOOL)_hasPostProcessingLayers;
-(BOOL)_isValidReturningExceptionReason:(*id)arg0 ;
-(BOOL)isValidForAsset:(id)arg0 timeRange:(struct ? )arg1 validationDelegate:(id)arg2 ;
-(NSUInteger)_changeSeed;
-(id)_auxiliaryTrackLayer;
-(id)_deepCopy;
-(id)_postProcessingRootLayer;
-(id)_postProcessingVideoLayer;
-(id)_postProcessingVideoLayers;
-(id)_serializableInstructions;
-(id)builtInCompositorName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)instructionForFigInstruction:(*void)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(int)_auxiliaryTrackID;
-(void)_bumpChangeSeed;
-(void)dealloc;
-(void)setBuiltInCompositorName:(id)arg0 ;
-(void)videoCompositionOutputColorPropertiesWithCustomCompositor:(id)arg0 formatDescriptions:(id)arg1 colorPrimaries:(*id)arg2 transferFunction:(*id)arg3 yCbCrMatrix:(*id)arg4 ;


@end


#endif