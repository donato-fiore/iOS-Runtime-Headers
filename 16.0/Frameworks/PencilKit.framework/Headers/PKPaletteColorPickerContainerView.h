// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTECOLORPICKERCONTAINERVIEW_H
#define PKPALETTECOLORPICKERCONTAINERVIEW_H

@class UIView, NSString, UIStackView;
@protocol UIPopoverPresentationControllerDelegate, PKPalettePopoverDismissing, PKPaletteColorPickerContainerViewDelegate, PKPalettePopoverPresenting, PKDrawingPaletteViewStateSubject;


#import "PKPaletteColorPickerView.h"
#import "PKDrawingPaletteInputAssistantContainerView.h"
#import "PKPaletteInputAssistantViewController.h"

@interface PKPaletteColorPickerContainerView : UIView <UIPopoverPresentationControllerDelegate, PKPalettePopoverDismissing>



@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView; // ivar: _colorPickerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteColorPickerContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKDrawingPaletteInputAssistantContainerView *inputAssistantContainerView; // ivar: _inputAssistantContainerView
@property (retain, nonatomic) PKPaletteInputAssistantViewController *inputAssistantViewController; // ivar: _inputAssistantViewController
@property (nonatomic) NSInteger layoutAxis; // ivar: _layoutAxis
@property (weak, nonatomic) NSObject<PKPalettePopoverPresenting> *palettePopoverPresenting; // ivar: _palettePopoverPresenting
@property (weak, nonatomic) NSObject<PKDrawingPaletteViewStateSubject> *paletteViewState; // ivar: _paletteViewState
@property (nonatomic) BOOL shouldShowInputAssistantView; // ivar: _shouldShowInputAssistantView
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (readonly) Class superclass;


-(BOOL)_isInputAssistantViewControllerPresented;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dismissViewController:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleUCBButtonPressed;
-(void)_installInputAssistantViewContainer;
-(void)_showInputAssistantPopover;
-(void)_updateUI;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif