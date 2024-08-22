// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMDRAWABLEMAPPER_H
#define EMDRAWABLEMAPPER_H



#import "CMDrawableMapper.h"

@interface EMDrawableMapper : CMDrawableMapper {
    *CGFloat mRowGrid;
    *CGFloat mColumnGrid;
}




+(BOOL)isAnchorRelative:(id)arg0 ;
-(id)initWithChartDrawable:(id)arg0 box:(struct CGRect )arg1 parent:(id)arg2 ;
-(id)initWithOADDrawable:(id)arg0 parent:(id)arg1 ;
-(id)initWithOADDrawable:(id)arg0 rowGrid:(*CGFloat)arg1 columnGrid:(*CGFloat)arg2 ;
-(id)workbookMapper;
-(id)worksheetMapper;
-(struct CGPoint )anchorMarkerToPosition:(struct EDCellAnchorMarker )arg0 rowGrid:(*CGFloat)arg1 columnGrid:(*CGFloat)arg2 start:(BOOL)arg3 relative:(BOOL)arg4 ;
-(struct CGRect )getImageRect;
-(struct CGRect )mapAnchorToRect:(id)arg0 rowGrid:(*CGFloat)arg1 columnGrid:(*CGFloat)arg2 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBounds;
-(void)mapChartAt:(id)arg0 withState:(id)arg1 ;
-(void)mapDiagramAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtGroupAt:(id)arg0 withState:(id)arg1 ;
-(void)mapOfficeArtShapeAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg0 withState:(id)arg1 ;
-(void)setBoundingBox;


@end


#endif