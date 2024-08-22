// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXAUTOSIZEDCANVASCONTROLLER_H
#define SXAUTOSIZEDCANVASCONTROLLER_H

@class TSKDocumentRoot, TSDCanvasView, NSString;
@protocol TSWPEditingControllerDelegate, SXTextTangierInteractiveCanvasControllerDelegate, SXComponentActionHandler, SXAutoSizedCanvasControllerDelegate, SXTangierDragItemProvider;

#import <Foundation/Foundation.h>

#import "SXTextTangierCanvasViewController.h"
#import "SXTextTangierInteractiveCanvasController.h"

@interface SXAutoSizedCanvasController : NSObject <TSWPEditingControllerDelegate, SXTextTangierInteractiveCanvasControllerDelegate>

 {
    TSKDocumentRoot *_documentRoot;
    CGRect _frame;
}


@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (readonly, nonatomic) BOOL allowEditMenuToAppear;
@property (readonly, nonatomic) BOOL allowTextEditingToBegin;
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (readonly, nonatomic) SXTextTangierCanvasViewController *cvc; // ivar: _cvc
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXAutoSizedCanvasControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) NSObject<SXTangierDragItemProvider> *dragItemProvider; // ivar: _dragItemProvider
@property (readonly, nonatomic) BOOL editorAllowsCaret;
@property (readonly, nonatomic) BOOL editorAllowsEditMenu;
@property (readonly, nonatomic) BOOL editorAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL editorAllowsKeyboard;
@property (readonly, nonatomic) BOOL editorAllowsListInteraction;
@property (readonly, nonatomic) BOOL editorAllowsMagnifier;
@property (readonly, nonatomic) BOOL editorAllowsParagraphMode;
@property (readonly, nonatomic) BOOL editorAllowsRubyInteraction;
@property (readonly, nonatomic) BOOL editorShouldAlwaysBeInParagraphMode;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SXTextTangierInteractiveCanvasController *icc; // ivar: _icc
@property (readonly, nonatomic) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction;
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isPrintingCanvas;
@property (readonly, nonatomic) CGFloat lineHeight; // ivar: _lineHeight
@property (readonly, nonatomic) BOOL shouldClipToScrollViewBoundsInVisibleBounds;
@property (readonly, nonatomic) BOOL shouldPopKnobsOutsideEnclosingScrollView;
@property (readonly, nonatomic) BOOL shouldResizeCanvasToScrollView;
@property (readonly, nonatomic) BOOL shouldShowInstructionalText;
@property (readonly, nonatomic) BOOL shouldShowTextOverflowGlyphs;
@property (readonly, nonatomic) CGSize sizeOfScrollViewEnclosingCanvas;
@property (readonly, nonatomic) BOOL spellCheckingSupported;
@property (readonly, nonatomic) BOOL spellCheckingSuppressed;
@property (readonly) Class superclass;


-(BOOL)allowCopy;
-(BOOL)allowHighlighting;
-(BOOL)allowSelectionPopover;
-(BOOL)interactiveCanvasController:(id)arg0 shouldBeginInteraction:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(Class)wpEditorClassOverride;
-(id)initWithDocumentRoot:(id)arg0 actionHandler:(id)arg1 dragItemProvider:(id)arg2 ;
-(id)interactiveCanvasController:(id)arg0 dragItemForSmartField:(id)arg1 interaction:(id)arg2 session:(id)arg3 ;
-(struct CGRect )interactiveCanvasController:(id)arg0 expandVisibleBoundsForTiling:(struct CGRect )arg1 ;
-(struct CGSize )sizeThatFits;
-(void)interactiveCanvasController:(id)arg0 interactedWithHyperlink:(id)arg1 info:(id)arg2 range:(struct _NSRange )arg3 touchPoint:(struct CGPoint )arg4 touchAndHold:(BOOL)arg5 ;
-(void)invalidateLayoutsAndFrames;
-(void)teardown;


@end


#endif