// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef METALRANSACDISPATCHER_H
#define METALRANSACDISPATCHER_H

@protocol MTLBuffer, MTLCommandQueue, MTLDevice, MTLFunction, MTLLibrary, MTLComputePipelineState;

#import <Foundation/Foundation.h>


@interface MetalRANSACDispatcher : NSObject

@property (nonatomic) CGSize frameSize; // ivar: frameSize
@property (nonatomic) float inlierLimit; // ivar: inlierLimit
@property (retain, nonatomic) NSObject<MTLBuffer> *m_ModelScores; // ivar: _m_ModelScores
@property (retain, nonatomic) NSObject<MTLBuffer> *m_RansacHomographies; // ivar: _m_RansacHomographies
@property (retain, nonatomic) NSObject<MTLBuffer> *m_RansacParams; // ivar: _m_RansacParams
@property (retain, nonatomic) NSObject<MTLBuffer> *m_ScoreBuffer; // ivar: _m_ScoreBuffer
@property (retain, nonatomic) NSObject<MTLBuffer> *m_mX; // ivar: _m_mX
@property (retain, nonatomic) NSObject<MTLBuffer> *m_mXhat; // ivar: _m_mXhat
@property (nonatomic) NSUInteger m_maxCorrespondences; // ivar: _m_maxCorrespondences
@property (retain, nonatomic) NSObject<MTLCommandQueue> *m_metalCommandQueue; // ivar: m_metalCommandQueue
@property (retain, nonatomic) NSObject<MTLDevice> *m_metalDevice; // ivar: m_metalDevice
@property (retain, nonatomic) NSObject<MTLFunction> *m_metalKernelFunction; // ivar: m_metalKernelFunction
@property (retain, nonatomic) NSObject<MTLLibrary> *m_metalLibrary; // ivar: m_metalLibrary
@property (retain, nonatomic) NSObject<MTLComputePipelineState> *m_metalPipeline; // ivar: m_metalPipeline
@property (nonatomic) NSUInteger m_numThreadsPerGroup; // ivar: _m_numThreadsPerGroup


-(id)initWithMaxCorrespondences:(NSUInteger)arg0 ;
-(void)assureSizeAndCopyToMetalBuffer:(*id)arg0 fromData:(*void)arg1 dataSize:(NSUInteger)arg2 metalResourceOptions:(NSUInteger)arg3 ;
-(void)performRansacOnData:(unsigned int)arg0 firstPointSet:(*float)arg1 secondPointSet:(*float)arg2 pointWeights:(*float)arg3 homographies:(struct ransac_homography_record *)arg4 numHomographies:(unsigned int)arg5 homScores:(*float)arg6 ;


@end


#endif