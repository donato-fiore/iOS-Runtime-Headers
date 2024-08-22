// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWCENTRYMODEL_H
#define NWCENTRYMODEL_H

@class WFAirQualityConditions, WFWeatherConditions, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NWCEntryModel : NSObject <NSSecureCoding>



@property (readonly) WFAirQualityConditions *airQualityConditions; // ivar: _airQualityConditions
@property (readonly) WFWeatherConditions *conditions; // ivar: _conditions
@property (readonly) WFWeatherConditions *dailyConditions; // ivar: _dailyConditions
@property (readonly) NSArray *hourlyEntryModels; // ivar: _hourlyEntryModels
@property (readonly) NSUInteger timeOfDay; // ivar: _timeOfDay


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConditions:(id)arg0 airQualityConditions:(id)arg1 dailyConditions:(id)arg2 timeOfDay:(NSUInteger)arg3 ;
-(id)initWithConditions:(id)arg0 airQualityConditions:(id)arg1 hourlyEntryModels:(id)arg2 dailyConditions:(id)arg3 timeOfDay:(NSUInteger)arg4 ;
-(id)initWithConditions:(id)arg0 dailyConditions:(id)arg1 timeOfDay:(NSUInteger)arg2 ;
-(id)initWithConditions:(id)arg0 hourlyEntryModels:(id)arg1 dailyConditions:(id)arg2 timeOfDay:(NSUInteger)arg3 ;
-(id)initWithConditions:(id)arg0 hourlyEntryModels:(id)arg1 timeOfDay:(NSUInteger)arg2 ;
-(id)initWithConditions:(id)arg0 timeOfDay:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif