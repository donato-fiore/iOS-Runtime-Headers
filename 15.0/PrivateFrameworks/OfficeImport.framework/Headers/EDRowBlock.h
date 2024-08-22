// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDROWBLOCK_H
#define EDROWBLOCK_H


#import <Foundation/Foundation.h>


@interface EDRowBlock : NSObject {
    *__CFData mPackedData;
    *__CFData mCellOffsets;
}


@property (readonly, nonatomic) unsigned int firstRowNumber;
@property (readonly, nonatomic) unsigned int lastRowNumber;
@property (readonly, nonatomic) unsigned int maxRowNumber;
@property (readonly, nonatomic) unsigned int minRowNumber;
@property (readonly, nonatomic) unsigned int rowCount;


+(id)rowBlock;
-(?)addCellWithColumnNumber:(?)arg0 type:(?)arg1 isFormulaCell:(?)arg2 rowInforowBlocks;
-(?)removeCellAtIndexrowInfo;
-(NSUInteger)index;
-(NSUInteger)startOfCellsOrThrow;
-(id)description;
-(id)init;
-(struct EDCellHeader *)cellAtIndex:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1 ;
-(struct EDCellHeader *)cellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1 ;
-(struct EDRowInfo *)addRowInfoWithRowNumber:(unsigned int)arg0 cellCountHint:(unsigned int)arg1 ;
-(struct EDRowInfo *)rowInfoAtIndex:(unsigned int)arg0 ;
-(struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg0 ;
-(struct EDRowInfo *)rowInfoWithRowNumber:(unsigned int)arg0 createIfNil:(BOOL)arg1 ;
-(unsigned int)expectedIndexOfCellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1 ;
-(unsigned int)indexOfCellWithColumnNumber:(unsigned int)arg0 rowInfo:(struct EDRowInfo *)arg1 ;
-(unsigned int)indexOfRowInfoWithRowNumber:(unsigned int)arg0 ;
-(void)archiveByAppendingToMutableData:(struct __CFData *)arg0 ;
-(void)checkCellOffsetOrThrow:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)doneWithContent;
-(void)incrementIndex;
-(void)setIndex:(NSUInteger)arg0 ;
-(void)unarchiveFromData:(struct __CFData *)arg0 offset:(*NSUInteger)arg1 ;


@end


#endif