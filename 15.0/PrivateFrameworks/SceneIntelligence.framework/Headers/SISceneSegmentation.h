// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCENESEGMENTATION_H
#define SISCENESEGMENTATION_H



#import "SIBaseNetwork.h"

@interface SISceneSegmentation : SIBaseNetwork {
    NSInteger _configuration;
    *float _uncertaintyThresholds;
    *float _probabilityThresholds;
    NSUInteger _numClasses;
}


@property (readonly, nonatomic) CGSize inputResolution; // ivar: _inputResolution


+(struct CGSize )outputResolution;
-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)evaluateImage:(struct __CVBuffer *)arg0 ;
-(NSInteger)getConfiguration;
-(NSInteger)writeLabels:(struct __IOSurface *)arg0 resampleOutput:(BOOL)arg1 ;
-(NSInteger)writeProbabilities:(struct __IOSurface *)arg0 resampleOutput:(BOOL)arg1 ;
-(NSInteger)writeProbabilities:(struct __IOSurface *)arg0 withUncertainty:(struct __IOSurface *)arg1 resampleOutput:(BOOL)arg2 ;
-(id)_configurationToString:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 networkMode:(NSInteger)arg1 ;
-(id)initWithComputeEngine:(NSInteger)arg0 networkMode:(NSInteger)arg1 uncertaintyThreshold:(float)arg2 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)dealloc;
-(void)initializeUncertaintyThresholds:(float)arg0 ;
-(void)preSetup;


@end


#endif