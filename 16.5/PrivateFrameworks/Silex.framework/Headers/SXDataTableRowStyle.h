// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDATATABLEROWSTYLE_H
#define SXDATATABLEROWSTYLE_H

@class UIColor;


#import "SXDataTableElementStyle.h"
#import "SXJSONArray.h"
#import "SXDataTableBorder.h"

@interface SXDataTableRowStyle : SXDataTableElementStyle

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) SXDataTableBorder *divider;
@property (readonly, nonatomic) _SXConvertibleValue height;
@property (readonly, nonatomic) SXJSONArray *selectors;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;


@end


#endif