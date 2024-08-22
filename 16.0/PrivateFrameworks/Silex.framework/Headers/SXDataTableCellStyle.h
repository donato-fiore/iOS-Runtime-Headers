// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXDATATABLECELLSTYLE_H
#define SXDATATABLECELLSTYLE_H

@class UIColor, NSString, NSArray;


#import "SXDataTableElementStyle.h"
#import "SXDataTableBorderSides.h"
#import "SXJSONArray.h"
#import "SXPadding.h"

@interface SXDataTableCellStyle : SXDataTableElementStyle

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) SXDataTableBorderSides *border;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) _SXConvertibleValue height;
@property (readonly, nonatomic) NSUInteger horizontalAlignment;
@property (readonly, nonatomic) _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) SXPadding *padding;
@property (readonly, nonatomic) SXJSONArray *selectors;
@property (readonly, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) NSArray *textStyles;
@property (readonly, nonatomic) NSUInteger verticalAlignment;
@property (readonly, nonatomic) CGFloat width;


+(id)valueClassBlockForPropertyWithName:(SEL)arg0 ;
-(NSUInteger)horizontalAlignmentWithValue:(id)arg0 withType:(int)arg1 ;
-(NSUInteger)verticalAlignmentWithValue:(id)arg0 withType:(int)arg1 ;
-(id)paddingWithValue:(id)arg0 withType:(int)arg1 ;
-(id)textStylesWithValue:(id)arg0 withType:(int)arg1 ;


@end


#endif