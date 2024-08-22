// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMROWMAPPER_H
#define EMROWMAPPER_H



#import "CMMapper.h"
#import "EDRowBlock.h"

@interface EMRowMapper : CMMapper {
    EDRowBlock *mRowBlock;
    *EDRowInfo mRowInfo;
    *CGFloat columnGrid;
    NSUInteger columnCount;
}




+(void)mapEmptyRowAt:(id)arg0 colspan:(NSUInteger)arg1 height:(CGFloat)arg2 ;
-(BOOL)isColumnHidden:(NSUInteger)arg0 ;
-(BOOL)isMergedCell:(struct EDCellHeader *)arg0 ;
-(id)initWithEDRowBlock:(id)arg0 rowInfo:(struct EDRowInfo *)arg1 parent:(id)arg2 ;
-(struct EDCellHeader *)cellWithColumnNumber:(NSUInteger)arg0 ;
-(void)insertEmptyCellAt:(id)arg0 withColSpan:(NSUInteger)arg1 height:(CGFloat)arg2 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapEmptyCellsAt:(id)arg0 withState:(id)arg1 firstColumn:(NSUInteger)arg2 lastColumn:(NSUInteger)arg3 ;


@end


#endif