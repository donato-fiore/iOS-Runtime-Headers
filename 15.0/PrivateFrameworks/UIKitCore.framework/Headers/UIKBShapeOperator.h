// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBSHAPEOPERATOR_H
#define UIKBSHAPEOPERATOR_H


#import <Foundation/Foundation.h>


@interface UIKBShapeOperator : NSObject

@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)operatorWithScale:(CGFloat)arg0 ;
-(id)geometryByScalingShapeGeometry:(id)arg0 factor:(struct CGSize )arg1 ;
-(id)shapeByScalingShape:(id)arg0 factor:(struct CGSize )arg1 ;
-(id)shapesByCenteringShapes:(id)arg0 insideRect:(struct CGRect )arg1 ;
-(id)shapesByCenteringShapesPreservingLayout:(id)arg0 insideRect:(struct CGRect )arg1 ;
-(id)shapesByCenteringShapesPreservingLayout:(id)arg0 insideRect:(struct CGRect )arg1 horizontal:(BOOL)arg2 vertical:(BOOL)arg3 ;
-(id)shapesByElaboratingShapes:(id)arg0 insideShape:(id)arg1 count:(NSInteger)arg2 ;
-(id)shapesByHorizontallyCenteringShapesPreservingLayout:(id)arg0 insideRect:(struct CGRect )arg1 ;
-(id)shapesByInsettingShapes:(id)arg0 withInsets:(struct UIEdgeInsets )arg1 ;
-(id)shapesByRepositioningShapes:(id)arg0 withOffset:(struct CGPoint )arg1 ;
-(id)shapesByResizingShapes:(id)arg0 withOffset:(struct CGPoint )arg1 ;
-(id)shapesByScalingShapes:(id)arg0 factor:(struct CGSize )arg1 ;
-(id)shapesByVerticallyCenteringShapesPreservingLayout:(id)arg0 insideRect:(struct CGRect )arg1 ;
-(struct ? )_scaleRange:(struct ? )arg0 factor:(CGFloat)arg1 ;
-(struct CGPoint )offsetForCenteringShapes:(id)arg0 insideRect:(struct CGRect )arg1 ;
-(struct CGRect )_scaleRect:(struct CGRect )arg0 factor:(struct CGSize )arg1 ;
-(struct CGRect )rectByScalingRect:(struct CGRect )arg0 factor:(struct CGSize )arg1 ;


@end


#endif