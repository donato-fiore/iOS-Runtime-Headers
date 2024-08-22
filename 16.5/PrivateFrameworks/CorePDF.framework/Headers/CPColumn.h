// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPCOLUMN_H
#define CPCOLUMN_H



#import "CPRotatedRegion.h"

@interface CPColumn : CPRotatedRegion {
    BOOL hasCentredParagraph;
    BOOL hasColumnBreak;
    CGFloat maxLeftPad;
    CGFloat maxRightPad;
    CGFloat maxRight;
    CGFloat minLeft;
}


@property BOOL complete; // ivar: complete


-(BOOL)hasCentredParagraph;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isImageRegion;
-(BOOL)isRowRegion;
-(BOOL)isShapeRegion;
-(CGFloat)bottomBaseline;
-(CGFloat)leftPad;
-(CGFloat)maxLeftPad;
-(CGFloat)maxRightPad;
-(CGFloat)rightPad;
-(CGFloat)selectionBottom;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(int)inOrder;
-(int)outOrder;
-(struct CGRect )columnBounds;
-(struct CGRect )paddedBounds;
-(void)accept:(id)arg0 ;
-(void)dealloc;
-(void)setHasCentredParagraph:(BOOL)arg0 ;
-(void)setHasColumnBreak:(BOOL)arg0 ;
-(void)setIsImageRegion:(BOOL)arg0 ;
-(void)setMaxLeftPad:(CGFloat)arg0 ;
-(void)setMaxRightPad:(CGFloat)arg0 ;


@end


#endif