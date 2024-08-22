// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWLEARNEDNRPROCESSORCONTROLLERCONFIGURATION_H
#define BWLEARNEDNRPROCESSORCONTROLLERCONFIGURATION_H

@class NSDictionary;


#import "BWStillImageProcessorControllerConfiguration.h"
#import "BWVideoFormat.h"

@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorControllerConfiguration

@property (retain, nonatomic) NSDictionary *finalCropRectOverscanMultiplierByPortType; // ivar: _finalCropRectOverscanMultiplierByPortType
@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (retain, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat
@property (nonatomic) BOOL quadraSupportEnabled; // ivar: _quadraSupportEnabled
@property (retain, nonatomic) BWVideoFormat *ultraHighResolutionInputFormat; // ivar: _ultraHighResolutionInputFormat
@property (retain, nonatomic) BWVideoFormat *ultraHighResolutionOutputFormat; // ivar: _ultraHighResolutionOutputFormat


-(void)dealloc;


@end


#endif