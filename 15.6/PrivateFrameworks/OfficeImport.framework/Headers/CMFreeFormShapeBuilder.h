// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMFREEFORMSHAPEBUILDER_H
#define CMFREEFORMSHAPEBUILDER_H



#import "CMLineShapeBuilder.h"
#import "OADPath.h"

@interface CMFreeFormShapeBuilder : CMLineShapeBuilder {
    OADPath *_path;
    CGSize _space;
}




-(struct CGAffineTransform )affineTransform;
-(struct CGPath *)copyShapeWithTransform:(struct CGAffineTransform )arg0 ;
-(struct CGPoint )_renderPathElement:(id)arg0 withTransform:(struct CGAffineTransform )arg1 inPath:(struct CGPath *)arg2 ;
-(void)setPath:(id)arg0 ;
-(void)setSpace:(struct CGSize )arg0 ;


@end


#endif