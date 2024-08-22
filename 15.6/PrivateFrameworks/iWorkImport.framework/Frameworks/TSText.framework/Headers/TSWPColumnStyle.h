// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCOLUMNSTYLE_H
#define TSWPCOLUMNSTYLE_H

@class TSSStyle;
@protocol TSWPColumnMetrics;


#import "TSWPPadding.h"

@interface TSWPColumnStyle : TSSStyle <TSWPColumnMetrics>



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
+(int)defaultIntValueForProperty:(int)arg0 ;
-(BOOL)equalWidth;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(id)layoutMarginsForTarget:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif