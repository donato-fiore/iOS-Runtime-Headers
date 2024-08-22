// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SISCENEUNDERSTANDINGALGORITHM_H
#define SISCENEUNDERSTANDINGALGORITHM_H


#import <Foundation/Foundation.h>

#import "SISceneUnderstanding.h"
#import "SISceneUnderstandingResult.h"
#import "SIScaler.h"

@interface SISceneUnderstandingAlgorithm : NSObject {
    SISceneUnderstanding *_segmentation;
    SISceneUnderstandingResult *_result;
    SIScaler *_scalerOne;
}




+(struct CGSize )outputResolution;
-(id)initWithInputResolution:(struct CGSize )arg0 ;
-(id)initWithInputResolution:(struct CGSize )arg0 andComputeEngine:(NSInteger)arg1 ;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 normalsOutput:(struct __IOSurface *)arg3 ;
-(void)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 confidenceOutput:(struct __IOSurface *)arg2 normalsOutput:(struct __IOSurface *)arg3 orientation:(NSInteger)arg4 ;


@end


#endif