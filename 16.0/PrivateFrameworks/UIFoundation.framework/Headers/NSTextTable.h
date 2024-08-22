// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSTEXTTABLE_H
#define NSTEXTTABLE_H

@protocol NSSecureCoding;


#import "NSTextBlock.h"

@interface NSTextTable : NSTextBlock <NSSecureCoding>

 {
    NSUInteger _numCols;
    NSUInteger _tableFlags;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)_missingColumnsForRowRange:(struct _NSRange )arg0 blockIndex:(NSUInteger)arg1 text:(id)arg2 ;
-(BOOL)collapsesBorders;
-(BOOL)hidesEmptyCells;
-(NSUInteger)_tableFlags;
-(NSUInteger)layoutAlgorithm;
-(NSUInteger)numberOfColumns;
-(id)_descriptionAtIndex:(NSUInteger)arg0 text:(id)arg1 ;
-(id)_rowArrayForBlock:(id)arg0 atIndex:(NSUInteger)arg1 text:(id)arg2 layoutManager:(id)arg3 containerWidth:(CGFloat)arg4 withRepetitions:(BOOL)arg5 collapseBorders:(BOOL)arg6 rowCharRange:(struct _NSRange *)arg7 indexInRow:(*NSUInteger)arg8 startingRow:(*NSInteger)arg9 startingColumn:(*NSInteger)arg10 previousRowBlockHelper:(*id)arg11 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(struct CGRect )_contentRectForCharRange:(struct _NSRange )arg0 textContainer:(id)arg1 ;
-(struct CGRect )boundsRectForBlock:(id)arg0 contentRect:(struct CGRect )arg1 inRect:(struct CGRect )arg2 textContainer:(id)arg3 characterRange:(struct _NSRange )arg4 ;
-(struct CGRect )rectForBlock:(id)arg0 layoutAtPoint:(struct CGPoint )arg1 inRect:(struct CGRect )arg2 textContainer:(id)arg3 characterRange:(struct _NSRange )arg4 ;
-(void)_setTableFlags:(NSUInteger)arg0 ;
-(void)_takeValuesFromTextBlock:(id)arg0 ;
-(void)dealloc;
-(void)drawBackgroundForBlock:(id)arg0 withFrame:(struct CGRect )arg1 inView:(id)arg2 characterRange:(struct _NSRange )arg3 layoutManager:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCollapsesBorders:(BOOL)arg0 ;
-(void)setHidesEmptyCells:(BOOL)arg0 ;
-(void)setLayoutAlgorithm:(NSUInteger)arg0 ;
-(void)setNumberOfColumns:(NSUInteger)arg0 ;


@end


#endif