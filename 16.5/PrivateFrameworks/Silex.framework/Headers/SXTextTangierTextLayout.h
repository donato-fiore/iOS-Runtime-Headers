// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTTANGIERTEXTLAYOUT_H
#define SXTEXTTANGIERTEXTLAYOUT_H

@class TSWPLayout, NSMutableSet;



@interface SXTextTangierTextLayout : TSWPLayout

@property (retain, nonatomic) NSMutableSet *addedChildren; // ivar: _addedChildren


-(BOOL)alwaysAllowWordSplit;
-(BOOL)drawableAttachment:(id)arg0 withLayout:(id)arg1 shouldPositionIterativelyInColumn:(id)arg2 ;
-(BOOL)pushAscendersIntoColumn;
-(BOOL)shouldPositionAttachmentsIteratively;
-(CGFloat)baselineForLastLine;
-(CGFloat)lineHeightGuessForFirstLine;
-(NSUInteger)iterativeAttachmentPositioningMaxPassCount;
-(id)attachedLayoutsInLayout:(id)arg0 anchored:(BOOL)arg1 ;
-(id)currentAnchoredDrawableLayouts;
-(id)currentInlineDrawableLayouts;
-(id)layoutForInlineDrawable:(id)arg0 ;
-(id)validatedLayoutForAnchoredDrawable:(id)arg0 ;
-(id)validatedLayoutForAttachedDrawable:(id)arg0 ;
-(struct CGSize )maxSize;
-(struct __CFLocale *)hyphenationLocale;
-(void)addAttachmentLayout:(id)arg0 ;
-(void)drawableAttachment:(id)arg0 didFinalizePosition:(struct CGPoint )arg1 ;
-(void)drawableAttachment:(id)arg0 willStartNewIterationWithIndex:(NSUInteger)arg1 ;
-(void)invalidate;
-(void)invalidateTextLayout;
-(void)startedIterativePositioningProcessForDrawableAttachment:(id)arg0 ;
-(void)validate;


@end


#endif