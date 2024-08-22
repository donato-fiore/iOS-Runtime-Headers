// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDATATABLECOLUMNSTYLE_H
#define SXDATATABLECOLUMNSTYLE_H

@class UIColor;


#import "SXDataTableElementStyle.h"
#import "SXJSONArray.h"
#import "SXDataTableBorder.h"

@interface SXDataTableColumnStyle : SXDataTableElementStyle

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXDataTableBorder *divider;
@property (readonly, nonatomic) _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) SXJSONArray *selectors;
@property (readonly, nonatomic) CGFloat width;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif