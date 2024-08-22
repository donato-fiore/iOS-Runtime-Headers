// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PMDRAWABLEMAPPER_H
#define PMDRAWABLEMAPPER_H



#import "CMDrawableMapper.h"
#import "OADShape.h"
#import "CMDrawingContext.h"

@interface PMDrawableMapper : CMDrawableMapper {
    OADShape *mShape;
    CMDrawingContext *mDrawingContext;
    BOOL mTopLevelMapper;
}




-(BOOL)isTopLevelMapper;
-(id)drawingContext;
-(struct CGRect )shapeTextBoxWithState:(id)arg0 ;
-(struct CGRect )slideRect;
-(struct CGRect )transformRectToPage:(struct CGRect )arg0 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBounds;
-(void)mapChartAt:(id)arg0 withState:(id)arg1 ;
-(void)mapDiagramAt:(id)arg0 withState:(id)arg1 ;
-(void)mapFreeForm:(id)arg0 orientedBounds:(id)arg1 transformedBounds:(struct CGRect *)arg2 state:(id)arg3 ;
-(void)mapOfficeArtGroupAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtImageAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtShapeAt:(id)arg0 withState:(id)arg1 ;
-(void)mapRectangularShapeAt:(id)arg0 withState:(id)arg1 ;
-(void)mapShapeAsBackgroundAt:(id)arg0 withState:(id)arg1 ;
-(void)setDrawingContext:(id)arg0 ;
-(void)setTopLevelMapper:(BOOL)arg0 ;


@end


#endif