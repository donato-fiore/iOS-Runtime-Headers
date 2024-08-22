// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTABLEROW_H
#define WDTABLEROW_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDTableRowProperties.h"
#import "WDTable.h"

@interface WDTableRow : NSObject {
    NSUInteger mIndex;
    WDTableRowProperties *mProperties;
    NSMutableArray *mCells;
}


@property (readonly, weak) WDTable *table; // ivar: mTable


-(NSUInteger)cellCount;
-(NSUInteger)index;
-(id)addCell;
-(id)addCellWithIndex:(NSUInteger)arg0 ;
-(id)cellAt:(NSUInteger)arg0 ;
-(id)cellIterator;
-(id)description;
-(id)initWithTable:(id)arg0 at:(NSUInteger)arg1 ;
-(id)newCellIterator;
-(id)properties;
-(void)setIndex:(NSUInteger)arg0 ;


@end


#endif