// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEVENTGEOCODE_H
#define SGEVENTGEOCODE_H


#import <Foundation/Foundation.h>


@interface SGEventGeocode : NSObject



+(BOOL)isGeocodeCandidate:(id)arg0 ;
+(BOOL)isGeocodeCandidateLocation:(id)arg0 forEvent:(id)arg1 ;
+(BOOL)locationIsAirport:(id)arg0 ;
+(BOOL)locationIsGeocoded:(id)arg0 ;
+(id)_serialQueue;
+(id)dateForUTCDate:(id)arg0 withTimeZone:(id)arg1 ;
+(id)geocodeEvent:(id)arg0 ;
+(id)poiCategoriesFromString:(id)arg0 ;
+(void)geocodeAddress:(id)arg0 withCallback:(id)arg1 ;
+(void)geocodeAddressWithCanonicalSearch:(id)arg0 withCallback:(id)arg1 ;
+(void)geocodeEvent:(id)arg0 withCallback:(id)arg1 ;
+(void)geocodeLocation:(id)arg0 usingMode:(NSUInteger)arg1 withGeoFilters:(id)arg2 withCallback:(id)arg3 ;
+(void)geocodePOIWithName:(id)arg0 ofTypes:(id)arg1 inRegion:(id)arg2 withCallback:(id)arg3 ;


@end


#endif