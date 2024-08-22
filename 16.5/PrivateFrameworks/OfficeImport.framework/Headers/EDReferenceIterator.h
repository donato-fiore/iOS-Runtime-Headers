// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDREFERENCEITERATOR_H
#define EDREFERENCEITERATOR_H


#import <Foundation/Foundation.h>

#import "EDWorkbook.h"
#import "EDWorksheet.h"
#import "EDCollection.h"
#import "EDReference.h"
#import "EDRowBlocks.h"
#import "EDRowBlock.h"

@interface EDReferenceIterator : NSObject {
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    NSUInteger mRowBlockIndex;
    *EDRowInfo mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}




+(id)referenceIteratorWithReference:(id)arg0 workbook:(id)arg1 ;
+(id)referenceIteratorWithReferenceArray:(id)arg0 workbook:(id)arg1 ;
-(BOOL)nextReference;
-(BOOL)nextRow;
-(id)initWithReference:(id)arg0 workbook:(id)arg1 ;
-(id)initWithReferenceArray:(id)arg0 reference:(id)arg1 workbook:(id)arg2 ;
-(id)initWithReferenceArray:(id)arg0 workbook:(id)arg1 ;
-(struct EDCellHeader *)nextCell;
-(unsigned int)currentCellIndex;
-(void)dealloc;
-(void)setCurrentSheet:(id)arg0 ;
-(void)setReference:(id)arg0 ;


@end


#endif