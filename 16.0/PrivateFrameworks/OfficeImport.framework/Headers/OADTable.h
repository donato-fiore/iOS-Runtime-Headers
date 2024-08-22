// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADTABLE_H
#define OADTABLE_H

@class NSMutableArray;


#import "OADDrawable.h"
#import "OADTableGrid.h"

@interface OADTable : OADDrawable {
    OADTableGrid *mGrid;
    NSMutableArray *mRows;
}




+(void)applyTextStyle:(id)arg0 toParagraphProperties:(id)arg1 ;
-(NSUInteger)rowCount;
-(id)addRow;
-(id)cellAtPos:(struct OADTMatrixPos )arg0 ;
-(id)description;
-(id)grid;
-(id)init;
-(id)masterCellOfPos:(struct OADTMatrixPos )arg0 ;
-(id)rowAtIndex:(NSUInteger)arg0 ;
-(id)tableProperties;
-(struct OADTMatrixPos )masterPosOfPos:(struct OADTMatrixPos )arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)flattenStyle;
-(void)flipTableRTL;
-(void)setParentTextListStyle:(id)arg0 ;


@end


#endif