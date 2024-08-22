// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTPALETTECONTROLLER_H
#define PKTEXTINPUTPALETTECONTROLLER_H

@class NSString, UIWindowScene;
@protocol PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate, PKPaletteFloatingKeyboardControllerDelegate, UIEditingOverlayInteractionWithView, PKTextInputPaletteControllerDelegate;

#import <Foundation/Foundation.h>

#import "PKPaletteFloatingKeyboardController.h"
#import "PKPaletteController.h"
#import "PKTextInputSettings.h"
#import "PKTextInputWindowFirstResponderController.h"

@interface PKTextInputPaletteController : NSObject <PKTextInputWindowFirstResponderControllerDelegate, PKPaletteControllerDelegate, PKPaletteTapToRadarCommandDelegate, PKPaletteFloatingKeyboardControllerDelegate, UIEditingOverlayInteractionWithView>



@property (retain, nonatomic) PKPaletteFloatingKeyboardController *_floatingKeyboardController; // ivar: __floatingKeyboardController
@property (retain, nonatomic) PKPaletteController *_paletteController; // ivar: __paletteController
@property (retain, nonatomic) PKTextInputSettings *_textInputSettings; // ivar: __textInputSettings
@property (retain, nonatomic) PKTextInputWindowFirstResponderController *_windowFirstResponderController; // ivar: __windowFirstResponderController
@property (nonatomic, getter=_isWritingStateActive, setter=_setWritingStateActive:) BOOL _writingStateActive; // ivar: __writingStateActive
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputPaletteControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect editingOverlayContainerSceneBounds; // ivar: _editingOverlayContainerSceneBounds
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPaletteVisible) BOOL paletteVisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWindowScene *windowScene;


-(BOOL)_canShowPaletteUI;
-(BOOL)_isFirstResponderEditableTextInputWithPencilTextInputSource;
-(BOOL)_isFirstResponderInputAssistantEnabled;
-(BOOL)_isFirstResponderVisible;
-(BOOL)_shouldPaletteBeVisible;
-(BOOL)paletteController:(id)arg0 shouldOverridePaletteViewTraitCollectionTo:(id)arg1 ;
-(id)init;
-(id)initWithTextInputSettings:(id)arg0 ;
-(id)paletteTapToRadarCommandConfiguration:(id)arg0 ;
-(id)responderForFloatingKeyboardController:(id)arg0 ;
-(void)_peformPaletteVisibilityUpdate;
-(void)_recognitionLocaleIdentifierDidChange:(id)arg0 ;
-(void)_setupPaletteControllerIfNeededWithView:(id)arg0 wantsPaletteVisible:(BOOL)arg1 ;
-(void)_updatePaletteVisibility;
-(void)dealloc;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)floatingKeyboardControllerWillHide:(id)arg0 ;
-(void)floatingKeyboardControllerWillShow:(id)arg0 ;
-(void)paletteControllerFloatingKeyboardWillHide:(id)arg0 ;
-(void)paletteControllerFloatingKeyboardWillShow:(id)arg0 ;
-(void)updateFirstResponderVisibility;
-(void)windowFirstResponderController:(id)arg0 didChangeFirstResponder:(id)arg1 ;


@end


#endif