// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVVIDEOCOMPOSITINGCONTEXT_H
#define PVVIDEOCOMPOSITINGCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PVColorSpace.h"

@interface PVVideoCompositingContext : NSObject <NSSecureCoding>



@property int bufferFormat; // ivar: bufferFormat
@property BOOL concatenationFlag; // ivar: concatenationFlag
@property (nonatomic) int conformColorSpacesToDestinationBufferSpace; // ivar: conformColorSpacesToDestinationBufferSpace
@property int dotGraphLevel; // ivar: dotGraphLevel
@property BOOL dynamicPlayback; // ivar: dynamicPlayback
@property int filterMode; // ivar: filterMode
@property int gpuRenderAPI; // ivar: gpuRenderAPI
@property (nonatomic) int instructionGraphDotTreeLevel; // ivar: instructionGraphDotTreeLevel
@property (nonatomic) int instructionGraphDumpLevel; // ivar: instructionGraphDumpLevel
@property int numCPUThreads; // ivar: numCPUThreads
@property (retain, nonatomic) PVColorSpace *outputColorSpace; // ivar: _outputColorSpace
@property int pageSize; // ivar: pageSize
@property (nonatomic) BOOL powerFriendlyExport; // ivar: powerFriendlyExport
@property (nonatomic) int renderDevice; // ivar: renderDevice
@property int renderGraphDumpLevel; // ivar: renderGraphDumpLevel
@property BOOL renderStatsFlag; // ivar: renderStatsFlag
@property int renderStatsMaxVals; // ivar: renderStatsMaxVals
@property int renderStatsWarmUp; // ivar: renderStatsWarmUp
@property int shaderFormat; // ivar: shaderFormat
@property (nonatomic) int signPostLevel; // ivar: signPostLevel
@property BOOL textureBorder; // ivar: textureBorder
@property int tileSize; // ivar: tileSize
@property int traceGLLevel; // ivar: traceGLLevel
@property (nonatomic) int traceMetalLevel; // ivar: traceMetalLevel
@property (retain, nonatomic) PVColorSpace *workingColorSpace; // ivar: _workingColorSpace
@property (nonatomic) int workingColorSpaceConformIntent; // ivar: workingColorSpaceConformIntent


+(BOOL)supportsSecureCoding;
+(id)createContextForCPU;
+(id)createContextForGPU;
+(id)dotGraphLoggingDirectory;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDevice:(int)arg0 ;
-(void)dumpContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setContext:(id)arg0 ;
-(void)setIntermediateBufferFormatForWorkingColorSpace;


@end


#endif