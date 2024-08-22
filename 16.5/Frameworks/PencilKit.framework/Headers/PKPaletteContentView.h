// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPALETTECONTENTVIEW_H
#define PKPALETTECONTENTVIEW_H

@class UIView, NSLayoutConstraint, NSString, UITapGestureRecognizer, UIStackView;
@protocol PKPaletteColorPickerContainerViewDelegate, PKPaletteButtonDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewStateObserving, PKPaletteContentViewInputAssistantDelegate, PKDrawingPaletteViewStateSubject;


#import "PKPaletteAdditionalOptionsView.h"
#import "PKPaletteColorPickerView.h"
#import "PKDrawingPaletteInputAssistantView.h"
#import "PKPaletteToolPickerAndColorPickerView.h"
#import "PKPaletteToolPickerView.h"
#import "PKPaletteUndoRedoView.h"

@interface PKPaletteContentView : UIView <PKPaletteColorPickerContainerViewDelegate, PKPaletteButtonDelegate, PKPaletteEdgeLocating, PKPalettePopoverDismissing, PKPaletteViewStateObserving>



@property (readonly, nonatomic) PKPaletteAdditionalOptionsView *additionalOptionsView; // ivar: _additionalOptionsView
@property (retain, nonatomic) NSLayoutConstraint *additionalOptionsViewCompactHeightConstraint; // ivar: _additionalOptionsViewCompactHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *additionalOptionsViewCompactWidthConstraint; // ivar: _additionalOptionsViewCompactWidthConstraint
@property (readonly, nonatomic) PKPaletteColorPickerView *colorPickerView;
@property (nonatomic) NSInteger contextEditingMode; // ivar: _contextEditingMode
@property (retain, nonatomic) UIView *contextualEditingView; // ivar: _contextualEditingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKPaletteContentViewInputAssistantDelegate> *inputAssistantViewDelegate; // ivar: _inputAssistantViewDelegate
@property (readonly, nonatomic) UIView *lassoToolEditingView;
@property (copy, nonatomic) NSString *lassoToolEditingViewIdentifier;
@property (retain, nonatomic) UITapGestureRecognizer *lassoToolTapGestureRecognizerInCompact; // ivar: _lassoToolTapGestureRecognizerInCompact
@property (readonly, nonatomic) PKDrawingPaletteInputAssistantView *paletteInputAssistantView;
@property (weak, nonatomic) NSObject<PKDrawingPaletteViewStateSubject> *paletteViewState; // ivar: _paletteViewState
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewBottomConstraint; // ivar: _stackViewBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewCenterXConstraint; // ivar: _stackViewCenterXConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactLeftConstraint; // ivar: _stackViewCompactLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewCompactRightConstraint; // ivar: _stackViewCompactRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeftConstraint; // ivar: _stackViewLeftConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewRightConstraint; // ivar: _stackViewRightConstraint
@property (retain, nonatomic) NSLayoutConstraint *stackViewTopConstraint; // ivar: _stackViewTopConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) PKPaletteToolPickerAndColorPickerView *toolAndColorPickerContainerView; // ivar: _toolAndColorPickerContainerView
@property (retain, nonatomic) NSLayoutConstraint *toolAndColorPickerContainerViewHeightConstraint; // ivar: _toolAndColorPickerContainerViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolAndColorPickerContainerViewWidthConstraint; // ivar: _toolAndColorPickerContainerViewWidthConstraint
@property (readonly, nonatomic) PKPaletteToolPickerView *toolPickerView;
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewHeightConstraint; // ivar: _toolPickerViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *toolPickerViewWidthConstraint; // ivar: _toolPickerViewWidthConstraint
@property (readonly, nonatomic) PKPaletteUndoRedoView *undoRedoView; // ivar: _undoRedoView
@property (nonatomic, getter=isUsingSmallestSupportedWidth) BOOL usingSmallestSupportedWidth; // ivar: _usingSmallestSupportedWidth


-(BOOL)_isHandwritingToolSelected;
-(BOOL)_useCompactSize;
-(BOOL)_useEqualSpacingStackViewDistribution;
-(BOOL)_wantsAdditionalOptionsViewVisible;
-(BOOL)_wantsUndoRedoButtonsShadow;
-(BOOL)_wantsUndoRedoButtonsVisible;
-(BOOL)isEllipsisButtonVisible;
-(BOOL)paletteButton:(id)arg0 wantsCustomBackgroundColorForState:(NSUInteger)arg1 ;
-(BOOL)paletteButton:(id)arg0 wantsCustomTintColorForState:(NSUInteger)arg1 ;
-(CGFloat)_interItemToolsSpacing;
-(CGFloat)_undoRedoButtonsInterItemSpacing;
-(CGFloat)toolPickerView:(id)arg0 widthForToolAtIndex:(NSInteger)arg1 isCompactSize:(BOOL)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPaletteViewStateObservable:(id)arg0 ;
-(id)paletteButton:(id)arg0 backgroundColorForState:(NSUInteger)arg1 ;
-(id)paletteButton:(id)arg0 tintColorForState:(NSUInteger)arg1 ;
-(struct CGRect )plusButtonFrame;
-(void)_didTapLassoToolInCompact;
// -(void)_dismissPalettePopoverUsingConfirmationBlock:(id)arg0 completion:(unk)arg1  ;
-(void)_handleKeyboardButtonPressed;
-(void)_handleReturnKeyButtonPressed;
-(void)_installAdditionalOptionsView;
-(void)_installStackView;
-(void)_installUndoRedoButtonsView;
-(void)_updateAdditionalOptionsViewVisibility;
-(void)_updateColorPickerContainerViewLocationInHierarchy;
-(void)_updateUI;
-(void)_updateUIResetUnselectedToolsVisible:(BOOL)arg0 ;
-(void)colorPickerContainerView:(id)arg0 willDismissInputAssistantView:(id)arg1 ;
-(void)colorPickerContainerView:(id)arg0 willPresentInputAssistantView:(id)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)layoutSubviews;
-(void)paletteViewStateDidChange:(id)arg0 ;
-(void)paletteViewStateDidChangeAutoHide:(id)arg0 ;
-(void)paletteViewStateDidChangeEnableKeyboardButtons:(id)arg0 ;
-(void)paletteViewStateDidChangeFloatingKeyboardType:(id)arg0 ;
-(void)paletteViewStateDidChangeInputAssistantItems:(id)arg0 ;
-(void)paletteViewStateDidChangeIsVisible:(id)arg0 ;
-(void)paletteViewStateDidChangeScaleFactor:(id)arg0 ;
-(void)paletteViewStateDidChangeSelectedTool:(id)arg0 ;
-(void)paletteViewStateDidChangeShowsHandwritingTool:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)toggleColorSelectionPopover;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif