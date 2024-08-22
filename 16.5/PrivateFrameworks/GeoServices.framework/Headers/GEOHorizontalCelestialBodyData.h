// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOHORIZONTALCELESTIALBODYDATA_H
#define GEOHORIZONTALCELESTIALBODYDATA_H


#import <Foundation/Foundation.h>


@interface GEOHorizontalCelestialBodyData : NSObject

@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CGFloat azimuth; // ivar: _azimuth


-(id)initWithLocation:(struct ? )arg0 date:(id)arg1 body:(NSInteger)arg2 ;
-(id)initWithLocation:(struct ? )arg0 date:(id)arg1 body:(NSInteger)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithLocation:(struct ? )arg0 julianDay:(CGFloat)arg1 body:(NSInteger)arg2 useHighPrecision:(BOOL)arg3 ;


@end


#endif