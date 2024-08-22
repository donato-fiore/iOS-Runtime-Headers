// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOLORCONTROLCLUSTERSTEPCOLORTEMPERATUREPARAMS_H
#define MTRCOLORCONTROLCLUSTERSTEPCOLORTEMPERATUREPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterStepColorTemperatureParams : NSObject

@property (retain, nonatomic) NSNumber *colorTemperatureMaximumMireds; // ivar: _colorTemperatureMaximumMireds
@property (retain, nonatomic) NSNumber *colorTemperatureMinimumMireds; // ivar: _colorTemperatureMinimumMireds
@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *stepMode; // ivar: _stepMode
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif