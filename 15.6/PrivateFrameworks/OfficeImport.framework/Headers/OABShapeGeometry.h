// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABSHAPEGEOMETRY_H
#define OABSHAPEGEOMETRY_H


#import <Foundation/Foundation.h>


@interface OABShapeGeometry : NSObject



+(?)writeAdjustValuesFromGeometrytoShapeProperties;
+(int)actualPathCommandForPathCommand:(int)arg0 index:(unsigned short)arg1 ;
+(struct EshComputedValue )computedValueWithAdjustCoord:(struct OADAdjustCoord )arg0 ;
+(struct OADAdjustCoord )adjustCoordWithComputedValue:(struct EshComputedValue )arg0 ;
+(void)appendAdjustPoint:(struct OADAdjustPoint )arg0 toPathParams:(*void)arg1 ;
+(void)readAdjustValuesFromShapeProperties:(struct EshShapeProperties *)arg0 toGeometry:(id)arg1 ;
+(void)readFromFormulas:(*void)arg0 toGeometry:(id)arg1 ;
+(void)readFromLimo:(struct CsPoint<int> )arg0 toGeometry:(id)arg1 ;
+(void)readFromPathCommands:(*void)arg0 pathParams:(*void)arg1 toGeometry:(id)arg2 ;
+(void)readFromShape:(*void)arg0 toShape:(id)arg1 ;
+(void)readFromTextBoxRects:(*void)arg0 toGeometry:(id)arg1 ;
+(void)readGeometryCoordSpaceFromShapeProperties:(struct EshShapeProperties *)arg0 toGeometry:(id)arg1 ;
+(void)readLimoFromPath:(struct EshPath *)arg0 toGeometry:(id)arg1 ;
+(void)readPathCommandsAndParamsFromPath:(struct EshPath *)arg0 toGeometry:(id)arg1 ;
+(void)writeCoordSpaceFromGeometry:(id)arg0 toShape:(*void)arg1 ;
+(void)writeFormulasFromGeometry:(id)arg0 toPath:(struct EshPath *)arg1 ;
+(void)writeFromShape:(id)arg0 toShape:(*void)arg1 ;
+(void)writeLimoFromGeometry:(id)arg0 toPath:(struct EshPath *)arg1 ;
+(void)writePathCommandsAndParamsFromGeometry:(id)arg0 toPath:(struct EshPath *)arg1 ;
+(void)writeTextBodyRectsFromGeometry:(id)arg0 toPath:(struct EshPath *)arg1 ;


@end


#endif