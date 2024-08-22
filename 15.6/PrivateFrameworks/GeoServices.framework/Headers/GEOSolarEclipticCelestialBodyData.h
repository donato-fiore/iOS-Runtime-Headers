// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSOLARECLIPTICCELESTIALBODYDATA_H
#define GEOSOLARECLIPTICCELESTIALBODYDATA_H


#import <Foundation/Foundation.h>


@interface GEOSolarEclipticCelestialBodyData : NSObject

@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude


-(id)initWithDate:(id)arg0 body:(NSInteger)arg1 ;
-(id)initWithDate:(id)arg0 body:(NSInteger)arg1 useHighPrecision:(BOOL)arg2 ;
-(id)initWithJulianDay:(CGFloat)arg0 body:(NSInteger)arg1 useHighPrecision:(BOOL)arg2 ;


@end


#endif