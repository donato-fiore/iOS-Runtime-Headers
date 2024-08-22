// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABPKMLMODELCONFIGURATION2DBREAKTHROUGH_H
#define ABPKMLMODELCONFIGURATION2DBREAKTHROUGH_H

@class NSString;


#import "ABPKMLModelConfiguration2D.h"

@interface ABPKMLModelConfiguration2DBreakthrough : ABPKMLModelConfiguration2D {
    NSString *_mlModelPath;
}




-(BOOL)applyPreProcessing;
-(BOOL)networkEstimatesAffinityMaps;
-(BOOL)networkWantsBGR;
-(float)biasB;
-(float)biasG;
-(float)biasR;
-(float)scale;
-(id)compiledMLModelPath;
-(id)configStringForABPKDeviceOrientation:(NSInteger)arg0 ;
-(id)configStringForDeviceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)inputTensorNames;
-(id)outputTensorNames;
-(struct CGSize )inputDimensions;
-(struct CGSize )inputDimensionsForABPKDeviceOrientation:(NSInteger)arg0 ;
-(struct CGSize )inputDimensionsForDeviceOrientation:(NSInteger)arg0 ;
-(unsigned int)affinityMapChannels;
-(unsigned int)heatMapChannels;


@end


#endif