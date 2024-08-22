// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPRMTABLECELL_H
#define CPRMTABLECELL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CPRMTableCell.h"
#import "CPRMTable.h"

@interface CPRMTableCell : NSObject {
    NSString *_contents;
}


@property (retain) CPRMTableCell *nextCellInColumn; // ivar: _nextCellInColumn
@property (retain) CPRMTableCell *nextCellInRow; // ivar: _nextCellInRow
@property (readonly) *CGPDFPage page;
@property CPRMTable *table; // ivar: _table
@property *CGPDFNode tableCellNode; // ivar: _tableCellNode


-(NSUInteger)column;
-(NSUInteger)row;
-(id)contents;
-(struct CGColor *)backgroundColor;
-(struct CGRect )bounds;
-(void)dealloc;


@end


#endif