// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPFOOTNOTECONTAINERLAYOUT_H
#define TPFOOTNOTECONTAINERLAYOUT_H

@class TSDLayout, NSString, TSWPPadding;
@protocol TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider;



@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider>

 {
    BOOL _vertical;
    CGFloat _lineWidth;
    CGFloat _footnoteSpacing;
    id<TSWPFootnoteMarkProvider> *_footnoteMarkProvider;
}


@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) CGFloat blockHeight;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect footnoteSeparatorLineFrame;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeFootnoteSeparatorLine; // ivar: _includeFootnoteSeparatorLine
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) CGFloat maxBlockHeight; // ivar: _maxFootnoteBlockHeight
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textScaleFactor;


-(BOOL)descendersCannotClip;
-(BOOL)shouldProvideSizingGuides;
-(BOOL)textIsVertical;
-(BOOL)textIsVerticalForFootnoteReferenceStorage:(id)arg0 ;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg0 ;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)maxAutoGrowBlockHeightForTextLayout:(id)arg0 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(Class)repClassOverride;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(id)computeLayoutGeometry;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)initWithFootnoteMarkProvider:(id)arg0 vertical:(BOOL)arg1 lineWidth:(CGFloat)arg2 maxFootnoteBlockHeight:(CGFloat)arg3 footnoteSpacing:(CGFloat)arg4 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg0 ;
-(id)markStringForFootnoteReferenceStorage:(id)arg0 ignoreDeletedFootnotes:(BOOL)arg1 forceDocumentEndnotes:(BOOL)arg2 ;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)addFootnoteLayout:(id)arg0 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)removeAllFootnoteLayouts;
-(void)removeFootnoteLayout:(id)arg0 ;
-(void)removeFootnoteLayoutWithInfo:(id)arg0 ;
-(void)setFootnoteSpacing:(NSInteger)arg0 ;
-(void)setLineWidth:(CGFloat)arg0 ;
-(void)trimFootnoteLayoutsFromIndex:(NSUInteger)arg0 ;
-(void)validate;


@end


#endif