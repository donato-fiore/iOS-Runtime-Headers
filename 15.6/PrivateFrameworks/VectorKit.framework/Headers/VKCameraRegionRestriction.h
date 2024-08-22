// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCAMERAREGIONRESTRICTION_H
#define VKCAMERAREGIONRESTRICTION_H

@class GEOMapRegion;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VKCameraRegionRestriction : NSObject <NSSecureCoding>

 {
    Box<double, 2> _singleRestrictionMercator;
    Box<double, 2> _westOfDatelineMercator;
    Box<double, 2> _eastOfDatelineMercator;
    Box<double, 2> _singleRestrictionCoord;
    Box<double, 2> _westOfDatelineCoord;
    Box<double, 2> _eastOfDatelineCoord;
}


@property (readonly, nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (readonly, retain, nonatomic) GEOMapRegion *mapRegion; // ivar: _mapRegion


+(BOOL)supportsSecureCoding;
-(BOOL)containsCoordinate:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMapRegion:(id)arg0 ;
-(struct ? )clampedCoordinate:(struct ? )arg0 ;
-(struct Matrix<double, 2, 1> )clampedPosition:(struct Matrix<double, 2, 1> )arg0 ;
-(struct Matrix<double, 2, 1> )clampedPosition:(struct Matrix<double, 2, 1> )arg0 usingSingleRestriction:(struct Box<double, 2> )arg1 westOfDatelineRestriction:(struct Box<double, 2> )arg2 eastOfDatelineRestriction:(struct Box<double, 2> )arg3 wrapRange:(struct Range<double> )arg4 ;
-(struct Matrix<double, 2, 1> )clampedPositionForOrigin:(struct Matrix<double, 2, 1> )arg0 delta:(struct Matrix<double, 2, 1> )arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)radianSingleRect:(*void)arg0 westOfDatelineRect:(*void)arg1 eastOfDatelineRect:(*void)arg2 ;


@end


#endif