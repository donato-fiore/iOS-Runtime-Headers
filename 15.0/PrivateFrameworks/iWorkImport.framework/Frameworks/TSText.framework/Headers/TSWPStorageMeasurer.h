// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSTORAGEMEASURER_H
#define TSWPSTORAGEMEASURER_H

@class NSMutableArray, TSDCanvas, NSString, TSPObject<TSDHint>;
@protocol TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPTopicNumberHints;

#import <Foundation/Foundation.h>

#import "TSWPPadding.h"
#import "TSWPStorage.h"

@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>

 {
    CGSize _minSize;
    CGSize _maxSize;
    unsigned int _flags;
    CGPoint _anchor;
}


@property (readonly, nonatomic) BOOL alwaysIncludesSpaceAfter;
@property (readonly, nonatomic) BOOL alwaysIncludesSpaceBefore;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) NSUInteger autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) Class inlineTableOfContentsLayoutClass;
@property (readonly, nonatomic) BOOL isInstructional;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) BOOL marginsAreMirrored;
@property (readonly, nonatomic) CGRect maskRect;
@property (readonly, nonatomic) CGFloat maxAnchorInBlockDirection;
@property (readonly, nonatomic) CGSize maxSize;
@property (readonly, nonatomic) CGSize minSize;
@property (readonly, nonatomic) int naturalAlignment;
@property (readonly, nonatomic) int naturalDirection;
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, nonatomic) CGPoint position;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) BOOL repShouldPreventCaret;
@property (readonly, nonatomic) _NSRange restrictedLayoutCharRange;
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shouldIgnoreAnchoredAttachments;
@property (readonly, nonatomic) BOOL shouldWrapAroundExternalDrawables;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPageNumbers;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (readonly, nonatomic) int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


-(BOOL)caresAboutStorageChanges;
-(BOOL)containsStartOfRange:(struct _NSRange )arg0 ;
-(BOOL)descendersCannotClip;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 target:(id)arg2 outWidth:(*CGFloat)arg3 outGap:(*CGFloat)arg4 ;
-(CGFloat)textScaleForChild:(id)arg0 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(id)addPartitionableAttachmentLayout:(id)arg0 ;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)initWithStorage:(id)arg0 ;
-(id)interiorClippingPath;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)pLayoutWithMinSize:(struct CGSize )arg0 maxSize:(struct CGSize )arg1 anchor:(struct CGPoint )arg2 flags:(unsigned int)arg3 ;
-(id)textWrapper;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )measuredSizeWithFlags:(unsigned int)arg0 ;
-(struct CGSize )measuredSizeWithFlags:(unsigned int)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 ;
-(struct UIEdgeInsets )adjustedInsetsForTarget:(id)arg0 ;
-(void)clearHiddenInlineDrawableLayoutMarks;
-(void)didLayoutChangingDirtyRanges;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)markHiddenInlineDrawableLayout:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;


@end


#endif