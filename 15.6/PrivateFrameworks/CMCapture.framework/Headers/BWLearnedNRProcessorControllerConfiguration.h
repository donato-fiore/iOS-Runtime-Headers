// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWLEARNEDNRPROCESSORCONTROLLERCONFIGURATION_H
#define BWLEARNEDNRPROCESSORCONTROLLERCONFIGURATION_H



#import "BWStillImageProcessorConfiguration.h"
#import "BWVideoFormat.h"

@interface BWLearnedNRProcessorControllerConfiguration : BWStillImageProcessorConfiguration

@property (retain, nonatomic) BWVideoFormat *inputFormat; // ivar: _inputFormat
@property (retain, nonatomic) BWVideoFormat *outputFormat; // ivar: _outputFormat


-(void)dealloc;


@end


#endif