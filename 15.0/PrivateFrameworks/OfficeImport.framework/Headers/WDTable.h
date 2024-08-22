// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDTABLE_H
#define WDTABLE_H

@class NSMutableArray;


#import "WDBlock.h"
#import "WDTableProperties.h"

@interface WDTable : WDBlock {
    WDTableProperties *mProperties;
    NSMutableArray *mRows;
}




-(NSUInteger)rowCount;
-(id)addRow;
-(id)cellIterator;
-(id)description;
-(id)initWithText:(id)arg0 ;
-(id)insertRowAtIndex:(NSUInteger)arg0 ;
-(id)newCellIterator;
-(id)newRowIterator;
-(id)newRunIterator;
-(id)properties;
-(id)rowAt:(NSUInteger)arg0 ;
-(id)rowIterator;
-(id)runIterator;
-(int)blockType;
-(int)nestingLevel;
-(void)clearProperties;
-(void)clearRows;


@end


#endif