// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFKITTEXTVIEW_H
#define PDFKITTEXTVIEW_H

@class NSString;
@protocol UITextViewDelegate;

#import <Foundation/Foundation.h>

#import "PDFKitTextViewPrivate.h"

@interface PDFKitTextView : NSObject <UITextViewDelegate>

 {
    PDFKitTextViewPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)handleBackTab;
-(BOOL)handleTab;
-(BOOL)textView:(id)arg0 doCommandBySelector:(SEL)arg1 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(id)annotation;
-(id)initWithAnnotation:(id)arg0 pdfPageView:(id)arg1 pdfView:(id)arg2 ;
-(id)layer;
-(id)textView;
-(void)_adjustScrollViewForKeyboardNotification:(id)arg0 ;
-(void)_applyScale:(CGFloat)arg0 toView:(id)arg1 ;
-(void)_didChangeZoomFactor:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_setAlignment:(NSInteger)arg0 ;
-(void)_setAttributedString:(id)arg0 ;
-(void)_setFont:(id)arg0 ;
-(void)_setFontColor:(id)arg0 ;
-(void)_setString:(id)arg0 ;
-(void)_setup;
-(void)_setupTopLevelView;
-(void)_textWidgetDone;
-(void)_updateScaleFactor;
-(void)adjustScrollViewToAccomodateKeyboardStartingFrame:(struct CGRect )arg0 endingFrame:(struct CGRect )arg1 annotationFrame:(struct CGRect )arg2 withAnimationDuration:(CGFloat)arg3 curve:(NSInteger)arg4 ;
-(void)removeFromSuperview;
-(void)rotateByAngle:(CGFloat)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif