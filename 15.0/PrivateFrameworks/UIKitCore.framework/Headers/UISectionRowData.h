// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISECTIONROWDATA_H
#define UISECTIONROWDATA_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UITableViewRowData.h"

@interface UISectionRowData : NSObject <NSCopying>

 {
    BOOL _valid;
    BOOL _sectionOffsetValid;
    CGFloat _sectionOffset;
    NSInteger _sectionRowOffset;
    NSUInteger _numRows;
    CGFloat _sectionHeight;
    CGFloat _headerOffset;
    CGFloat _footerOffset;
    NSInteger _headerAlignment;
    NSInteger _footerAlignment;
    CGFloat _maxHeaderTitleWidth;
    CGFloat _maxFooterTitleWidth;
    UITableViewRowData *_rowData;
    CGFloat _headerHeight;
    CGFloat _footerHeight;
    NSUInteger _arrayLength;
    *float _rowHeights;
    *CGFloat _rowOffsets;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif