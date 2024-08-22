// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCOLUMNSTYLE_H
#define TSWPCOLUMNSTYLE_H

@protocol TSWPColumnMetrics;


#import "TSSStyle.h"
#import "TSWPPadding.h"

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>



@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) CGFloat textScaleFactor;


+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)equalWidth;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;


@end


#endif