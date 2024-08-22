// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXDATATABLESTYLE_H
#define SXDATATABLESTYLE_H



#import "SXJSONObject.h"
#import "SXDataTableBorderSides.h"
#import "SXDataTableCellStyle.h"
#import "SXDataTableColumnStyle.h"
#import "SXDataTableRowStyle.h"

@interface SXDataTableStyle : SXJSONObject

@property (readonly, nonatomic) SXDataTableBorderSides *border;
@property (readonly, nonatomic) SXDataTableCellStyle *cells;
@property (readonly, nonatomic) SXDataTableColumnStyle *columns;
@property (readonly, nonatomic) SXDataTableCellStyle *headerCells;
@property (readonly, nonatomic) SXDataTableColumnStyle *headerColumns;
@property (readonly, nonatomic) SXDataTableRowStyle *headerRows;
@property (readonly, nonatomic) SXDataTableRowStyle *rows;




@end


#endif