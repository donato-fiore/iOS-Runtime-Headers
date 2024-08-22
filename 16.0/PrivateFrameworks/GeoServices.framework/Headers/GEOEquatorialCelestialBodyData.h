// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOEQUATORIALCELESTIALBODYDATA_H
#define GEOEQUATORIALCELESTIALBODYDATA_H


#import <Foundation/Foundation.h>


@interface GEOEquatorialCelestialBodyData : NSObject

@property (readonly, nonatomic) CGFloat declination; // ivar: _declination
@property (readonly, nonatomic) CGFloat rightAscension; // ivar: _rightAscension


-(id)initWithDate:(id)arg0 body:(NSInteger)arg1 ;
-(id)initWithDate:(id)arg0 body:(NSInteger)arg1 useHighPrecision:(BOOL)arg2 ;
-(id)initWithJulianDay:(CGFloat)arg0 body:(NSInteger)arg1 ;
-(id)initWithJulianDay:(CGFloat)arg0 body:(NSInteger)arg1 useHighPrecision:(BOOL)arg2 ;


@end


#endif