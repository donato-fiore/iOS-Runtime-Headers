// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCENESEGMENTATIONALGORITHM_H
#define SISCENESEGMENTATIONALGORITHM_H


#import <Foundation/Foundation.h>

#import "SISceneSegmentation.h"
#import "SIScaler.h"

@interface SISceneSegmentationAlgorithm : NSObject {
    SISceneSegmentation *_segmentation;
    SIScaler *_scalerOne;
}




+(BOOL)supportsANE;
+(struct CGSize )getOutputResolution:(NSInteger)arg0 ;
+(struct CGSize )outputResolution;
-(NSInteger)_switchConfiguration:(NSInteger)arg0 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 resampleOutput:(BOOL)arg3 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 resampleOutput:(BOOL)arg3 networkConfiguration:(NSInteger)arg4 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 resampleOutput:(BOOL)arg4 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 resampleOutput:(BOOL)arg4 networkConfiguration:(NSInteger)arg5 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 uncertaintyOutput:(struct __IOSurface *)arg3 resampleOutput:(BOOL)arg4 networkConfiguration:(NSInteger)arg5 earlyExit:(NSInteger)arg6 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 managedBuffers:(BOOL)arg2 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 uncertaintyThreshold:(float)arg2 ;
-(id)initWithInputResolution:(struct CGSize )arg0 andComputeEngine:(NSInteger)arg1 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;


@end


#endif