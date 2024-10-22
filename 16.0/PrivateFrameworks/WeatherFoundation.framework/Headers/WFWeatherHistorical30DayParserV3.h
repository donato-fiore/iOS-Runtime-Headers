// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFWEATHERHISTORICAL30DAYPARSERV3_H
#define WFWEATHERHISTORICAL30DAYPARSERV3_H

@class NSString;
@protocol WFForecastDataParser;

#import <Foundation/Foundation.h>


@interface WFWeatherHistorical30DayParserV3 : NSObject <WFForecastDataParser>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dateFormatter;
+(id)daysOfWeek;
-(NSInteger)getDataIndexFromFirstDayOfWeek:(id)arg0 andRequestedDate:(id)arg1 ;
-(id)parseForecastData:(id)arg0 types:(NSUInteger)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 error:(*id)arg5 ;
-(id)parseForecastData:(id)arg0 types:(NSUInteger)arg1 location:(id)arg2 locale:(id)arg3 date:(id)arg4 error:(*id)arg5 rules:(id)arg6 ;
-(id)parseHistorical30DayForecastDataFromJson:(id)arg0 location:(id)arg1 date:(id)arg2 error:(*id)arg3 ;


@end


#endif