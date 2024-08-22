// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLAYOUTAREA_H
#define CPLAYOUTAREA_H



#import "CPRegion.h"

@interface CPLayoutArea : CPRegion {
    BOOL isFirstLayout;
}




-(BOOL)isBoxRegion;
-(BOOL)isFirstLayout;
-(BOOL)isGraphicalRegion;
-(BOOL)isImageRegion;
-(BOOL)isRowRegion;
-(BOOL)isShapeRegion;
-(BOOL)isSimilarTo:(id)arg0 ;
-(CGFloat)selectionBottom;
-(id)description;
-(id)init;
-(id)properties;
-(struct CGRect )layoutAreaBounds;
-(void)accept:(id)arg0 ;
-(void)addColumnBreaks;
-(void)setIsFirstLayout:(BOOL)arg0 ;
-(void)setIsImageRegion:(BOOL)arg0 ;


@end


#endif