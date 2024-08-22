// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTEXTBALLOONVIEW_H
#define CKTEXTBALLOONVIEW_H

@class NSAttributedString, NSString, UITextView<CKBalloonTextViewProtocol>;
@protocol CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy;


#import "CKColoredBalloonView.h"

@interface CKTextBalloonView : CKColoredBalloonView <CKBalloonTextViewInteractionDelegate, UITextViewDelegate, CKBalloonVibrancy>



@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) BOOL containsExcessiveLineHeightCharacters; // ivar: _containsExcessiveLineHeightCharacters
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreSelectionEvent; // ivar: _ignoreSelectionEvent
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextView<CKBalloonTextViewProtocol> *textView; // ivar: _textView


-(BOOL)isSelected;
-(CGFloat)textViewWidthForWidth:(CGFloat)arg0 ;
-(Class)invisibleInkEffectViewClass;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textView:(id)arg1 ;
-(id)nonVibrantSubViews;
-(id)updateTextSelectionState:(id)arg0 forTextSelectionArea:(NSInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 isSingleLine:(*BOOL)arg2 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIEdgeInsets )targetTextContainerInsets;
-(void)addFilter:(id)arg0 ;
-(void)addOverlaySubview:(id)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)clearFilters;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)cullSubviewsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)detachInvisibleInkEffectView;
-(void)interactionStartedFromPreviewItemControllerInTextView:(id)arg0 ;
-(void)interactionStartedLongPressInTextView:(id)arg0 ;
-(void)interactionStartedTapInTextView:(id)arg0 withModifierFlags:(NSInteger)arg1 selectedText:(id)arg2 ;
-(void)interactionStoppedFromPreviewItemControllerInTextView:(id)arg0 ;
-(void)interactionTextView:(id)arg0 userDidDragOutsideViewWithPoint:(struct CGPoint )arg1 ;
-(void)interactionTextViewShouldCopyToPasteboard:(id)arg0 ;
-(void)invisibleInkEffectViewWasUncovered;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)restoreFromLargeTextTruncation;
-(void)setSelected:(BOOL)arg0 withSelectionState:(id)arg1 ;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)truncateForLargeText;
-(void)updateRasterizationForInvisibleInkEffect;
-(void)vibrantContainerWillReparentNonVibrantSubviews:(id)arg0 ;


@end


#endif