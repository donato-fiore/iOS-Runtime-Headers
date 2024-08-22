// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMESSAGEENTRYRICHTEXTVIEW_H
#define CKMESSAGEENTRYRICHTEXTVIEW_H

@class NSMutableDictionary, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol NSTextStorageDelegate, UIGestureRecognizerDelegate, CKMessageEntryRichTextViewDelegate;


#import "CKMessageEntryTextView.h"

@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate, UIGestureRecognizerDelegate>



@property (nonatomic) BOOL allowCalloutActions; // ivar: _allowCalloutActions
@property (nonatomic) char balloonColor; // ivar: _balloonColor
@property (retain, nonatomic) NSMutableDictionary *composeImages; // ivar: _composeImages
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKMessageEntryRichTextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAttachments; // ivar: _disableAttachments
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) NSMutableDictionary *mediaObjects; // ivar: _mediaObjects
@property (retain, nonatomic) NSMutableDictionary *pluginDisplayContainers; // ivar: _pluginDisplayContainers
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)_canSuggestSupplementalItemsForCurrentSelection;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)isSingleLineDocument;
-(id)_compositionFromSelection;
-(id)attributedTextForCompositionText:(id)arg0 ;
-(id)cachedMediaObjectForTransferGUID:(id)arg0 ;
-(id)cachedPluginDisplayContainerForGUID:(id)arg0 ;
-(id)composeImageForTransferGUID:(id)arg0 traitCollection:(id)arg1 ;
-(id)compositionText;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 shouldDisableAttachments:(BOOL)arg2 ;
-(id)pasteConfiguration;
-(id)pasteboard;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(struct _NSRange )_rangeFromUITextRange:(id)arg0 ;
-(void)_cancelChooseSupplementalItemToInsert;
-(void)_chooseSupplementalItemToInsert:(id)arg0 replacementRange:(id)arg1 completionHandler:(id)arg2 ;
-(void)_insertSupplementalItem:(id)arg0 forString:(id)arg1 replacementRange:(id)arg2 ;
-(void)_insertionPointEnteredRange:(id)arg0 string:(id)arg1 supplementalItems:(id)arg2 ;
-(void)_insertionPointExitedRangeWithSupplementalItems;
-(void)_showCustomInputView;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)handlePastedString:(id)arg0 toRange:(id)arg1 ;
-(void)handleTapOrLongPress:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)previewDidChange:(id)arg0 ;
-(void)setCompositionText:(id)arg0 ;
-(void)textStorage:(id)arg0 willProcessEditing:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 ;
-(void)updateComposeImages;
-(void)validateCommand:(id)arg0 ;


@end


#endif