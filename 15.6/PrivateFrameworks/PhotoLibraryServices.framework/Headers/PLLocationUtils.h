// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLLOCATIONUTILS_H
#define PLLOCATIONUTILS_H


#import <Foundation/Foundation.h>


@interface PLLocationUtils : NSObject



+(BOOL)canUseCoordinate:(struct CLLocationCoordinate2D )arg0 ;
+(BOOL)horizontalAccuracyIsCoarse:(CGFloat)arg0 ;
+(BOOL)locationIsCoarse:(id)arg0 ;
+(id)predicateForAssetWithLocation;
+(id)predicateForMomentWithLocation;
+(struct CLLocationCoordinate2D )defaultLocationCoordinate2D;
+(struct PLCartesianCoordinate3D )cartesianCoordinateFromLatitude:(float)arg0 longitude:(float)arg1 ;


@end


#endif