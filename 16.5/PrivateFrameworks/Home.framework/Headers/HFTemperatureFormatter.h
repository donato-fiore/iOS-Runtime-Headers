// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFTEMPERATUREFORMATTER_H
#define HFTEMPERATUREFORMATTER_H

@class NSMeasurementFormatter, NSString, NSNumber;
@protocol HFTemperatureUnitObserver, HFUnitFormatter;



@interface HFTemperatureFormatter : NSMeasurementFormatter <HFTemperatureUnitObserver, HFUnitFormatter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fallbackTemperatureString; // ivar: _fallbackTemperatureString
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inputIsCelsius; // ivar: _inputIsCelsius
@property (nonatomic) BOOL outputIsCelsius; // ivar: _outputIsCelsius
@property (retain, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *unitDescription;


-(NSUInteger)maximumFractionDigits;
-(NSUInteger)minimumFractionDigits;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)measurementForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringForObjectValue:(id)arg0 withUnit:(BOOL)arg1 ;
-(void)setMaximumFractionDigits:(NSUInteger)arg0 ;
-(void)setMinimumFractionDigits:(NSUInteger)arg0 ;
-(void)temperatureUnitObserver:(id)arg0 didChangeTemperatureUnit:(BOOL)arg1 ;


@end


#endif