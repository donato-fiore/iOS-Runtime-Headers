// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOALMANAC_H
#define GEOALMANAC_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "GEOAlmanacRiseTransitSet.h"

@interface GEOAlmanac : NSObject {
    ? _location;
    CGFloat _altitude;
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}


@property (readonly, nonatomic) BOOL isDayLight;
@property (readonly, nonatomic) NSDate *nextSunrise;
@property (readonly, nonatomic) NSDate *nextSunset;
@property (readonly, nonatomic) NSDate *nextTransit;
@property (readonly, nonatomic) NSDate *previousSunrise;
@property (readonly, nonatomic) NSDate *previousSunset;
@property (readonly, nonatomic) NSDate *previousTransit;
@property (readonly, nonatomic) NSDate *sunrise;
@property (readonly, nonatomic) NSDate *sunset;
@property (readonly, nonatomic) NSDate *transit;


-(BOOL)isDayLightForDate:(id)arg0 ;
-(BOOL)isDayLightForTime:(CGFloat)arg0 ;
-(id)description;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 ;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 altitudeInDegrees:(CGFloat)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 date:(id)arg1 altitudeInDegrees:(CGFloat)arg2 options:(NSUInteger)arg3 ;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 time:(CGFloat)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 time:(CGFloat)arg1 altitudeInDegrees:(CGFloat)arg2 ;
-(void)calculateAstronomicalTimeForLocation:(struct ? )arg0 time:(CGFloat)arg1 altitudeInDegrees:(CGFloat)arg2 options:(NSUInteger)arg3 ;
-(void)calculateGeocentricDirectionForSunX:(*CGFloat)arg0 Y:(*CGFloat)arg1 Z:(*CGFloat)arg2 ;
-(void)calculateGeocentricDirectionForSunX:(*CGFloat)arg0 Y:(*CGFloat)arg1 Z:(*CGFloat)arg2 date:(id)arg3 ;


@end


#endif