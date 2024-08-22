// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIPEOPLESEGMENTATIONALGORITHM_H
#define SIPEOPLESEGMENTATIONALGORITHM_H

@protocol SIPeopleSegmentationModelProtocol;

#import <Foundation/Foundation.h>

#import "SIScaler.h"

@interface SIPeopleSegmentationAlgorithm : NSObject {
    id<SIPeopleSegmentationModelProtocol> *_segmentation;
    BOOL useANE;
    SIScaler *_scaler;
}




+(BOOL)supportsANE;
+(struct CGSize )outputResolution;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 ;
-(NSInteger)runWithInput:(struct __CVBuffer *)arg0 output:(struct __IOSurface *)arg1 networkConfiguration:(NSInteger)arg2 ;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 useAppleNeuralEngineFramework:(BOOL)arg2 ;
-(id)initWithInputResolution:(struct CGSize )arg0 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;


@end


#endif