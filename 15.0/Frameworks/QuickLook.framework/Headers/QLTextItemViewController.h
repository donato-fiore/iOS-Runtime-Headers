// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLTEXTITEMVIEWCONTROLLER_H
#define QLTEXTITEMVIEWCONTROLLER_H

@class UITextView, NSAttributedString, NSLayoutConstraint, NSString, UIPrintPageRenderer, UISimpleTextPrintFormatter;
@protocol UITextViewDelegate, QLPrintingProtocol;


#import "QLItemViewController.h"

@interface QLTextItemViewController : QLItemViewController <UITextViewDelegate, QLPrintingProtocol>

 {
    UITextView *_textView;
    NSAttributedString *_content;
    NSLayoutConstraint *_leftConstraint;
    NSLayoutConstraint *_rightConstraint;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) UIPrintPageRenderer *pageRenderer; // ivar: _pageRenderer
@property (readonly) UISimpleTextPrintFormatter *printFormatter; // ivar: _printFormatter
@property (readonly) Class superclass;


-(BOOL)_documentAttributesContainTextColors:(id)arg0 ;
-(BOOL)_isContentPotentiallySuspicious:(id)arg0 context:(id)arg1 ;
-(BOOL)automaticallyUpdateScrollViewContentInset;
-(BOOL)automaticallyUpdateScrollViewContentOffset;
-(BOOL)automaticallyUpdateScrollViewIndicatorInset;
-(BOOL)canClickToToggleFullscreen;
-(BOOL)canPinchToDismiss;
-(BOOL)canSwipeToDismiss;
-(BOOL)canToggleFullScreen;
-(BOOL)shouldRecognizeGestureRecognizer:(id)arg0 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(id)printer;
-(id)registeredKeyCommands;
-(id)scrollView;
-(void)_setupTextViewColorsWithDocumentAttributes:(id)arg0 ;
-(void)_updateConstraintConstants:(BOOL)arg0 ;
-(void)loadPreviewControllerWithContents:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;
-(void)numberOfPagesWithSize:(struct CGSize )arg0 completionHandler:(id)arg1 ;
-(void)pdfDataForPageAtIndex:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)prepareForDrawingPages:(struct _NSRange )arg0 ofSize:(struct CGSize )arg1 ;
-(void)provideCurrentPageAndVisibleRectWithCompletionHandler:(id)arg0 ;
-(void)setAppearance:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif