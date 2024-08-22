// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINKINGTOOL_H
#define PKINKINGTOOL_H

@class UIColor, NSString;


#import "PKTool.h"
#import "PKInk.h"

@interface PKInkingTool : PKTool

@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) PKInk *ink;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) CGFloat width;


+(*void)_weightToWidthMap;
+(BOOL)_isUsingSystemColorPicker;
+(CGFloat)_calculateEdgeWidthForWeight:(CGFloat)arg0 type:(id)arg1 ;
+(CGFloat)_calculateWidthForWeight:(CGFloat)arg0 type:(id)arg1 ;
+(CGFloat)_weightForWidth:(CGFloat)arg0 type:(id)arg1 ;
+(CGFloat)_widthForWeight:(CGFloat)arg0 type:(id)arg1 ;
+(CGFloat)defaultWidthForInkType:(id)arg0 ;
+(CGFloat)maximumWidthForInkType:(id)arg0 ;
+(CGFloat)minimumWidthForInkType:(id)arg0 ;
+(id)convertColor:(id)arg0 fromUserInterfaceStyle:(NSInteger)arg1 to:(NSInteger)arg2 ;
+(struct ? )_contextForStroke:(id)arg0 weight:(CGFloat)arg1 type:(id)arg2 ;
+(void)_computeWeightToWidthMapFor:(id)arg0 in:(*void)arg1 ;
-(id)initWithInk:(id)arg0 width:(CGFloat)arg1 ;
-(id)initWithInkType:(id)arg0 color:(id)arg1 ;
-(id)initWithInkType:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 ;


@end


#endif