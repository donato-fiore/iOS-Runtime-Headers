// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMDIAGRAMPOINTMAPPER_H
#define CMDIAGRAMPOINTMAPPER_H

@class NSString;


#import "CMMapper.h"
#import "ODDPoint.h"
#import "CMDrawingContext.h"
#import "OADOrientedBounds.h"

@interface CMDiagramPointMapper : CMMapper {
    ODDPoint *mPoint;
    CMDrawingContext *mDrawingContext;
    OADOrientedBounds *mOrientedBounds;
    NSString *mPresentationName;
}




-(float)defaultFontSize;
-(id)baseTextListStyleWithBounds:(id)arg0 isCentered:(BOOL)arg1 ;
-(id)diagram;
-(id)fill;
-(id)initWithPoint:(id)arg0 drawingContext:(id)arg1 orientedBounds:(id)arg2 parent:(id)arg3 ;
-(id)plainText;
-(id)presentationName;
-(id)presentationWithName:(id)arg0 ;
-(id)shapeStyle;
-(id)stroke;
-(id)styleMatrix;
-(id)transformForPresentationWithName:(id)arg0 ;
-(id)transformPresentationName;
-(void)applyDiagramStyleToShapeProperties;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapChildrenTextAt:(id)arg0 style:(id)arg1 level:(int)arg2 withState:(id)arg3 ;
-(void)mapChlidrenAt:(id)arg0 withState:(id)arg1 ;
-(void)mapPointTextAt:(id)arg0 style:(id)arg1 level:(int)arg2 withState:(id)arg3 ;
-(void)mapSiblingTextAt:(id)arg0 style:(id)arg1 level:(int)arg2 withState:(id)arg3 ;
-(void)mapStyledRectangle:(struct CGRect )arg0 at:(id)arg1 withState:(id)arg2 ;
-(void)mapTextAt:(id)arg0 withBounds:(id)arg1 isCentered:(BOOL)arg2 includeChildren:(BOOL)arg3 withState:(id)arg4 ;
-(void)renderShapeAsBackgroundInBounds:(id)arg0 ;
-(void)setPresentationName:(id)arg0 ;


@end


#endif