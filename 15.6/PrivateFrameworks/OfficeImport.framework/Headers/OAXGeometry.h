// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OAXGEOMETRY_H
#define OAXGEOMETRY_H


#import <Foundation/Foundation.h>


@interface OAXGeometry : NSObject



+(?)adjustValueWithGuideXmlNode;
+(?)readAdjustCoordFromXmlNode:(?)arg0 nameformulaNameToIndexMap;
+(?)readAdjustValuesFromCustomGeometryXmlNode:(?)arg0 toCustomGeometry:(?)arg1 adjustValueNameToIndexMapdrawingState;
+(?)readCustomGeometryFromXmlNode:(?)arg0 hasImplicitFormulasdrawingState;
+(?)readFormulasFromCustomGeometryXmlNode:(?)arg0 toCustomGeometry:(?)arg1 adjustValueNameToIndexMap:(?)arg2 formulaNameToIndexMapdrawingState;
+(?)readFromParentXmlNodedrawingState;
+(?)readPathsFromCustomGeometryXmlNode:(?)arg0 toCustomGeometry:(?)arg1 formulaNameToIndexMapdrawingState;
+(?)readPresetGeometryFromXmlNodedrawingState;
+(?)readTextRectFromCustomGeometryXmlNode:(?)arg0 toCustomGeometry:(?)arg1 formulaNameToIndexMapdrawingState;
+(id)formulaKeywordEnumMap;
+(id)formulaTypeEnumMap;
+(id)pathFillModeEnumMap;
+(id)shapeTypeEnumMap;
+(id)stringForShapeType:(int)arg0 ;
+(id)stringWritingShapeType:(int)arg0 ;
+(int)shapeTypeForString:(id)arg0 ;
+(void)addFormulasFromFile:(id)arg0 toCustomGeometry:(id)arg1 formulaNameToIndexMap:(id)arg2 drawingState:(id)arg3 ;
+(void)write:(id)arg0 to:(id)arg1 ;
+(void)writePath:(id)arg0 coordSpace:(struct CsRect<int> )arg1 to:(id)arg2 ;
+(void)writeShapePathPoint:(struct OADAdjustPoint )arg0 origin:(struct CsPoint<int> )arg1 to:(id)arg2 ;


@end


#endif