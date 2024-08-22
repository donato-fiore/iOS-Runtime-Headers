// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCTEMPERATUREMODEL_H
#define NWCTEMPERATUREMODEL_H

@class NSString, NSArray, UIColor;

#import <Foundation/Foundation.h>


@interface NWCTemperatureModel : NSObject

@property (readonly, nonatomic) CGFloat fraction; // ivar: _fraction
@property (readonly, nonatomic) NSString *localizedTemperatureCurrent; // ivar: _localizedTemperatureCurrent
@property (readonly, nonatomic) NSString *localizedTemperatureHigh; // ivar: _localizedTemperatureHigh
@property (readonly, nonatomic) NSString *localizedTemperatureLow; // ivar: _localizedTemperatureLow
@property (readonly, nonatomic) NSArray *spectrum; // ivar: _spectrum
@property (readonly, nonatomic) NSArray *spectrumTicks; // ivar: _spectrumTicks
@property (readonly, nonatomic) UIColor *tintColorHigh; // ivar: _tintColorHigh
@property (readonly, nonatomic) UIColor *tintColorLow; // ivar: _tintColorLow


+(id)temperatureModelForCurrentObservation:(id)arg0 dailyForecastedConditions:(id)arg1 temperatureFormatter:(id)arg2 shouldUseNoUnitCurrentTemperature:(BOOL)arg3 ;


@end


#endif