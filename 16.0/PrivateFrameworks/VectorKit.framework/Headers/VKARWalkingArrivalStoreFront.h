// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKARWALKINGARRIVALSTOREFRONT_H
#define VKARWALKINGARRIVALSTOREFRONT_H


#import <Foundation/Foundation.h>


@interface VKARWalkingArrivalStoreFront : NSObject {
    OrientedBox<double, 2U, double, double> _face;
    Unit<geo::MeterUnitDescription, double> _undulation;
    Matrix<float, 2, 1> _dimensionsInMeters;
}


@property ? appliedUndulation;
@property ? bottomCenterCoordinate;
@property (readonly, nonatomic) Mercator3<double> bottomCenterPoint;
@property ? face;
@property ? faceHeightInMeters;
@property ? faceWidthInMeters;
@property ? normal;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithGEOOrientedBox:(id)arg0 undulationProvider:(id)arg1 ;
-(id)initWithOrientedRect:(*void)arg0 ;
-(id)initWithOrientedRect:(*void)arg0 undulationProvider:(id)arg1 ;
-(id)initWithYaw:(float)arg0 pitch:(float)arg1 roll:(float)arg2 x:(CGFloat)arg3 y:(CGFloat)arg4 z:(CGFloat)arg5 w:(float)arg6 h:(float)arg7 undulationProvider:(id)arg8 ;


@end


#endif