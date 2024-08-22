// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICINKPALETTECONTROLLER_H
#define ICINKPALETTECONTROLLER_H

@class PKTool, NSString, UIView, PKToolPicker;
@protocol PKToolPickerObserver, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate, ICInkPaletteControllerDelegate;

#import <Foundation/Foundation.h>

#import "ICInkToolPickerResponder.h"

@interface ICInkPaletteController : NSObject <PKToolPickerObserver, PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate>



@property (readonly, nonatomic) PKTool *colorCorrectedTool;
@property (nonatomic) NSInteger colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICInkPaletteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isHandwritingToolSelected) BOOL handwritingToolSelected;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSystemPaperUI; // ivar: _isSystemPaperUI
@property (nonatomic) NSInteger palettePosition; // ivar: _palettePosition
@property (weak, nonatomic) UIView *parentView; // ivar: _parentView
@property (weak, nonatomic) ICInkToolPickerResponder *responder; // ivar: _responder
@property (copy, nonatomic) PKTool *selectedTool;
@property (nonatomic) NSInteger storedColorUserInterfaceStyle; // ivar: _storedColorUserInterfaceStyle
@property (retain, nonatomic) PKTool *storedSelectedTool; // ivar: _storedSelectedTool
@property (readonly) Class superclass;
@property (retain, nonatomic) PKToolPicker *toolPicker; // ivar: _toolPicker


+(id)sharedToolPickerForWindow:(id)arg0 ;
-(BOOL)isInkPaletteShowing;
-(id)_colorPickerPopoverPresentationSourceView:(id)arg0 ;
-(id)init;
-(id)initWithParentView:(id)arg0 responder:(id)arg1 delegate:(id)arg2 isSystemPaperUI:(BOOL)arg3 ;
-(struct CGRect )_colorPickerPopoverPresentationSourceRect:(id)arg0 ;
-(void)_toolPicker:(id)arg0 didChangeColor:(id)arg1 ;
-(void)_toolPicker:(id)arg0 shouldSetVisible:(BOOL)arg1 ;
-(void)_toolPickerDidChangePosition:(id)arg0 ;
-(void)dealloc;
-(void)hideInkPaletteAnimated:(BOOL)arg0 ;
-(void)showInkPalette:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showInkPaletteAnimated:(BOOL)arg0 ;
-(void)toolPickerFramesObscuredDidChange:(id)arg0 ;
-(void)toolPickerIsRulerActiveDidChange:(id)arg0 ;
-(void)toolPickerSelectedToolDidChange:(id)arg0 ;
-(void)updateTraitCollection:(id)arg0 ;


@end


#endif