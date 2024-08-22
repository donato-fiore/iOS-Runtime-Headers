// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODIDRAWABLE_H
#define ODIDRAWABLE_H


#import <Foundation/Foundation.h>


@interface ODIDrawable : NSObject



+(id)addShapeWithBounds:(struct CGRect )arg0 rotation:(float)arg1 geometry:(id)arg2 state:(id)arg3 ;
+(id)presentationWithName:(id)arg0 point:(id)arg1 ;
+(id)shapeGeometryForBezierPath:(id)arg0 gSpace:(struct CGRect )arg1 ;
+(id)shapeGeometryForDoubleArrowWithControlPoint:(struct CGPoint )arg0 ;
+(id)shapeGeometryForEllipse;
+(id)shapeGeometryForRectangle;
+(id)shapeGeometryForRightArrowWithControlPoint:(struct CGPoint )arg0 ;
+(id)shapeGeometryForRoundedRectangleWithRadius:(float)arg0 ;
+(id)shapeGeometryWithShapeType:(int)arg0 adjustValues:(*int)arg1 ;
+(id)styleForLabelName:(id)arg0 styleCount:(int)arg1 styleIndex:(int)arg2 state:(id)arg3 ;
+(id)styleForPresentation:(id)arg0 point:(id)arg1 state:(id)arg2 ;
+(struct CGSize )sizeOfDiagram:(id)arg0 ;
+(void)addArrowHeadToShapeProperties:(id)arg0 ;
+(void)map1dArrowStyleFromPoint:(id)arg0 shape:(id)arg1 state:(id)arg2 ;
+(void)map1dArrowStyleToShape:(id)arg0 state:(id)arg1 ;
+(void)mapShapeProperties:(id)arg0 shape:(id)arg1 state:(id)arg2 ;
+(void)mapShapeProperties:(id)arg0 shapeStyle:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleAndTextFromPoint:(id)arg0 shape:(id)arg1 state:(id)arg2 ;
+(void)mapStyleForLabelName:(id)arg0 point:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleForLabelName:(id)arg0 shape:(id)arg1 state:(id)arg2 ;
+(void)mapStyleForPresentationName:(id)arg0 point:(id)arg1 shape:(id)arg2 state:(id)arg3 ;
+(void)mapStyleFromPoint:(id)arg0 shape:(id)arg1 state:(id)arg2 ;


@end


#endif