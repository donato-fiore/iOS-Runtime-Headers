// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FUUTILS_H
#define FUUTILS_H


#import <Foundation/Foundation.h>


@interface FUUtils : NSObject



+(id)airportFromSFAirport:(id)arg0 ;
+(id)convertFlightModel:(id)arg0 withError:(*id)arg1 ;
+(id)testDate;
+(void)enumerateFlightCodesInString:(id)arg0 usingBlock:(id)arg1 ;
+(void)extractTimeForFlightStep:(id)arg0 fromLeg:(id)arg1 ;
+(void)setTestDate:(id)arg0 ;


@end


#endif