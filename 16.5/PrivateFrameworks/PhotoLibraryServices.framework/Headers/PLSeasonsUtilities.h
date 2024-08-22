// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSEASONSUTILITIES_H
#define PLSEASONSUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSeasonsUtilities : NSObject



+(BOOL)isCountryCodePartOfNorthernHemisphere:(id)arg0 ;
+(BOOL)isCountryCodePartOfSouthernHemisphere:(id)arg0 ;
+(id)_northernMeteorologicalSeasonKeyForMonthNumber:(NSUInteger)arg0 ;
+(id)_seasonCountryCodesDictionary;
+(id)_seasonKeyForMonthNumber:(NSUInteger)arg0 locale:(id)arg1 ;
+(id)_seasonNameForKey:(id)arg0 ;
+(id)_southernMeteorologicalSeasonKeyForMonthNumber:(NSUInteger)arg0 ;
+(id)localizedSeasonNameForDate:(id)arg0 calendar:(id)arg1 locale:(id)arg2 ;


@end


#endif