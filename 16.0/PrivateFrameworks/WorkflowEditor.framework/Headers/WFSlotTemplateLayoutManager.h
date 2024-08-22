// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSLOTTEMPLATELAYOUTMANAGER_H
#define WFSLOTTEMPLATELAYOUTMANAGER_H

@class NSLayoutManager, NSString;
@protocol NSLayoutManagerDelegate, WFTextAttachmentSizeProvider;


#import "WFSlotTemplateTextStorage.h"

@interface WFSlotTemplateLayoutManager : NSLayoutManager <NSLayoutManagerDelegate, WFTextAttachmentSizeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL extendSlotBackgroundOffEdges; // ivar: _extendSlotBackgroundOffEdges
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isLayoutManagerForTextView; // ivar: _isLayoutManagerForTextView
@property (readonly, nonatomic) NSUInteger numberOfLaidLines;
@property (readonly) Class superclass;
@property (nonatomic) WFSlotTemplateTextStorage *textStorage;


-(BOOL)layoutManager:(id)arg0 shouldBreakLineByWordBeforeCharacterAtIndex:(NSUInteger)arg1 ;
-(BOOL)layoutManager:(id)arg0 shouldSetLineFragmentRect:(struct CGRect *)arg1 lineFragmentUsedRect:(struct CGRect *)arg2 baselineOffset:(*CGFloat)arg3 inTextContainer:(id)arg4 forGlyphRange:(struct _NSRange )arg5 ;
-(BOOL)shouldDrawTextAttachment:(id)arg0 atCharacterIndex:(NSUInteger)arg1 ;
-(CGFloat)preferredHeightForDrawingTextAttachment:(id)arg0 atCharacterIndex:(NSUInteger)arg1 withProposedHeight:(CGFloat)arg2 ;
-(NSInteger)layoutManager:(id)arg0 shouldUseAction:(NSInteger)arg1 forControlCharacterAtIndex:(NSUInteger)arg2 ;
-(id)init;
-(struct CGRect )layoutManager:(id)arg0 boundingBoxForControlGlyphAtIndex:(NSUInteger)arg1 forTextContainer:(id)arg2 proposedLineFragment:(struct CGRect )arg3 glyphPosition:(struct CGPoint )arg4 characterIndex:(NSUInteger)arg5 ;
-(void)drawBackgroundForGlyphRange:(struct _NSRange )arg0 atPoint:(struct CGPoint )arg1 ;
-(void)drawGradientInEnclosingRect:(id)arg0 enclosingRect:(struct CGRect *)arg1 lineFragmentPadding:(CGFloat)arg2 runsOffLeft:(BOOL)arg3 runsOffRight:(BOOL)arg4 ;
-(void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange )arg0 insetForBackground:(BOOL)arg1 standaloneTextAttachment:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)enumerateEnclosingRectsForSlot:(id)arg0 includeInsideSpacing:(BOOL)arg1 insetForBackground:(BOOL)arg2 usingBlock:(id)arg3 ;
-(void)enumerateInsetEnclosingRectsForGlyphRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)getCalculatedLineHeight:(*CGFloat)arg0 originalFontLineHeight:(*CGFloat)arg1 ;
-(void)getPreferredLeadingSpacing:(*CGFloat)arg0 trailingSpacing:(*CGFloat)arg1 forDrawingTextAttachment:(id)arg2 atCharacterIndex:(NSUInteger)arg3 ;


@end


#endif