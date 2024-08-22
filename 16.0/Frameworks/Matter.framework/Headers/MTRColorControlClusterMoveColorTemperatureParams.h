// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCOLORCONTROLCLUSTERMOVECOLORTEMPERATUREPARAMS_H
#define MTRCOLORCONTROLCLUSTERMOVECOLORTEMPERATUREPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterMoveColorTemperatureParams : NSObject

@property (retain, nonatomic) NSNumber *colorTemperatureMaximumMireds; // ivar: _colorTemperatureMaximumMireds
@property (retain, nonatomic) NSNumber *colorTemperatureMinimumMireds; // ivar: _colorTemperatureMinimumMireds
@property (retain, nonatomic) NSNumber *moveMode; // ivar: _moveMode
@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *rate; // ivar: _rate
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif