// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCELLMAPPER_H
#define EMCELLMAPPER_H



#import "CMMapper.h"
#import "EDReference.h"

@interface EMCellMapper : CMMapper {
    *EDCellHeader edCell;
    EDReference *edMergedCellReference;
    int rowNumber;
    int firstColumn;
    int lastColumn;
    int columnSpan;
    BOOL firstCellFlag;
    BOOL spreadLeftFlag;
    CGFloat columnWidth;
}




+(BOOL)isCellEmpty:(struct EDCellHeader *)arg0 ;
-(BOOL)isCellEmpty;
-(BOOL)isCellMerged;
-(BOOL)isCellSpreading:(id)arg0 ;
-(BOOL)isFirstCell;
-(CGFloat)columnWidth;
-(id)initWithEDCell:(struct EDCellHeader *)arg0 rowInfo:(struct EDRowInfo *)arg1 parent:(id)arg2 state:(id)arg3 ;
-(id)initWithParent:(id)arg0 ;
-(id)mapHyperlink:(id)arg0 at:(id)arg1 ;
-(int)columnSpan;
-(int)firstColumn;
-(int)lastColumn;
-(void)adjustColumnSpanForGrid:(*CGFloat)arg0 columnCount:(NSUInteger)arg1 nextCell:(struct EDCellHeader *)arg2 withState:(id)arg3 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 height:(CGFloat)arg2 nextCell:(struct EDCellHeader *)arg3 ;
-(void)mapRowColSpansAt:(id)arg0 withState:(id)arg1 ;
-(void)resetColumnSpan:(int)arg0 ;
-(void)setFirstCellFlag;
-(void)setFirstColumn:(int)arg0 ;
-(void)setLastColumn:(int)arg0 ;


@end


#endif