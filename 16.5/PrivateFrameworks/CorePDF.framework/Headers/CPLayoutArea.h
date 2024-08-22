// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLAYOUTAREA_H
#define CPLAYOUTAREA_H



#import "CPRotatedRegion.h"

@interface CPLayoutArea : CPRotatedRegion {
    BOOL isFirstLayout;
    BOOL hasRotatedCharacters;
}




-(BOOL)hasRotatedCharacters;
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
-(void)setHasRotatedCharacters:(BOOL)arg0 ;
-(void)setIsFirstLayout:(BOOL)arg0 ;
-(void)setIsImageRegion:(BOOL)arg0 ;


@end


#endif