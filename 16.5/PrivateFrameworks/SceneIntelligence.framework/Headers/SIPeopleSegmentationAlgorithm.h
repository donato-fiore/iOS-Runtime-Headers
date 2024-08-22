// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIPEOPLESEGMENTATIONALGORITHM_H
#define SIPEOPLESEGMENTATIONALGORITHM_H


#import <Foundation/Foundation.h>

#import "SIPeopleSegmentation.h"
#import "SIScaler.h"

@interface SIPeopleSegmentationAlgorithm : NSObject {
    SIPeopleSegmentation *_segmentation;
    SIScaler *_scaler;
}




+(BOOL)supportsANE;
+(struct CGSize )inputResolution;
+(struct CGSize )outputResolution;
-(NSInteger)_inference:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 ;
-(NSInteger)_switchConfiguration:(NSInteger)arg0 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 networkConfiguration:(NSInteger)arg2 ;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 useAppleNeuralEngineFramework:(BOOL)arg2 ;
-(id)initWithInputResolution:(struct CGSize )arg0 ;
-(id)initWithNetworkConfiguration:(id)arg0 ;
-(id)networkVersion;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(struct __CVBuffer *)_preprocessingInputImage:(struct __CVBuffer *)arg0 ;
-(void)setSnapEveryFrameCount:(unsigned char)arg0 ;


@end


#endif