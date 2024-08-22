// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMOMENTGENERATIONUTILS_H
#define PLMOMENTGENERATIONUTILS_H


#import <Foundation/Foundation.h>


@interface PLMomentGenerationUtils : NSObject



+(BOOL)isAtFrequentLocationForMoment:(id)arg0 frequentLocations:(id)arg1 ;
+(BOOL)isNearFrequentLocationForMoment:(id)arg0 frequentLocations:(id)arg1 ;
+(BOOL)isTopFrequentLocationForMoment:(id)arg0 frequentLocations:(id)arg1 ;
+(id)frequentLocationsOverlappingStartDate:(id)arg0 endDate:(id)arg1 frequentLocations:(id)arg2 ;
+(id)sortedOverlappingFrequentLocations:(id)arg0 ;
+(unsigned short)locationTypeForLocation:(id)arg0 usingLocationsOfInterest:(id)arg1 routineIsAvailable:(BOOL)arg2 horizontalAccuracy:(CGFloat)arg3 ;
+(unsigned short)processedLocationTypeForMoment:(id)arg0 locationsOfInterest:(id)arg1 frequentLocations:(id)arg2 routineIsAvailable:(BOOL)arg3 ;
+(void)processLocationIfNecessaryInMoment:(id)arg0 usingManager:(id)arg1 frequentLocations:(id)arg2 frequentLocationsDidChange:(BOOL)arg3 ;


@end


#endif