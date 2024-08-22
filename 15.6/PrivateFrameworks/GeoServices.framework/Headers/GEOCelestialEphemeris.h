// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCELESTIALEPHEMERIS_H
#define GEOCELESTIALEPHEMERIS_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "GEOCelestialRiseTransitSet.h"
#import "GEOSolarEclipticCelestialBodyData.h"
#import "GEOEquatorialCelestialBodyData.h"
#import "GEOHorizontalCelestialBodyData.h"

@interface GEOCelestialEphemeris : NSObject {
    GEOCelestialRiseTransitSet *_riseTransitSet;
    CGFloat _julianDay;
    ? _coordinate;
    NSInteger _body;
    GEOSolarEclipticCelestialBodyData *_eclipticCoord;
    GEOEquatorialCelestialBodyData *_equatorialCoord;
    GEOHorizontalCelestialBodyData *_horizontalCoord;
    BOOL _highPrecision;
}


@property (readonly, nonatomic) GEOSolarEclipticCelestialBodyData *eclipticCoord;
@property (readonly, nonatomic) CGFloat elongation; // ivar: _elongation
@property (readonly, nonatomic) GEOEquatorialCelestialBodyData *equatorialCoord;
@property (readonly, nonatomic) GEOHorizontalCelestialBodyData *horizontalCoord;
@property (readonly, nonatomic) CGFloat illuminatedFraction; // ivar: _illuminatedFraction
@property (readonly, nonatomic) BOOL isTransitAboveHorizon;
@property (readonly, nonatomic) CGFloat parallacticAngle; // ivar: _parallacticAngle
@property (readonly, nonatomic) CGFloat phaseAngle; // ivar: _phaseAngle
@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) NSDate *transit;


-(id)description;
-(id)initWithLocation:(struct ? )arg0 date:(id)arg1 body:(NSInteger)arg2 ;
-(id)initWithLocation:(struct ? )arg0 date:(id)arg1 body:(NSInteger)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithLocation:(struct ? )arg0 julianDay:(CGFloat)arg1 body:(NSInteger)arg2 altitude:(CGFloat)arg3 useHighPrecision:(BOOL)arg4 ;


@end


#endif