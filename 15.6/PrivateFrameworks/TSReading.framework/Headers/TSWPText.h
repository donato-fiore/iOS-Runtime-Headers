// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPTEXT_H
#define TSWPTEXT_H

@class NSMutableArray, NSString, TSPObject<TSDHint>, TSUColor;
@protocol TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics, TSWPTextDelegate, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn, TSWPStyleProvider;

#import <Foundation/Foundation.h>

#import "TSWPListStyle.h"
#import "TSWPColumnStyle.h"
#import "TSWPStorage.h"
#import "TSDCanvas.h"
#import "TSWPPadding.h"
#import "TSWPParagraphStyle.h"
#import "TSDLayout.h"

@interface TSWPText : NSObject <TSWPLayoutTarget, TSWPLayoutOwner, TSWPColumnMetrics>

 {
    TSWPListStyle *_listStyle;
    TSWPColumnStyle *_columnStyle;
    TSWPStorage *_storage;
    CGSize _minSize;
    CGSize _maxSize;
    NSUInteger _pageNumber;
    NSUInteger _pageCount;
    int _flags;
    CGPoint _anchor;
}


@property (readonly, nonatomic) CGSize adjustedInsets;
@property (readonly, nonatomic) BOOL allowsDescendersToClip;
@property (nonatomic) BOOL allowsLastLineTruncation; // ivar: _allowsLastLineTruncation
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
@property (nonatomic) NSObject<TSWPTextDelegate> *delegate; // ivar: _delegate
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
@property (nonatomic) unsigned int maxLineCount; // ivar: _maxLineCount
@property (readonly, nonatomic) CGSize maxSize;
@property (readonly, nonatomic) CGSize minSize;
@property (readonly, nonatomic) unsigned int naturalAlignment; // ivar: _naturalAlignment
@property (readonly, nonatomic) int naturalDirection; // ivar: _naturalDirection
@property (readonly, nonatomic) TSPObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, retain, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) *void nextTargetTopicNumbers;
@property (readonly, nonatomic) NSUInteger pageCount;
@property (readonly, nonatomic) NSUInteger pageNumber;
@property (readonly, nonatomic) TSWPParagraphStyle *paragraphStyle; // ivar: _paragraphStyle
@property (readonly, nonatomic) TSDLayout *parentLayoutForInlineAttachments;
@property (readonly, nonatomic) CGPoint position;
@property (readonly, retain, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) *void previousTargetTopicNumbers;
@property (readonly, nonatomic) BOOL pushAscendersIntoColumn;
@property (nonatomic) CGFloat reservedWidthWhenTruncating; // ivar: _reservedWidthWhenTruncating
@property (readonly, nonatomic) BOOL shouldHyphenate;
@property (readonly, nonatomic) BOOL shrinkTextToFit;
@property (retain, nonatomic) NSObject<TSWPStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) TSUColor *textColorOverride; // ivar: _textColorOverride
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) CGFloat textScaleFactor;
@property (readonly, nonatomic) unsigned int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


+(void)renderColumn:(id)arg0 selection:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(BOOL)arg3 viewScale:(CGFloat)arg4 ;
+(void)renderColumns:(id)arg0 selection:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(BOOL)arg3 viewScale:(CGFloat)arg4 ;
-(BOOL)adjustColumnOriginForAlignment;
-(BOOL)caresAboutStorageChanges;
-(BOOL)forceWesternLineBreaking;
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
-(id)initWithParagraphStyle:(id)arg0 ;
-(id)initWithParagraphStyle:(id)arg0 columnStyle:(id)arg1 ;
-(id)initWithParagraphStyle:(id)arg0 columnStyle:(id)arg1 alignmentForNaturalAlignment:(unsigned int)arg2 naturalDirection:(int)arg3 ;
-(id)initWithParagraphStyle:(id)arg0 listStyle:(id)arg1 ;
-(id)initWithParagraphStyle:(id)arg0 listStyle:(id)arg1 columnStyle:(id)arg2 ;
-(id)initWithParagraphStyle:(id)arg0 listStyle:(id)arg1 columnStyle:(id)arg2 alignmentForNaturalAlignment:(unsigned int)arg3 naturalDirection:(int)arg4 ;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)layoutMultiColumnTextStorage:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 pageNumber:(NSUInteger)arg4 pageCount:(NSUInteger)arg5 flags:(int)arg6 ;
-(id)layoutText:(id)arg0 kind:(int)arg1 minSize:(struct CGSize )arg2 maxSize:(struct CGSize )arg3 anchor:(struct CGPoint )arg4 flags:(int)arg5 ;
-(id)layoutText:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 flags:(int)arg4 ;
-(id)layoutTextStorage:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 flags:(int)arg4 ;
-(id)layoutTextStorage:(id)arg0 minSize:(struct CGSize )arg1 maxSize:(struct CGSize )arg2 anchor:(struct CGPoint )arg3 pageNumber:(NSUInteger)arg4 pageCount:(NSUInteger)arg5 flags:(int)arg6 ;
-(id)lineHintsForTarget:(id)arg0 ;
-(id)textWrapper;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(struct CGSize )measureStorage:(id)arg0 ;
-(struct CGSize )measureText:(id)arg0 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)dealloc;
-(void)drawColumn:(id)arg0 inContext:(struct CGContext *)arg1 isFlipped:(BOOL)arg2 viewScale:(CGFloat)arg3 ;
-(void)drawColumn:(id)arg0 selection:(id)arg1 inContext:(struct CGContext *)arg2 isFlipped:(BOOL)arg3 viewScale:(CGFloat)arg4 ;
-(void)drawText:(id)arg0 inContext:(struct CGContext *)arg1 minSize:(struct CGSize )arg2 maxSize:(struct CGSize )arg3 anchor:(struct CGPoint )arg4 flags:(int)arg5 viewScale:(CGFloat)arg6 ;
-(void)layoutManager:(id)arg0 didClearDirtyRangeWithDelta:(NSInteger)arg1 afterCharIndex:(NSUInteger)arg2 ;
-(void)layoutManagerNeedsLayout:(id)arg0 ;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;


@end


#endif