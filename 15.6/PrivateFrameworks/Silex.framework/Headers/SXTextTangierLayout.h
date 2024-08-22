// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXTEXTTANGIERLAYOUT_H
#define SXTEXTTANGIERLAYOUT_H

@class TSDContainerLayout, TSWPPadding;
@protocol TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap;


#import "SXTextTangierTextWrapper.h"

@interface SXTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap>



@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (retain, nonatomic) SXTextTangierTextWrapper *textWrapper; // ivar: _textWrapper


-(BOOL)shouldHyphenateTextLayout:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(id)additionalReliedOnLayoutsForTextWrap;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct CGSize )initialTextSize;
-(unsigned int)autosizeFlagsForTextLayout:(id)arg0 ;
-(unsigned int)verticalAlignmentForTextLayout:(id)arg0 ;
-(void)invalidate;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;


@end


#endif