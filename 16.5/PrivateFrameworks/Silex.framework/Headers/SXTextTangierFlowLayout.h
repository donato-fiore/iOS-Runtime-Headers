// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIERFLOWLAYOUT_H
#define SXTEXTTANGIERFLOWLAYOUT_H

@class TSDLayout, NSMutableArray, TSDCanvas, NSString, TSPObject<TSDHint>;
@protocol TSWPLayoutTarget, TSWPFootnoteHeightMeasurer, TSWPFootnoteMarkProvider, TSWPOffscreenColumn;



@interface SXTextTangierFlowLayout : TSDLayout <TSWPLayoutTarget>



@property (readonly, nonatomic) BOOL allowsDescendersToClip;
@property (readonly, nonatomic) BOOL allowsLastLineTruncation;
@property (readonly, nonatomic) BOOL alwaysAllowWordSplit;
@property (readonly, nonatomic) CGPoint anchorPoint;
@property (retain, nonatomic) NSMutableArray *anchoredDrawablesForRelayout;
@property (readonly, nonatomic) unsigned int autosizeFlags;
@property (readonly, nonatomic) TSDCanvas *canvas;
@property (retain, nonatomic) NSMutableArray *columns; // ivar: _columns
@property (readonly, nonatomic) CGSize currentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<TSWPFootnoteHeightMeasurer> *footnoteHeightMeasurer;
@property (readonly, nonatomic) NSObject<TSWPFootnoteMarkProvider> *footnoteMarkProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *__CFLocale hyphenationLocale;
@property (readonly, nonatomic) BOOL ignoresEquationAlignment;
@property (readonly, nonatomic) BOOL layoutIsValid;
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
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) unsigned int verticalAlignment;
@property (readonly, nonatomic) BOOL wantsLineFragments;


-(BOOL)isLastTarget;
-(BOOL)isLayoutOffscreen;
-(BOOL)shouldDisplayGuides;
-(BOOL)shouldPositionAttachmentsIteratively;
-(BOOL)shouldProvideSizingGuides;
-(NSUInteger)characterPositionForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)iterativeAttachmentPositioningMaxPassCount;
-(id)columnMetricsForCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)initWithInfo:(id)arg0 layout:(id)arg1 frame:(struct CGRect )arg2 ;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)layoutGeometryFromInfo;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(struct CGPoint )capturedInfoPositionForAttachment;
-(struct CGPoint )pointForCharacterPosition:(NSUInteger)arg0 ;
-(struct CGRect )targetRectForCanvasRect:(struct CGRect )arg0 ;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)dealloc;
-(void)setNeedsDisplayInTargetRect:(struct CGRect )arg0 ;
-(void)validate;


@end


#endif