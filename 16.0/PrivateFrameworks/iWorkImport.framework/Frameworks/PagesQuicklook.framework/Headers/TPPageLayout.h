// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPPAGELAYOUT_H
#define TPPAGELAYOUT_H

@class TSWPPageLayout, TSDFill, NSString, TSWPPadding, TPiOSMarginAdjustLayout;
@protocol TSWPLayoutParent, TSWPAttachmentNumberProviding, TSWPColumnMetrics, TPAttachmentLayoutParent, TPSectionTemplateDrawableProvider;


#import "TPBodyLayout.h"

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPAttachmentNumberProviding, TSWPColumnMetrics, TPAttachmentLayoutParent>



@property (readonly, nonatomic) BOOL allowsFootnotes;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) TSDFill *backgroundFill; // ivar: _backgroundFill
@property (readonly, weak, nonatomic) TPBodyLayout *bodyLayout;
@property (readonly, nonatomic) BOOL canHavePreviousPageFootnotes;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) TPiOSMarginAdjustLayout *marginAdjustLayout; // ivar: _marginAdjustLayout
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageIndex;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, weak, nonatomic) NSObject<TPSectionTemplateDrawableProvider> *sectionTemplateDrawableProvider; // ivar: _sectionTemplateDrawableProvider
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (readonly, nonatomic, getter=isValidating) BOOL validating; // ivar: _validating


-(BOOL)descendersCannotClip;
-(BOOL)forceParentAutosizedFrameForTextLayout:(id)arg0 ;
-(BOOL)textIsVertical;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(CGFloat)maxAutoGrowLineWidthForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(NSInteger)naturalAlignmentForTextLayout:(id)arg0 ;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(NSUInteger)pageCountForAttachment:(id)arg0 ;
-(NSUInteger)pageNumberForAttachment:(id)arg0 ;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)existingAttachmentLayoutForInfo:(id)arg0 ;
-(id)headerFooterProvider;
-(id)layoutForChildInfo:(id)arg0 ;
-(id)layoutsCausingWrapOnTextLayoutTarget:(id)arg0 ignoreIntersection:(BOOL)arg1 ;
-(id)layoutsForChildInfo:(id)arg0 ;
-(id)p_childLayoutInParentLayout:(id)arg0 forChildInfo:(id)arg1 ;
-(id)primaryLayoutForInfo:(id)arg0 ;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)validate;


@end


#endif