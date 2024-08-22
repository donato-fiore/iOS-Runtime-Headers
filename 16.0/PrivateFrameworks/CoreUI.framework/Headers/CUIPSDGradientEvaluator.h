// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIPSDGRADIENTEVALUATOR_H
#define CUIPSDGRADIENTEVALUATOR_H

@class NSArray;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CUIPSDGradientEvaluator : NSObject <NSCoding, NSCopying>

 {
    NSArray *colorStops;
    NSArray *colorMidpointLocations;
    NSArray *opacityStops;
    NSArray *opacityMidpointLocations;
    CGFloat smoothingCoefficient;
    _psdGradientColor fillColor;
    ? pgeFlags;
}


@property (nonatomic) int blendMode; // ivar: blendMode


+(void)initialize;
-(BOOL)hasEdgePixel;
-(BOOL)isDithered;
-(CGFloat)_smoothedInterpolationOfLocation:(CGFloat)arg0 betweenLower:(CGFloat)arg1 upper:(CGFloat)arg2 scaledMidpoint:(CGFloat)arg3 ;
-(CGFloat)fillCoefficient;
-(CGFloat)smoothingCoefficient;
-(id)_cleanedUpMidpointLocationsFromLocations:(id)arg0 ;
-(id)colorMidpointLocations;
-(id)colorStops;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorStops:(id)arg0 colorMidpoints:(id)arg1 opacityStops:(id)arg2 opacityMidpoints:(id)arg3 smoothingCoefficient:(CGFloat)arg4 fillCoefficient:(CGFloat)arg5 ;
-(id)initWithColorStops:(id)arg0 colorMidpoints:(id)arg1 opacityStops:(id)arg2 opacityMidpoints:(id)arg3 smoothingCoefficient:(CGFloat)arg4 fillColor:(struct _psdGradientColor )arg5 dither:(BOOL)arg6 ;
-(id)opacityMidpointLocations;
-(id)opacityStops;
-(struct _psdGradientColor )_smoothedGradientColorAtLocation:(CGFloat)arg0 ;
-(struct _psdGradientColor )fillColor;
-(void)_createOrderedStops:(*id)arg0 midpoints:(*id)arg1 fromStops:(id)arg2 midpoints:(id)arg3 edgePixel:(*NSInteger)arg4 ;
-(void)customizeForDistance:(CGFloat)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setColorStops:(id)arg0 midpoints:(id)arg1 ;
-(void)setFillCoefficient:(CGFloat)arg0 ;
-(void)setOpacityStops:(id)arg0 midpoints:(id)arg1 ;
-(void)setSmoothingCoefficient:(CGFloat)arg0 ;


@end


#endif