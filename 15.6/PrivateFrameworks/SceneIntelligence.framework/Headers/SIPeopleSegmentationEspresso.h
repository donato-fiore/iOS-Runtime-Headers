// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIPEOPLESEGMENTATIONESPRESSO_H
#define SIPEOPLESEGMENTATIONESPRESSO_H

@protocol SIPeopleSegmentationModelProtocol;


#import "SIBaseNetwork.h"
#import "SIScaler.h"

@interface SIPeopleSegmentationEspresso : SIBaseNetwork <SIPeopleSegmentationModelProtocol>

 {
    SIScaler *_scalerOne;
    NSInteger _configuration;
    *__CVBuffer _temporalBuffer;
    int _frameCount;
}




+(struct CGSize )getInputResolution;
+(struct CGSize )getOutputResolution;
-(BOOL)switchNetworkConfiguration:(NSInteger)arg0 ;
-(NSInteger)evaluateSemanticsForImage:(struct __CVBuffer *)arg0 andOutputSurface:(struct __IOSurface *)arg1 ;
-(NSInteger)getConfiguration;
-(id)_configurationToString:(NSInteger)arg0 ;
-(id)init;
-(id)initWithComputeEngine:(NSInteger)arg0 ;
-(id)initWithComputeEngine:(NSInteger)arg0 andNetworkConfiguration:(NSInteger)arg1 ;
-(struct CGSize )getInputResolution;
-(struct CGSize )getOutputResolution;
-(void)copyResultsToOtherBuffers:(struct __IOSurface *)arg0 ;
-(void)dealloc;
-(void)initMLVariables;
-(void)postSetup;
-(void)preSetup;


@end


#endif