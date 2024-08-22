// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSHAPEUTILS_H
#define CMSHAPEUTILS_H


#import <Foundation/Foundation.h>


@interface CMShapeUtils : NSObject



+(BOOL)isShapeALine:(id)arg0 ;
+(CGFloat)fixedPointDegToRad:(int)arg0 ;
+(CGFloat)getFormulaResultFromCustomGeometry:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(CGFloat)mapAdjustCoord:(struct OADAdjustCoord )arg0 geometry:(id)arg1 ;
+(CGFloat)mapFormulaOfType:(int)arg0 argValues:(*CGFloat)arg1 isEscher:(BOOL)arg2 ;
+(CGFloat)milliMinutesToRad:(int)arg0 ;
+(CGFloat)nativeAngleToRad:(int)arg0 isEscher:(BOOL)arg1 ;
+(float)fontSizeForText:(id)arg0 insideRectangle:(struct CGSize )arg1 ;
+(float)intersectionAngleNextToAngle:(float)arg0 isAfter:(BOOL)arg1 nodeSize:(struct CGSize )arg2 ;
+(float)normalizedAngle:(float)arg0 ;
+(float)scaleFactorFromLength:(float)arg0 toLength:(float)arg1 ;
+(id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg0 parentOrientedBounds:(id)arg1 parentLogicalBounds:(struct CGRect )arg2 ;
+(id)inscribedBoundsWithBounds:(id)arg0 logicalBounds:(struct CGRect )arg1 ;
+(id)internalBoundsWithBounds:(id)arg0 scaleBounds:(struct CGRect )arg1 ;
+(id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg0 parentBounds:(id)arg1 ;
+(id)transformFromBounds:(struct CGRect )arg0 toOrientedBounds:(id)arg1 ;
+(id)transformedBoundsWithBounds:(id)arg0 transform:(id)arg1 ;
+(int)mapFormulaKeywordValue:(int)arg0 geometry:(id)arg1 ;
+(int)radToFixedPointDeg:(CGFloat)arg0 ;
+(int)radToMilliMinutes:(CGFloat)arg0 ;
+(int)radToNativeAngle:(CGFloat)arg0 isEscher:(BOOL)arg1 ;
+(struct CGRect )transformRect:(struct CGRect )arg0 scale:(float)arg1 offsetX:(float)arg2 offsetY:(float)arg3 ;
+(void)setCoordSpaceForCustomeGeometry:(id)arg0 fromSize:(struct CGSize )arg1 ;


@end


#endif