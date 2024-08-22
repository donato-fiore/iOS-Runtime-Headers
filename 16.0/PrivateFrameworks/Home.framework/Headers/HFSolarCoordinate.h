// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSOLARCOORDINATE_H
#define HFSOLARCOORDINATE_H


#import <Foundation/Foundation.h>


@interface HFSolarCoordinate : NSObject

@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CGFloat azimuth; // ivar: _azimuth


-(id)initWithAltitude:(CGFloat)arg0 azimuth:(CGFloat)arg1 ;
-(id)initWithGeoCelestialBodyData:(id)arg0 ;
-(void)_convertRadianCoordinateWithAltitude:(CGFloat)arg0 azimuth:(CGFloat)arg1 ;


@end


#endif