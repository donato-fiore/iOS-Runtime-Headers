// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWMETEORHEADROOMNODE_H
#define BWMETEORHEADROOMNODE_H

@class NSString, FigMetalContext, NSDictionary;


#import "BWNode.h"
#import "FigMetalHistogram.h"

@interface BWMeteorHeadroomNode : BWNode {
    NSString *_lastCaptureRequestIdentifier;
    float _lastMeteorHeadroom;
    float _gainMapMainImageDownscalingFactor;
    int _headroomProcessingType;
    FigMetalContext *_metalContext;
    FigMetalHistogram *_histogram;
    NSDictionary *_meteorHeadroomParametersByPortType;
}




+(void)initialize;
-(float)gainMapMainImageDownscalingFactor;
-(id)initWithNodeConfiguration:(id)arg0 sensorConfigurationsByPortType:(id)arg1 ;
-(int)headroomProcessingType;
-(void)dealloc;
-(void)didReachEndOfDataForInput:(id)arg0 ;
-(void)didSelectFormat:(id)arg0 forInput:(id)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(id)arg1 ;
-(void)setGainMapMainImageDownscalingFactor:(float)arg0 ;
-(void)setHeadroomProcessingType:(int)arg0 ;


@end


#endif