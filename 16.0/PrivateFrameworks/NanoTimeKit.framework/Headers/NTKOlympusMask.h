// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKOLYMPUSMASK_H
#define NTKOLYMPUSMASK_H


#import <Foundation/Foundation.h>


@interface NTKOlympusMask : NSObject



+(CGFloat)angleForHour:(NSUInteger)arg0 minutes:(NSUInteger)arg1 ;
+(CGFloat)angleForMinute:(NSUInteger)arg0 seconds:(NSUInteger)arg1 ;
+(CGFloat)convertAngleForFirstQuadrant:(CGFloat)arg0 ;
+(CGFloat)hourHandAngleWithDate:(id)arg0 ;
+(CGFloat)minuteHandAngleWithDate:(id)arg0 ;
+(CGFloat)normalizeAngle:(CGFloat)arg0 ;
+(NSUInteger)nextQuadrantIndex:(NSUInteger)arg0 ;
+(NSUInteger)quadrantForAngle:(CGFloat)arg0 ;
+(NSUInteger)quadrantForPoint:(struct CGPoint )arg0 ;
+(id)clippingPathFromCenterPoint:(struct CGPoint )arg0 startAngle:(CGFloat)arg1 endAngle:(CGFloat)arg2 radius:(CGFloat)arg3 ;
+(struct CGPoint )convertPoint:(struct CGPoint )arg0 translantedFromFirstToQuadrantIndex:(NSUInteger)arg1 ;
+(struct CGPoint )convertPoint:(struct CGPoint )arg0 translantedQuadrantIndex:(NSUInteger)arg1 ;
+(struct CGPoint )convertPointFromCartesianCoordiatesToViewCoordiates:(struct CGPoint )arg0 centerFromViewCoordinates:(struct CGPoint )arg1 ;
+(struct CGPoint )convertPointFromViewCoordinatesToCartesianCoordiates:(struct CGPoint )arg0 centerFromViewCoordinates:(struct CGPoint )arg1 ;
+(struct CGPoint )nextPointFromStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 radius:(CGFloat)arg2 ;
+(struct CGPoint )pointForAngle:(CGFloat)arg0 radius:(CGFloat)arg1 centerPoint:(struct CGPoint )arg2 ;
+(struct CGPoint )roundPoint:(struct CGPoint )arg0 ;


@end


#endif