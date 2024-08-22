// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMTABLECELLMAPPER_H
#define PMTABLECELLMAPPER_H



#import "CMMapper.h"
#import "OADTableCell.h"
#import "CMStyle.h"

@interface PMTableCellMapper : CMMapper {
    OADTableCell *mCell;
    CMStyle *mStyle;
    int mColIndex;
    NSUInteger mRowIndex;
    float mWidth;
}




-(float)widthWithState:(id)arg0 ;
-(id)initWithOadTableCell:(id)arg0 rowIndex:(NSUInteger)arg1 columnIndex:(int)arg2 parent:(id)arg3 ;
-(id)rowMapper;
-(id)tableMapper;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapBordersWithState:(id)arg0 ;
-(void)mapCellPropertiesWithState:(id)arg0 textAnchor:(unsigned char)arg1 ;


@end


#endif