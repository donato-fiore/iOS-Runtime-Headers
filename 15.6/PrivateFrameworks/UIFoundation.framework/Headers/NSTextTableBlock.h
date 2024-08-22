// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSTEXTTABLEBLOCK_H
#define NSTEXTTABLEBLOCK_H

@protocol NSSecureCoding;


#import "NSTextBlock.h"
#import "NSTextTable.h"

@interface NSTextTableBlock : NSTextBlock <NSSecureCoding>

 {
    NSTextTable *_table;
    NSInteger _rowNum;
    NSInteger _colNum;
    NSInteger _rowSpan;
    NSInteger _colSpan;
}




+(BOOL)supportsSecureCoding;
+(void)initialize;
-(NSInteger)columnSpan;
-(NSInteger)rowSpan;
-(NSInteger)startingColumn;
-(NSInteger)startingRow;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTable:(id)arg0 startingRow:(NSInteger)arg1 rowSpan:(NSInteger)arg2 startingColumn:(NSInteger)arg3 columnSpan:(NSInteger)arg4 ;
-(id)table;
-(struct CGRect )boundsRectForContentRect:(struct CGRect )arg0 inRect:(struct CGRect )arg1 textContainer:(id)arg2 characterRange:(struct _NSRange )arg3 ;
-(struct CGRect )rectForLayoutAtPoint:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 textContainer:(id)arg2 characterRange:(struct _NSRange )arg3 ;
-(void)_setColumnSpan:(NSInteger)arg0 ;
-(void)_setRowSpan:(NSInteger)arg0 ;
-(void)dealloc;
-(void)drawBackgroundWithFrame:(struct CGRect )arg0 inView:(id)arg1 characterRange:(struct _NSRange )arg2 layoutManager:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif