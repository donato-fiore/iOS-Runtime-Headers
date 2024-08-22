// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKTEXTEDITORCONTROLLER_H
#define AKTEXTEDITORCONTROLLER_H

@class AKAnnotation<AKTextAnnotationProtocol>, NSString, NSTextStorage, UITextView, UIView, CALayer, NSUndoManager;
@protocol NSTextStorageDelegate, UITextViewDelegate;

#import <Foundation/Foundation.h>

#import "AKController.h"
#import "AKPageController.h"

@interface AKTextEditorController : NSObject <NSTextStorageDelegate, UITextViewDelegate>



@property (weak) AKAnnotation<AKTextAnnotationProtocol> *annotation; // ivar: _annotation
@property (weak) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat handleCompensatingScaleFactor; // ivar: _handleCompensatingScaleFactor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEditing;
@property BOOL isInAdjustAnnotationFrameToFitText; // ivar: _isInAdjustAnnotationFrameToFitText
@property BOOL isInEndEditing; // ivar: _isInEndEditing
@property CGFloat modelToEditorScaleFactor; // ivar: _modelToEditorScaleFactor
@property (weak) AKPageController *pageController; // ivar: _pageController
@property CGFloat renderingTextStorageScaleFactor; // ivar: _renderingTextStorageScaleFactor
@property (readonly) Class superclass;
@property (retain) NSTextStorage *textStorage; // ivar: _textStorage
@property (retain) UITextView *textView; // ivar: _textView
@property (retain) UIView *textViewContainer; // ivar: _textViewContainer
@property (retain) CALayer *textViewMaskLayer; // ivar: _textViewMaskLayer
@property (retain) NSUndoManager *textViewUndoManager; // ivar: _textViewUndoManager


-(id)_newScaledPaths:(id)arg0 withScaleFactor:(CGFloat)arg1 aboutCenter:(struct CGPoint )arg2 ;
-(id)initWithController:(id)arg0 ;
-(struct CGRect )_editorFrameForTextBoundsInModel:(struct CGRect )arg0 ;
-(void)_adjustAnnotationFrameToFitText;
-(void)_adjustEditorToFitAnnotation:(id)arg0 withText:(id)arg1 ;
-(void)_beginEditingAnnotation:(id)arg0 withPageController:(id)arg1 selectAllText:(BOOL)arg2 withPencil:(BOOL)arg3 ;
-(void)_commitToModelWithoutEndingEditing;
-(void)_endEditing;
-(void)_firstResponderDidChange:(id)arg0 ;
-(void)_performBlockOnMainThread:(id)arg0 ;
-(void)_registerForFirstResponderNotifications;
-(void)_unregisterForFirstResponderNotifications;
-(void)_updateTextView:(id)arg0 withFrame:(struct CGRect )arg1 andOrientation:(NSInteger)arg2 additionalRotation:(CGFloat)arg3 ;
-(void)beginEditingAnnotation:(id)arg0 withPageController:(id)arg1 selectAllText:(BOOL)arg2 ;
-(void)beginEditingAnnotation:(id)arg0 withPageController:(id)arg1 selectAllText:(BOOL)arg2 withPencil:(BOOL)arg3 ;
-(void)commitToModelWithoutEndingEditing;
-(void)dealloc;
-(void)endEditing;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)updateForTextAttributeChange;


@end


#endif