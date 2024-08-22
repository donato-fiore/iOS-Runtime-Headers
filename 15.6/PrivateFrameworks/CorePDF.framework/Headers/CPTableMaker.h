// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPTABLEMAKER_H
#define CPTABLEMAKER_H


#import <Foundation/Foundation.h>

#import "CPZone.h"
#import "CPTable.h"

@interface CPTableMaker : NSObject {
    CPZone *tableZone;
    CPTable *table;
    unsigned int cellIndex;
    *? rowYIntervals;
    *? columnXIntervals;
}




+(BOOL)isTable:(id)arg0 ;
+(void)makeTableFrom:(id)arg0 ;
+(void)makeTablesInPage:(id)arg0 ;
+(void)makeTablesInZone:(id)arg0 ;
-(id)initWithZone:(id)arg0 ;
-(id)newBackgroundGraphicArrayFromRectangularZone:(id)arg0 ;
-(id)newTableCellFromZone:(id)arg0 ;
-(void)dealloc;
-(void)determineRowsAndColumns:(BOOL)arg0 ;
-(void)makeTable;


@end


#endif