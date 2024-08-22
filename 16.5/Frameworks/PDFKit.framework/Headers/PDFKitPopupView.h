// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFKITPOPUPVIEW_H
#define PDFKITPOPUPVIEW_H

@class UIView, NSString;
@protocol UITextViewDelegate;


#import "PDFKitPopupViewPrivate.h"

@interface PDFKitPopupView : UIView <UITextViewDelegate>

 {
    PDFKitPopupViewPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(id)initWithParentAnnotation:(id)arg0 owningPageView:(id)arg1 owningPDFView:(id)arg2 ;
-(struct CGRect )_popoverControllerSourceRect;
-(void)_presentPopupView;
-(void)_presentPopupView_iOS;
-(void)_presentViewController:(id)arg0 ;
-(void)_removeControlForAnnotation;
-(void)_setupPopupView;
-(void)_updateParentContents;
-(void)doneButton:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)removeFromSuperview;
-(void)textViewDidChange:(id)arg0 ;


@end


#endif