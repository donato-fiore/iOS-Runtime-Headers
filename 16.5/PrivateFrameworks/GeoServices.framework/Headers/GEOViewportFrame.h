// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVIEWPORTFRAME_H
#define GEOVIEWPORTFRAME_H


#import <Foundation/Foundation.h>


@interface GEOViewportFrame : NSObject

@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) float distance; // ivar: _distance
@property (readonly, nonatomic) float heading; // ivar: _heading
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) float pitch; // ivar: _pitch


-(id)initWithAltitude:(CGFloat)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 heading:(float)arg3 pitch:(float)arg4 distance:(float)arg5 ;
-(id)initWithGEOPDViewportFrame:(id)arg0 ;


@end


#endif