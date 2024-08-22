// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITUTILITIES_H
#define MIROAUTOEDITUTILITIES_H


#import <Foundation/Foundation.h>


@interface MiroAutoEditUtilities : NSObject



+(BOOL)hasRangeOfType:(NSUInteger)arg0 overlappingRange:(id)arg1 clip:(id)arg2 frameRate:(int)arg3 ;
+(BOOL)hasRangeOfType:(NSUInteger)arg0 within:(int)arg1 ofEdge:(int)arg2 onClip:(id)arg3 frameRate:(int)arg4 ;
+(BOOL)hasVoiceOrFaceRangeNearEndForClip:(id)arg0 projectFrameRate:(int)arg1 ;
+(BOOL)hasVoiceOrFaceRangeNearStartForClip:(id)arg0 projectFrameRate:(int)arg1 ;
+(BOOL)rangeModel:(id)arg0 isNearEdgeOfClip:(id)arg1 frameRate:(int)arg2 ;
+(BOOL)titleClipDurationIsShort:(id)arg0 forFrameRate:(int)arg1 ;
+(CGFloat)correctDuration:(CGFloat)arg0 toBlueprint:(id)arg1 videoIdeal:(CGFloat)arg2 videoMin:(CGFloat)arg3 videoMax:(CGFloat)arg4 ;
+(id)avAssetForPHAsset:(id)arg0 ;
+(id)correctRangeModelDuration:(id)arg0 forClip:(id)arg1 toBlueprint:(id)arg2 projectFrameRate:(int)arg3 videoIdeal:(CGFloat)arg4 videoMin:(CGFloat)arg5 videoMax:(CGFloat)arg6 ;
+(id)imageForImagePHAsset:(id)arg0 ;
+(id)imageForVideoPHAsset:(id)arg0 startTime:(int)arg1 duration:(int)arg2 ;
+(id)paddedRangeModelsOfType:(NSUInteger)arg0 clip:(id)arg1 projectFrameRate:(int)arg2 ;
+(int)distanceToRange:(id)arg0 fromEdge:(int)arg1 onClip:(id)arg2 frameRate:(int)arg3 ;
+(int)distanceToRangeOfType:(NSUInteger)arg0 fromEdge:(int)arg1 onClip:(id)arg2 frameRate:(int)arg3 ;
+(int)endTimeForClip:(id)arg0 ;
+(int)maxDurationRespectingTrimmingForClip:(id)arg0 projectFrameRate:(int)arg1 blueprint:(id)arg2 ;
+(int)minutesBetween:(id)arg0 and:(id)arg1 ;


@end


#endif