// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWLEARNEDNRINFERENCECONFIGURATION_H
#define BWLEARNEDNRINFERENCECONFIGURATION_H

@class NSString, NSDictionary;


#import "BWTiledEspressoInferenceConfiguration.h"

@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (readonly, nonatomic) NSString *outputMediaKey; // ivar: _outputMediaKey
@property (readonly, nonatomic) NSDictionary *sensorConfigurationsByPortType; // ivar: _sensorConfigurationsByPortType


+(id)outputMediaKeyForInferenceType:(int)arg0 ;
-(id)initWithMetalCommandQueue:(id)arg0 sensorConfigurationsByPortType:(id)arg1 inferenceType:(int)arg2 ;
-(void)dealloc;


@end


#endif