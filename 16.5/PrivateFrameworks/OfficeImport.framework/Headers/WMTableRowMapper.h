// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WMTABLEROWMAPPER_H
#define WMTABLEROWMAPPER_H



#import "CMMapper.h"
#import "WDTableRow.h"

@interface WMTableRowMapper : CMMapper {
    WDTableRow *mWdTableRow;
    CGFloat mHeight;
}




+(BOOL)isTableRowDeleted:(id)arg0 ;
-(CGFloat)height;
-(id)initWithWDTableRow:(id)arg0 parent:(id)arg1 ;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)setRowProperties:(id)arg0 ;


@end


#endif