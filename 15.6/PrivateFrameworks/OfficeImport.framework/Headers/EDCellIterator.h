// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCELLITERATOR_H
#define EDCELLITERATOR_H


#import <Foundation/Foundation.h>

#import "EDRowBlocks.h"
#import "EDRowBlock.h"

@interface EDCellIterator : NSObject {
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mCurrentRowBlock;
    *EDRowInfo mCurrentRowInfo;
    unsigned int mCurrentRowInfoIndex;
    *EDCellHeader mCurrentCell;
    unsigned int mCurrentCellIndex;
    unsigned int mDesiredRowNumber;
    unsigned int mDesiredColumnNumber;
}




-(id)initWithWorksheet:(id)arg0 ;
-(struct EDCellHeader *)adjacentCell:(int)arg0 ;
-(struct EDCellHeader *)adjacentCellLeft;
-(struct EDCellHeader *)adjacentCellRight;
-(struct EDCellHeader *)scanToRowNumber:(unsigned int)arg0 columnNumber:(unsigned int)arg1 ;
-(void)dealloc;


@end


#endif