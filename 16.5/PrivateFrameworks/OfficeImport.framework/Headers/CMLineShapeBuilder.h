// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMLINESHAPEBUILDER_H
#define CMLINESHAPEBUILDER_H



#import "CMShapeBuilder.h"
#import "OADStroke.h"

@interface CMLineShapeBuilder : CMShapeBuilder {
    OADStroke *_stroke;
}




-(float)_adjustedCoefAtIndex:(int)arg0 ;
-(float)_getRotationFromPoint:(struct CGPoint )arg0 toPoint:(struct CGPoint )arg1 withBounds:(id)arg2 ;
-(struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform )arg0 ;
-(struct CGRect )_boundingBoxForLineEnd:(id)arg0 ;
-(void)_renderBentConnector2InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform )arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6 ;
-(void)_renderBentConnector3InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform )arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6 ;
-(void)_renderLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 withOrientation:(float)arg2 inPath:(struct CGPath *)arg3 ;
-(void)_renderStraightConnector1InPath:(struct CGPath *)arg0 withTransform:(struct CGAffineTransform )arg1 andOrientedBounds:(id)arg2 headSrc:(struct CGPoint *)arg3 headDst:(struct CGPoint *)arg4 tailSrc:(struct CGPoint *)arg5 tailDst:(struct CGPoint *)arg6 ;
-(void)setStroke:(id)arg0 ;


@end


#endif