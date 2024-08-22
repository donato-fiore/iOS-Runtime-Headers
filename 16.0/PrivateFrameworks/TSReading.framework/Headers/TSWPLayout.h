// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPLAYOUT_H
#define TSWPLAYOUT_H

@class NSMutableArray, NSString, TSPObject<TSDHint>;
@protocol TSWPLayoutTarget, TSWPLayoutOwner, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;


#import "TSDLayout.h"
#import "TSWPLayoutManager.h"
#import "TSDCanvas.h"
#import "TSDBezierPath.h"

@interface TSWPLayout : TSDLayout <TSWPLayoutTarget, TSWPLayoutOwner>

 {
    TSWPLayoutManager *_layoutManager;
    BOOL _textLayoutValid;
}


@property (readonly, nonatomic) BOOL allowsDescendersToClip;
@property (readonly, nonatomic) BOOL allowsLastLineTruncation;
@property (readonly, nonatomic) BOOL alwaysAllowWordSplit;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) unsigned int autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, retain, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) BOOL ignoresEquationAlignment;
@property (readonly, nonatomic) TSDBezierPath *interiorClippingPath;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPLayoutManager *layoutManager;
@property (readonly, nonatomic) unsigned int lineCount;
@property (readonly, nonatomic) CGRect maskRect;
@property (readonly, nonatomic) CGFloat maxAnchorY;
@property (readonly, nonatomic) unsigned int maxLineCount;
@property (readonly, nonatomic) CGSize maxSize;
@property (readonly, nonatomic) CGSize minSize;
@property (readonly, nonatomic) unsigned int naturalAlignment;
@property (readonly, nonatomic) int naturalDirection;
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, retain, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) *void nextTargetTopicNumbers;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property (readonly, nonatomic) CGPoint position;
@property (readonly, retain, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) *void previousTargetTopicNumbers;
@property (readonly, nonatomic) BOOL pushAscendersIntoColumn;
@property (readonly, nonatomic) CGFloat reservedWidthWhenTruncating;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) BOOL textLayoutValid;
@property (readonly, nonatomic) unsigned int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


-(*void)initialLayoutState;
-(BOOL)caresAboutStorageChanges;
-(BOOL)invalidateForPageCountChange;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)p_parentAutosizes;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldPositionAttachmentsIteratively;
-(BOOL)shouldProvideSizingGuides;
-(CGFloat)baselineForCharIndex:(unsigned int)arg0 ;
-(Class)repClassOverride;
-(NSUInteger)iterativeAttachmentPositioningMaxPassCount;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)computeLayoutGeometry;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)dependentLayouts;
-(id)initWithInfo:(id)arg0 ;
-(id)initWithInfo:(id)arg0 frame:(struct CGRect )arg1 ;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)lineHintsForTarget:(id)arg0 ;
-(id)p_firstAncestorRespondingToSelector:(SEL)arg0 ;
-(id)p_wpLayoutParent;
-(id)reliedOnLayouts;
-(id)styleProvider;
-(id)textColorOverride;
-(id)textWrapper;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGPoint )calculatePointFromSearchReference:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGRect )frameForCulling;
-(struct CGRect )p_protectedRectWithinLayoutForSelectionRect:(struct CGRect )arg0 ;
-(struct CGRect )p_rectForSelection:(id)arg0 useParagraphModeRects:(BOOL)arg1 ;
-(struct CGRect )rectForPresentingAnnotationPopoverForSelection:(id)arg0 ;
-(struct CGRect )rectForSelection:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)dealloc;
-(void)invalidateForFootnoteNumberingChange;
-(void)invalidateMaxAutoGrowWidth;
-(void)invalidateParentForAutosizing;
-(void)invalidateSize;
-(void)invalidateTextLayout;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)layoutSearchForAnnotationWithHitBlock:(id)arg0 ;
-(void)layoutSearchForString:(id)arg0 options:(NSUInteger)arg1 hitBlock:(id)arg2 ;
-(void)p_invalidateTextLayout;
-(void)p_validateTextLayout;
-(void)parentDidChange;
-(void)parentWillChangeTo:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;
-(void)validate;
-(void)wrappableChildInvalidated:(id)arg0 ;


@end


#endif