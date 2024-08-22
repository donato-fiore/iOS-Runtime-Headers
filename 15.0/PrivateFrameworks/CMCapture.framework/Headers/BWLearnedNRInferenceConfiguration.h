// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWLEARNEDNRINFERENCECONFIGURATION_H
#define BWLEARNEDNRINFERENCECONFIGURATION_H

@class NSArray;
@protocol MTLCommandQueue;


#import "BWTiledEspressoInferenceConfiguration.h"

@interface BWLearnedNRInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (readonly, retain, nonatomic) NSObject<MTLCommandQueue> *metalCommandQueue; // ivar: _metalCommandQueue
@property (readonly, retain, nonatomic) NSArray *sensorConfigurations; // ivar: _sensorConfigurations


-(id)initWithMetalCommandQueue:(id)arg0 sensorConfigurations:(id)arg1 ;
-(void)dealloc;


@end


#endif