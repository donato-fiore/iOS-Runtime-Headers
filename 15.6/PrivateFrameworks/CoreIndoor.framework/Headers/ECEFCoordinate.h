// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECEFCOORDINATE_H
#define ECEFCOORDINATE_H


#import <Foundation/Foundation.h>


@interface ECEFCoordinate : NSObject

@property (nonatomic) CGFloat x; // ivar: _x
@property (nonatomic) CGFloat y; // ivar: _y
@property (nonatomic) CGFloat z; // ivar: _z


+(id)fromLatLon:(id)arg0 ;
-(id)init;
-(id)initFromLatLon:(id)arg0 ;
-(id)initWithX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 ;
-(struct point_xy<double, boost::geometry::cs::cartesian> )toBoostEnuWithLatLonOrigin:(id)arg0 andEcefOrigin:(id)arg1 usingENU:(id)arg2 ;
-(void)setFromLatLon:(id)arg0 ;
-(void)setFromX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 ;


@end


#endif