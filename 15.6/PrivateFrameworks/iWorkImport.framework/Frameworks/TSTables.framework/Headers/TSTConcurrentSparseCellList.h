// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCONCURRENTSPARSECELLLIST_H
#define TSTCONCURRENTSPARSECELLLIST_H

@class NSMutableIndexSet;


#import "TSTConcurrentCellList.h"

@interface TSTConcurrentSparseCellList : TSTConcurrentCellList

@property (retain, nonatomic) NSMutableIndexSet *validCells; // ivar: _validCells


-(?)initWithContext:(?)arg0 viewCellRectcellUIDRange;
-(BOOL)hasCells;
-(NSUInteger)cellCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)p_interestingCellIndexes;
-(void)addCell:(id)arg0 atViewCellCoord:(struct TSUViewCellCoord )arg1 ;
-(void)p_accumulateCurrentCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)p_enumerateRowsOfCellsConcurrentlyUsingBlock:(id)arg0 ;
-(void)p_invokeBlock:(id)arg0 ;
-(void)p_pruneCellsAtColumn:(NSUInteger)arg0 rowsSize:(NSUInteger)arg1 columnsSize:(NSUInteger)arg2 ;
-(void)p_pruneCellsAtRow:(NSUInteger)arg0 rowsSize:(NSUInteger)arg1 columnsSize:(NSUInteger)arg2 ;


@end


#endif