// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVCINEMATICEFFECT_H
#define PVCINEMATICEFFECT_H

@class AVAsset, PTCinematographyScript, NSDictionary, PTGlobalRenderingMetadataVersion1;


#import "PVHeliumEffect.h"

@interface PVCinematicEffect : PVHeliumEffect {
    AVAsset *_avasset;
    PTCinematographyScript *_script;
    NSDictionary *_currentCinemtography;
    BOOL _isReady;
    PTGlobalRenderingMetadataVersion1 *_ptGlobalRenderingMetadata;
    CGSize _videoTrackSize;
}


@property (nonatomic) CGFloat clipOffset; // ivar: _clipOffset
@property (nonatomic) CGFloat clipStart; // ivar: _clipStart
@property (nonatomic) CGAffineTransform postEffectTransform; // ivar: _postEffectTransform
@property (nonatomic) NSUInteger quality; // ivar: _quality


+(BOOL)deviceSupportsRendering:(id)arg0 ;
+(BOOL)deviceSupportsTracking:(id)arg0 ;
+(BOOL)enoughMemoryForHDR;
+(BOOL)hasAppleNeuralEngine;
+(BOOL)hasMoreThan2GBOfMemory;
+(BOOL)isCinematicSupported:(id)arg0 ;
+(NSInteger)memorySize;
+(void)handleApplicationDidReceiveMemoryWarning;
+(void)registerEffectWithID:(id)arg0 displayName:(id)arg1 ;
-(BOOL)isReady;
-(BOOL)setAsset:(id)arg0 ;
-(id)init;
-(struct CGSize )outputSize;
-(struct HGRef<HGNode> )hgNodeForTime:(struct ? )arg0 inputs:(*void)arg1 renderer:(*void)arg2 igContext:(struct HGRef<PVInstructionGraphContext> )arg3 ;
-(void)setupGlobalMetadata;
-(void)updateDictionary:(id)arg0 completion:(id)arg1 ;


@end


#endif