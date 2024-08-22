// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TNPAGELAYOUTCONTAINER_H
#define TNPAGELAYOUTCONTAINER_H

@class NSString, TSWPPadding;
@protocol TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver;


#import "TNPageLayoutAbstract.h"
#import "TNPageContentLayout.h"
#import "TNAdditionalPageContentLayout.h"

@interface TNPageLayoutContainer : TNPageLayoutAbstract <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>



@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly) CGRect contentFrame;
@property (readonly) TNPageContentLayout *contentLayout; // ivar: _contentLayout
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (retain) TNAdditionalPageContentLayout *overlayContentLayout; // ivar: _overlayContentLayout
@property (readonly) BOOL pageLayoutDirectionIsRTL;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (readonly, nonatomic) BOOL wantsOverlayContentLayout;


-(BOOL)containsLayoutForInfo:(id)arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)hasValidatedHeadersAndFooters;
-(BOOL)textIsVertical;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(Class)repClassForTextLayout:(id)arg0 ;
-(Class)repClassOverride;
-(NSUInteger)autosizeFlagsForTextLayout:(id)arg0 ;
-(NSUInteger)pageCount;
-(NSUInteger)pageNumber;
-(id)computeLayoutGeometry;
-(id)dependentLayouts;
-(id)dependentsOfTextLayout:(id)arg0 ;
-(id)headerFooterProvider;
-(id)initWithPageController:(id)arg0 pageCoordinate:(struct TSUCellCoord )arg1 ;
-(id)p_pageInfo;
-(id)printableInfoProvider;
-(int)verticalAlignmentForTextLayout:(id)arg0 ;
-(struct CGColor *)backgroundColor;
-(struct CGRect )autosizedFrameForTextLayout:(id)arg0 textSize:(struct CGSize )arg1 ;
-(struct CGRect )bodyRect;
-(struct CGRect )nonAutosizedFrameForTextLayout:(id)arg0 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)_addOverlayContentLayout;
-(void)_removeOverlayContentLayout;
-(void)_updateOverlayContentLayout;
-(void)addChild:(id)arg0 ;
-(void)invalidateForAutosizingTextLayout:(id)arg0 ;
-(void)invalidateSize;
-(void)parentDidChange;
-(void)performBlockForEachHeaderFooterLayout:(id)arg0 ;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)setChildren:(id)arg0 ;
-(void)storage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(NSUInteger)arg3 ;
-(void)updateChildrenFromInfo;
-(void)willBeAddedToLayoutController:(id)arg0 ;
-(void)willBeRemovedFromLayoutController:(id)arg0 ;


@end


#endif