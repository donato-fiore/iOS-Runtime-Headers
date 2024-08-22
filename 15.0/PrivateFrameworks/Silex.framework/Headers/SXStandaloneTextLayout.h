// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXSTANDALONETEXTLAYOUT_H
#define SXSTANDALONETEXTLAYOUT_H

@class TSWPPadding;
@protocol TSWPLayoutParent, TSWPColumnMetrics, SXStandaloneTextLayoutDelegate;


#import "SXContainerLayout.h"

@interface SXStandaloneTextLayout : SXContainerLayout <TSWPLayoutParent, TSWPColumnMetrics>



@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (weak, nonatomic) NSObject<SXStandaloneTextLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(Class)repClassOverride;
-(id)childInfosForLayout;
-(id)computeLayoutGeometry;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)p_wpLayoutParent;
-(id)styleProviderForLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(unsigned int)autosizeFlagsForTextLayout:(id)arg0 ;
-(unsigned int)verticalAlignmentForTextLayout:(id)arg0 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;


@end


#endif