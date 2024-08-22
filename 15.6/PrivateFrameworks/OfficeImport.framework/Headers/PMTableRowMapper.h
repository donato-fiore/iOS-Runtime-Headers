// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMTABLEROWMAPPER_H
#define PMTABLEROWMAPPER_H



#import "CMMapper.h"
#import "OADTable.h"
#import "OADTableRow.h"

@interface PMTableRowMapper : CMMapper {
    OADTable *mTable;
    OADTableRow *mRow;
    NSUInteger mRowIndex;
}




-(NSUInteger)cellCount;
-(float)height;
-(id)initWithOadTable:(id)arg0 rowIndex:(NSUInteger)arg1 parent:(id)arg2 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;


@end


#endif