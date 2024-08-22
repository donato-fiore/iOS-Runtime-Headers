// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICLASSICTEXTLAYOUTCONTROLLER_H
#define _UICLASSICTEXTLAYOUTCONTROLLER_H

@class UITextLayoutController, NSLayoutManager;


#import "_UITextCanvasView.h"
#import "_UIFieldEditorLayoutManager.h"

@interface _UIClassicTextLayoutController : UITextLayoutController {
    NSLayoutManager *_layoutManager;
    _UITextCanvasView *_canvasView;
    _UIFieldEditorLayoutManager *_fieldEditorlayoutManager;
}




-(BOOL)allowsNonContiguousLayout;
-(BOOL)canAccessLayoutManager;
-(BOOL)drawsDebugBaselines;
-(CGFloat)baselineOffsetForFirstGlyph;
-(NSInteger)affinityForPosition:(id)arg0 ;
-(NSInteger)baseWritingDirectionAtPosition:(id)arg0 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSUInteger)_textStorageLength;
-(id)annotatedSubstringForRange:(id)arg0 ;
-(id)annotationAttribute:(id)arg0 atPosition:(id)arg1 ;
-(id)attributedTextInRange:(id)arg0 ;
-(id)attributesAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)beginningOfDocument;
-(id)cursorPositionAtPoint:(struct CGPoint )arg0 inContainer:(id)arg1 ;
-(id)dequeueCanvasViewForTextContainer:(id)arg0 ;
-(id)documentRange;
-(id)emptyTextRangeAtPosition:(id)arg0 ;
-(id)endOfDocument;
-(id)initWithTextContainer:(id)arg0 ;
-(id)initWithTextContainer:(id)arg0 textStorage:(id)arg1 ;
-(id)layoutManager;
-(id)layoutManagerDelegate;
-(id)nearestPositionAtPoint:(struct CGPoint )arg0 inContainer:(id)arg1 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 affinity:(NSInteger)arg2 ;
-(id)positionWithOffset:(NSInteger)arg0 affinity:(NSInteger)arg1 ;
-(id)previewRendererForRange:(id)arg0 unifyRects:(BOOL)arg1 ;
-(id)selectionRectsForRange:(id)arg0 fromView:(id)arg1 forContainerPassingTest:(id)arg2 ;
-(id)styleEffectConfiguration;
-(id)textContainerForPosition:(id)arg0 ;
-(id)textContainers;
-(id)textRangeForBounds:(struct CGRect )arg0 inTextContainer:(id)arg1 layoutIfNeeded:(BOOL)arg2 ;
-(id)textRangeForCharacterRange:(struct _NSRange )arg0 ;
-(id)textRangeForLineEnclosingPosition:(id)arg0 effectiveAffinity:(NSInteger)arg1 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStorage;
-(id)underlineColorForSpelling;
-(id)underlineColorForTextAlternatives;
-(id)validatedPositionForPosition:(id)arg0 ;
-(id)validatedRangeForRange:(id)arg0 ;
-(struct CGRect )boundingRectForCharacterRange:(struct _NSRange )arg0 ;
-(struct CGRect )boundingRectForRange:(id)arg0 ;
-(struct CGRect )insertionRectForPosition:(id)arg0 typingAttributes:(id)arg1 placeholderAttachment:(id)arg2 textContainer:(*id)arg3 ;
-(struct CGRect )usedRectForTextContainer:(id)arg0 ;
-(struct _NSRange )characterRangeForTextRange:(id)arg0 ;
-(struct _NSRange )rangeOfCharacterClusterAtIndex:(NSUInteger)arg0 type:(NSInteger)arg1 ;
-(void)addAnnotationAttribute:(id)arg0 value:(id)arg1 forRange:(id)arg2 ;
-(void)addGhostedRange:(id)arg0 ;
-(void)addInvisibleRange:(id)arg0 ;
-(void)addRenderingAttributes:(id)arg0 forRange:(id)arg1 ;
-(void)ensureLayoutForRange:(id)arg0 ;
-(void)ensureLayoutForTextContainer:(id)arg0 ;
-(void)enumerateTextLineFragmentsInRange:(id)arg0 usingBlock:(id)arg1 ;
-(void)invalidateDisplayForCharacterRange:(struct _NSRange )arg0 ;
-(void)invalidateLayoutForRange:(id)arg0 ;
-(void)removeAllGhostedRanges;
-(void)removeAnnotationAttribute:(id)arg0 forRange:(id)arg1 ;
-(void)removeInvisibleRange:(id)arg0 ;
-(void)removeRenderingAttributes:(id)arg0 forRange:(id)arg1 ;
-(void)requestTextGeometryAtPosition:(id)arg0 typingAttributes:(id)arg1 resultBlock:(id)arg2 ;
-(void)resetFontForExtraBulletRendering;
-(void)setAllowsNonContiguousLayout:(BOOL)arg0 ;
-(void)setDrawsDebugBaselines:(BOOL)arg0 ;
-(void)setLayoutManagerDelegate:(id)arg0 ;
-(void)setStyleEffectConfiguration:(id)arg0 ;
-(void)setUnderlineColorForSpelling:(id)arg0 ;
-(void)setUnderlineColorForTextAlternatives:(id)arg0 ;


@end


#endif