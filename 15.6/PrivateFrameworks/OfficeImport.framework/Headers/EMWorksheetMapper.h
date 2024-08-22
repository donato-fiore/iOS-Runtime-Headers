// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMWORKSHEETMAPPER_H
#define EMWORKSHEETMAPPER_H



#import "EMSheetMapper.h"
#import "EDWorksheet.h"
#import "CMStyle.h"
#import "ECColumnWidthConvertor.h"

@interface EMWorksheetMapper : EMSheetMapper {
    EDWorksheet *edWorksheet;
    CMStyle *mStyle;
    NSInteger mMaxPopulatedColumn;
    NSInteger mMaxPopulatedRow;
    *CGFloat mColumnGrid;
    *CGFloat mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor *mColumnWidthConvertor;
}




-(*CGFloat)columnGrid;
-(*CGFloat)rowGrid;
-(BOOL)isVisible;
-(CGFloat)defaultColumnWidth;
-(CGFloat)defaultRowHeight;
-(CGFloat)xlColumnWidthToPoints:(CGFloat)arg0 ;
-(NSInteger)maxRowNumber;
-(NSUInteger)columnCount;
-(id)columnWidthConvertor;
-(id)initWithEDWorksheet:(id)arg0 parent:(id)arg1 ;
-(int)height;
-(int)preprocessHeightWithState:(id)arg0 ;
-(int)preprocessWidthWithState:(id)arg0 ;
-(int)width;
-(struct CGSize )preprocessDrawableSizeWithState:(id)arg0 ;
-(struct CGSize )preprocessSizeWithState:(id)arg0 ;
-(void)_initWithState:(id)arg0 ;
-(void)countRowsAndColumnsWithState:(id)arg0 ;
-(void)dealloc;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapColumnInfosAt:(id)arg0 withState:(id)arg1 ;
-(void)mapDrawablesAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTableAt:(id)arg0 withState:(id)arg1 ;
-(void)mapWorksheetClassesAtTableNode:(id)arg0 ;
-(void)readHyperlinksWithState:(id)arg0 ;
-(void)setRowGrid;


@end


#endif