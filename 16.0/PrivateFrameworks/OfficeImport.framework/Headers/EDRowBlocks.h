// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDROWBLOCKS_H
#define EDROWBLOCKS_H

@class NSMutableArray, NSString, NSRecursiveLock;
@protocol TSUiOSMemoryWarningFlushable;

#import <Foundation/Foundation.h>

#import "EDWorksheet.h"
#import "EDCollection.h"

@interface EDRowBlocks : NSObject <TSUiOSMemoryWarningFlushable>

 {
    EDWorksheet *mWorksheet;
    NSMutableArray *mRowBlocks;
    EDCollection *mFormulas;
    unsigned int mMaxPopulatedRow;
    unsigned int mMaxPopulatedColumn;
    NSString *mFileName;
    int mLockCount;
    NSRecursiveLock *mSaveLoadLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)spaceForRowNumber:(unsigned int)arg0 rowBlock:(id)arg1 ;
-(Class)classForFormulaType:(unsigned char)arg0 ;
-(NSUInteger)expectedIndexOfRowBlockForRowNumber:(unsigned int)arg0 ;
-(NSUInteger)indexOfRowBlockForRowNumber:(unsigned int)arg0 ;
-(NSUInteger)rowBlockCount;
-(id)fileNameForPersistingRowBlocks;
-(id)fileNameForPersistingRowBlocksWithIndex:(NSUInteger)arg0 ;
-(id)formulas;
-(id)initWithWorksheet:(id)arg0 ;
-(id)rowBlockAtIndex:(NSUInteger)arg0 ;
-(id)rowBlockForRowNumber:(unsigned int)arg0 currentRowBlock:(id)arg1 ;
-(id)rowBlockForRowNumber:(unsigned int)arg0 currentRowBlock:(id)arg1 createIfNil:(BOOL)arg2 ;
-(struct EDCellHeader *)cellWithRowNumber:(unsigned int)arg0 columnNumber:(int)arg1 ;
-(unsigned char)formulaTypeForFormula:(id)arg0 ;
-(unsigned int)maxPopulatedColumn;
-(unsigned int)maxPopulatedRow;
-(void)dealloc;
-(void)flush;
-(void)load;
-(void)lock;
-(void)removeRowBlockAtIndex:(NSUInteger)arg0 ;
-(void)save;
-(void)unlock;
-(void)updateMaxPopulatedRow:(unsigned int)arg0 column:(unsigned int)arg1 ;


@end


#endif