// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WMTABLEMAPPER_H
#define WMTABLEMAPPER_H



#import "CMMapper.h"
#import "WDTable.h"
#import "WMBordersProperty.h"
#import "WMTableStyle.h"
#import "WMTableColumnInfo.h"

@interface WMTableMapper : CMMapper {
    WDTable *mWdTable;
    WMBordersProperty *mInsideBorders;
    WMTableStyle *mStyle;
    WMTableColumnInfo *mColumnInfo;
}




+(BOOL)isTableDeleted:(id)arg0 ;
-(id)columnInfo;
-(id)copyColumnInfo;
-(id)copyStopArrayForRow:(NSUInteger)arg0 ;
-(id)initWithWDTable:(id)arg0 parent:(id)arg1 ;
-(id)insideBorders;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)setInsideBorders:(id)arg0 ;


@end


#endif