// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSOLARRICHCOMPLICATONCIRCULARPATH_H
#define NTKSOLARRICHCOMPLICATONCIRCULARPATH_H


#import <Foundation/Foundation.h>


@interface NTKSolarRichComplicatonCircularPath : NSObject



+(id)_cachedSolarPathForDiameter:(CGFloat)arg0 horizonLineTop:(CGFloat)arg1 horizonLineHeight:(CGFloat)arg2 maxCurveHeight:(CGFloat)arg3 solarTimeModel:(id)arg4 sunriseWaypoint:(id)arg5 sunsetWayPoint:(id)arg6 cacheMissBlock:(id)arg7 ;
+(id)_cachedSolarPathKeyForDiameter:(CGFloat)arg0 horizonLineTop:(CGFloat)arg1 horizonLineHeight:(CGFloat)arg2 maxCurveHeight:(CGFloat)arg3 solarTimeModel:(id)arg4 sunriseWaypoint:(id)arg5 sunsetWayPoint:(id)arg6 ;
+(id)_solarPathCache;
+(id)pathWithDiameter:(CGFloat)arg0 horizonLineTop:(CGFloat)arg1 horizonLineHeight:(CGFloat)arg2 maxCurveHeight:(CGFloat)arg3 solarTimeModel:(id)arg4 sunriseWaypoint:(id)arg5 sunsetWayPoint:(id)arg6 ;


@end


#endif