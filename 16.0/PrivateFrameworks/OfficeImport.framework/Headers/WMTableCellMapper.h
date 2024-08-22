// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WMTABLECELLMAPPER_H
#define WMTABLECELLMAPPER_H



#import "CMMapper.h"
#import "WDTableCell.h"

@interface WMTableCellMapper : CMMapper {
    WDTableCell *mWdTableCell;
    unsigned int mColSpan;
    CGFloat mHeight;
    CGFloat mWidth;
    CGFloat mLeftPadding;
    CGFloat mRightPadding;
}




-(id)initWithWDTableCell:(id)arg0 atIndex:(unsigned int)arg1 parent:(id)arg2 ;
-(id)tableMapper;
-(unsigned int)colSpan;
-(void)mapAt:(id)arg0 withState:(id)arg1 ;
-(void)mapCellStyleAt:(id)arg0 ;


@end


#endif