// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCOLORCONTROLCLUSTERSTEPCOLORTEMPERATUREPARAMS_H
#define MTRCOLORCONTROLCLUSTERSTEPCOLORTEMPERATUREPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRColorControlClusterStepColorTemperatureParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *colorTemperatureMaximumMireds; // ivar: _colorTemperatureMaximumMireds
@property (copy, nonatomic) NSNumber *colorTemperatureMinimumMireds; // ivar: _colorTemperatureMinimumMireds
@property (copy, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (copy, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *stepMode; // ivar: _stepMode
@property (copy, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif