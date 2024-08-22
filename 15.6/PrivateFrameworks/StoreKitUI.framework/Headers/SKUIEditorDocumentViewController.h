// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIEDITORDOCUMENTVIEWCONTROLLER_H
#define SKUIEDITORDOCUMENTVIEWCONTROLLER_H

@class NSString;
@protocol SKUIEditorTemplateViewDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIButtonViewElement.h"
#import "SKUIEditorTemplateView.h"
#import "SKUIViewElementLayoutContext.h"
#import "SKUIEditorTemplateViewElement.h"

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController>

 {
    SKUIButtonViewElement *_doneButtonElement;
    SKUIEditorTemplateView *_editorView;
    BOOL _isTextChanged;
    CGRect _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIButtonViewElement *_resetButtonElement;
    SKUIEditorTemplateViewElement *_templateElement;
    CGRect _toolbarFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_backgroundColor;
-(id)_layoutContext;
-(id)_locateFirstButtonWithType:(NSInteger)arg0 inChildrenOfElement:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg0 ;
-(void)_authenticateOnCompletion:(id)arg0 ;
-(void)_cancelButtonAction;
-(void)_doneButtonAction;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_layoutEditorView;
-(void)_layoutNavigation;
-(void)_resetButtonAction;
-(void)_resetTextView;
-(void)_sendCancelEventAndDismiss;
-(void)_sendDoneEventAndDismissWithText:(id)arg0 ;
-(void)_updateBiographyWithText:(id)arg0 onCompletion:(id)arg1 ;
-(void)_updateEditorViewInset;
-(void)dealloc;
-(void)didChangeTextInEditorTemplateView:(id)arg0 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif