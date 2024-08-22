// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEEPZOOMPROCESSORCONTROLLERCONFIGURATION_H
#define BWDEEPZOOMPROCESSORCONTROLLERCONFIGURATION_H

@class NSDictionary;


#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"

@interface BWDeepZoomProcessorControllerConfiguration : BWStillImageProcessorConfiguration {
    NSDictionary *_deepZoomParametersByPortType;
}


@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (retain, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat
@property (nonatomic) int version; // ivar: _version


-(BOOL)doDeepZoomForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(float)maxScaleFactorForPortType:(id)arg0 ;
-(float)minScaleFactorForPortType:(id)arg0 ;
-(void)dealloc;
-(void)setSensorConfigurations:(id)arg0 ;


@end


#endif