// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWMTEMPERATUREFORMATTER_H
#define NWMTEMPERATUREFORMATTER_H

@class NSString, NSMeasurementFormatter, NSLocale, NSMeasurement, NSNumberFormatter;
@protocol NWMDataFormatter;

#import <Foundation/Foundation.h>


@interface NWMTemperatureFormatter : NSObject <NWMDataFormatter>



@property (getter=shouldAvoidDegreeSymbolOnly) BOOL avoidDegreeSymbolOnly; // ivar: _avoidDegreeSymbolOnly
@property (getter=isCelsiusPreferred) BOOL celsiusPreferred; // ivar: _celsiusPreferred
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMeasurementFormatter *degreeSymbolOnlyFormatter; // ivar: _degreeSymbolOnlyFormatter
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbol; // ivar: _formattedStaleTemperatureWithDegreeSymbol
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithDegreeSymbolRoundedVariant; // ivar: _formattedStaleTemperatureWithDegreeSymbolRoundedVariant
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnit; // ivar: _formattedStaleTemperatureWithUnit
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithUnitRoundedVariant; // ivar: _formattedStaleTemperatureWithUnitRoundedVariant
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnit; // ivar: _formattedStaleTemperatureWithoutUnit
@property (retain, nonatomic) NSString *formattedStaleTemperatureWithoutUnitRoundedVariant; // ivar: _formattedStaleTemperatureWithoutUnitRoundedVariant
@property (readonly) NSUInteger hash;
@property (retain) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSMeasurement *noMeasurement; // ivar: _noMeasurement
@property (retain, nonatomic) NSNumberFormatter *noUnitFormatter; // ivar: _noUnitFormatter
@property (readonly) Class superclass;
@property (readonly, nonatomic) int temperatureUnit; // ivar: _temperatureUnit
@property (retain, nonatomic) NSMeasurementFormatter *unitFormatter; // ivar: _unitFormatter


+(id)autoupdatingFormatter;
+(id)autoupdatingSharedFormatter;
-(CGFloat)_value:(id)arg0 ;
-(id)_formattedStaleTemperatureWithDegreeSymbol:(NSUInteger)arg0 ;
-(id)_formattedStaleTemperatureWithUnit:(NSUInteger)arg0 ;
-(id)_formattedStaleTemperatureWithoutUnit:(NSUInteger)arg0 ;
-(id)_measurementForTemperature:(id)arg0 ;
-(id)formattedWithDegreeSymbol:(id)arg0 fallbackStyle:(NSUInteger)arg1 ;
-(id)formattedWithDegreeSymbol:(id)arg0 style:(NSUInteger)arg1 fallbackStyle:(NSUInteger)arg2 ;
-(id)formattedWithUnit:(id)arg0 ;
-(id)formattedWithUnit:(id)arg0 style:(NSUInteger)arg1 ;
-(id)formattedWithoutUnit:(id)arg0 ;
-(id)formattedWithoutUnit:(id)arg0 style:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithLocale:(id)arg0 temperatureUnit:(int)arg1 ;
-(void)_localeChanged:(id)arg0 ;
-(void)dealloc;
-(void)reloadWithLocale:(id)arg0 ;


@end


#endif