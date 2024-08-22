// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPSTORAGEMEASURER_H
#define TSWPSTORAGEMEASURER_H

@class NSMutableArray, NSString, TSPObject<TSDHint>;
@protocol TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics, TSWPLayoutParent, TSWPStyleProvider, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"
#import "TSDCanvas.h"
#import "TSWPPadding.h"
#import "TSDLayout.h"

@interface TSWPStorageMeasurer : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>

 {
    TSWPStorage *_storage;
    NSObject<TSWPLayoutParent> *_layoutParent;
    id<TSWPStyleProvider> *_styleProvider;
    CGSize _minSize;
    CGSize _maxSize;
    unsigned int _flags;
    CGPoint _anchor;
}


@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL allowsDescendersToClip;
@property (readonly, nonatomic) BOOL allowsLastLineTruncation;
@property (readonly, nonatomic) BOOL alwaysAllowWordSplit;
@property (readonly, nonatomic) BOOL alwaysStartsNewTarget;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) unsigned int autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (readonly, nonatomic) NSUInteger columnCount;
@property (readonly, retain, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) BOOL columnsAreLeftToRight;
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) BOOL ignoresEquationAlignment;
@property (readonly, nonatomic) BOOL layoutIsValid;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
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
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (readonly, nonatomic) unsigned int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


-(BOOL)caresAboutStorageChanges;
-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)shouldPositionAttachmentsIteratively;
-(CGFloat)gapForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(CGFloat)positionForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 outWidth:(*CGFloat)arg2 outGap:(*CGFloat)arg3 ;
-(CGFloat)widthForColumnIndex:(NSUInteger)arg0 bodyWidth:(CGFloat)arg1 ;
-(NSUInteger)iterativeAttachmentPositioningMaxPassCount;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)initWithStorage:(id)arg0 ;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)lineHintsForTarget:(id)arg0 ;
-(id)pLayoutWithMinSize:(struct CGSize )arg0 maxSize:(struct CGSize )arg1 anchor:(struct CGPoint )arg2 flags:(unsigned int)arg3 ;
-(id)styleProvider;
-(id)textWrapper;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )measuredSizeWithFlags:(unsigned int)arg0 ;
-(struct CGSize )measuredSizeWithFlags:(unsigned int)arg0 maxSize:(struct CGSize )arg1 layoutParent:(id)arg2 styleProvider:(id)arg3 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)dealloc;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;


@end


#endif