// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCOLORCONTROLCLUSTERMOVECOLORTEMPERATUREPARAMS_H
#define CHIPCOLORCONTROLCLUSTERMOVECOLORTEMPERATUREPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPColorControlClusterMoveColorTemperatureParams : NSObject

@property (retain, nonatomic) NSNumber *colorTemperatureMaximum; // ivar: _colorTemperatureMaximum
@property (retain, nonatomic) NSNumber *colorTemperatureMinimum; // ivar: _colorTemperatureMinimum
@property (retain, nonatomic) NSNumber *moveMode; // ivar: _moveMode
@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *rate; // ivar: _rate


-(id)init;


@end


#endif