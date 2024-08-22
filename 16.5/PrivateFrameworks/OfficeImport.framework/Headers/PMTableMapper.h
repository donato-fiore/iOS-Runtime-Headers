// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMTABLEMAPPER_H
#define PMTABLEMAPPER_H



#import "CMMapper.h"
#import "OADTable.h"
#import "CMDrawableStyle.h"
#import "CMTableGridInfo.h"
#import "OADOrientedBounds.h"

@interface PMTableMapper : CMMapper {
    OADTable *mTable;
    CMDrawableStyle *mStyle;
    CMTableGridInfo *mGrid;
    OADOrientedBounds *mBounds;
}




-(NSUInteger)rowCount;
-(float)columnWidthAtIndex:(NSUInteger)arg0 state:(id)arg1 ;
-(id)cellStyle;
-(id)defaultCellFillForRow:(NSUInteger)arg0 withState:(id)arg1 ;
-(id)defaultCellFillWithState:(id)arg0 ;
-(id)grid;
-(id)initWithOadTable:(id)arg0 bounds:(id)arg1 parent:(id)arg2 ;
-(id)tableBorderStyle;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapColumnGridAt:(id)arg0 withState:(id)arg1 ;
-(void)mapTablePropertiesWithState:(id)arg0 ;


@end


#endif