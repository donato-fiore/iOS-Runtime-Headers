// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKINLINEINKPICKER_H
#define PKINLINEINKPICKER_H

@class UIControl, NSMutableDictionary, NSArray, UIView, UILayoutGuide, NSString, UIPencilInteraction, UIColor;
@protocol PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate, PKInlineInkPickerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;


#import "_PKAllowDrawingWhilePresentingPopoverView.h"
#import "PKInlineColorPicker.h"
#import "_PKToolIndicator.h"
#import "PKInkAttributesPicker.h"
#import "PKInk.h"

@interface PKInlineInkPicker : UIControl <PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate, PKInkAttributesPickerDelegate, UIPopoverPresentationControllerDelegate, PKInlineColorPickerContentsHiddenDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, UIPencilInteractionDelegate, _PKToolIndicatorDelegate>

 {
    BOOL _shouldAnimateRuler;
}


@property (retain, nonatomic) _PKAllowDrawingWhilePresentingPopoverView *_allowDrawingWhilePresentingPopoverView; // ivar: __allowDrawingWhilePresentingPopoverView
@property (readonly, nonatomic) CGRect _extentRect;
@property (retain, nonatomic) NSMutableDictionary *_inkForIdentifierDict; // ivar: __inkForIdentifierDict
@property (retain, nonatomic) NSArray *allowedTools; // ivar: _allowedTools
@property (nonatomic) NSUInteger attributeSet; // ivar: _attributeSet
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide; // ivar: _backgroundViewLayoutGuide
@property (retain, nonatomic) UIView *clippingView; // ivar: _clippingView
@property (retain, nonatomic) PKInlineColorPicker *colorPicker; // ivar: _colorPicker
@property (nonatomic) NSUInteger colorSet;
@property (nonatomic) BOOL contentsHidden; // ivar: _contentsHidden
@property (retain, nonatomic) _PKToolIndicator *contentsHiddenToolIndicator; // ivar: _contentsHiddenToolIndicator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKInlineInkPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceCompactLayout; // ivar: _forceCompactLayout
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *inkIdentifiers; // ivar: _inkIdentifiers
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (nonatomic) BOOL pencilGestureSupportEnabled; // ivar: _pencilGestureSupportEnabled
@property (retain, nonatomic) UIPencilInteraction *pencilInteraction; // ivar: _pencilInteraction
@property (retain, nonatomic) PKInkAttributesPicker *presentedInkAttributesPicker; // ivar: _presentedInkAttributesPicker
@property (readonly, nonatomic) NSUInteger previousDrawingToolIndex; // ivar: _previousDrawingToolIndex
@property (readonly, nonatomic) NSUInteger previousToolIndex; // ivar: _previousToolIndex
@property (nonatomic) BOOL rulerEnabled; // ivar: _rulerEnabled
@property (copy, nonatomic) UIColor *selectedColor;
@property (copy, nonatomic) PKInk *selectedInk;
@property (copy, nonatomic) NSString *selectedInkIdentifier;
@property (readonly, nonatomic) NSUInteger selectedInkIndex; // ivar: _selectedInkIndex
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialViewControllerTransitionQueue; // ivar: _serialViewControllerTransitionQueue
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *serialViewControllerTransitionSemaphore; // ivar: _serialViewControllerTransitionSemaphore
@property (nonatomic) BOOL shouldEmboss; // ivar: _shouldEmboss
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *toolButtonItems; // ivar: _toolButtonItems


+(BOOL)_axLargerTextSizesEnabled;
+(BOOL)inkIdentifierHasMutableAttributes:(id)arg0 ;
+(CGFloat)_outputForResistanceFunction:(CGFloat)arg0 factor:(CGFloat)arg1 ;
+(CGFloat)spacingForToolIndex:(NSUInteger)arg0 sizeState:(NSUInteger)arg1 ;
+(id)_defaultCriticallyDampedSpringAnimator;
+(id)_defaultInkForIdentifier:(id)arg0 attributeSet:(NSUInteger)arg1 ;
+(id)_sharedPencilUserDefaults;
+(id)defaultInkForAttributeSet:(NSUInteger)arg0 ;
+(id)imageNamed:(id)arg0 ;
+(id)sharedImageNameCache;
-(BOOL)_colorPickerIsInkPickerContentsHidden:(id)arg0 ;
-(BOOL)_layoutButtonSelectedForToolIndex:(NSInteger)arg0 ;
-(BOOL)_shouldEnablePencilGestures;
-(BOOL)isDrawingToolIdentifier:(id)arg0 ;
-(BOOL)isDrawingToolIndex:(NSUInteger)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(CGFloat)_layoutAlphaForToolIndex:(NSInteger)arg0 ;
-(CGFloat)_layoutYOffsetForToolIndex:(NSInteger)arg0 ;
-(CGFloat)cachedToolButtonWidthForSizeState:(NSUInteger)arg0 ;
-(CGFloat)offsetForToolIndex:(NSUInteger)arg0 pressed:(BOOL)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSUInteger)selectionStateForSizeState:(NSUInteger)arg0 previousSelectionState:(NSUInteger)arg1 ;
-(NSUInteger)sizeStateForWidth:(CGFloat)arg0 ;
-(id)_axLabelForToolButton:(id)arg0 ;
-(id)_colorPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg0 ;
-(id)_effectiveViewControllerForPopoverPresentation;
-(id)_inkForSwitchingToPreviousToolOnPencilDoubleTap;
-(id)_inkForTogglingEraserAndLastDrawingToolOnPencilDoubleTap;
-(id)_inlineColorPickerAllowDrawingPassthroughView:(id)arg0 ;
-(id)_layoutCalculateUncenteredSubviewFrames;
-(id)_layoutSeparatorViewColorEmbossed:(BOOL)arg0 isUsedOnDarkBackground:(BOOL)arg1 ;
-(id)_queueForSerialViewControllerTransitionFromColorPicker:(id)arg0 ;
-(id)_semaphoreForSerialViewControllerTransitionFromColorPicker:(id)arg0 ;
-(id)_toolButtonContainingPoint:(struct CGPoint )arg0 ;
-(id)colorForInkIdentifier:(id)arg0 ;
-(id)createToolButtonItemWithInkIdentifier:(id)arg0 shouldEmboss:(BOOL)arg1 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithEmbossing:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)inkIdentifierForIndex:(NSUInteger)arg0 ;
-(id)lastDrawingToolInk;
-(id)minimizedImageForInk:(id)arg0 small:(BOOL)arg1 ;
-(id)viewControllerForPopoverPresentationFromColorPicker:(id)arg0 ;
-(struct CGRect )_colorPickerRectForContentsHiddenColorPickerPresentation:(id)arg0 ;
-(struct CGRect )_frameForNonDrawingToolAtIndex:(NSInteger)arg0 ;
-(struct CGRect )_layoutCenteredFrameForToolIndex:(NSInteger)arg0 uncenteredFrames:(id)arg1 centeringTransform:(struct CGAffineTransform )arg2 ;
-(struct CGRect )toolIndicatorCenteringRect:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )minimumSizeForSizeState:(NSUInteger)arg0 selectionState:(NSUInteger)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 sizeState:(NSUInteger)arg1 selectionState:(NSUInteger)arg2 ;
-(void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg0 ;
-(void)_animateRulerToggled:(id)arg0 ;
-(void)_axHandleLongPressForLargeTextHUD:(id)arg0 ;
-(void)_commonInit;
-(void)_dismissInkAttributesPicker:(id)arg0 ;
-(void)_forceSetAttributeSet:(NSUInteger)arg0 ;
-(void)_inlineColorPickerSetupAllowDrawingPassthroughViewIfNeeded:(id)arg0 ;
-(void)_inlineColorPickerTeardownAllowDrawingPassthroughView:(id)arg0 ;
-(void)_inlineColorPickerUpdateFrameForAllowDrawingPassthroughView:(id)arg0 ;
-(void)_layoutUpdateSizeAndSelectionState;
-(void)_loadToolbarItems;
-(void)_reloadToolbarItems;
-(void)_resetUIOnPencilDoubleTapTimerEnded;
-(void)_setupAllowDrawingWhilePresentingPopoverViewIfNecessaryWithDelegate:(id)arg0 ;
-(void)_showInkAttributesPickerFromView:(id)arg0 frame:(struct CGRect )arg1 displayMode:(NSUInteger)arg2 shouldHideArrow:(BOOL)arg3 completion:(id)arg4 ;
-(void)_teardownAllowDrawingWhilePresentingPopoverView;
-(void)_updateFrameForAllowDrawingWhilePresentingPopoverView;
-(void)_updateSelectedInkIndex:(NSUInteger)arg0 ;
-(void)_updateSubviewsWithInk:(id)arg0 animated:(BOOL)arg1 ;
-(void)colorPickerColorTappedInCompactChooseToolState:(id)arg0 ;
-(void)colorPickerDidSelectColor:(id)arg0 colorChanged:(BOOL)arg1 ;
-(void)inkAttributesPickerDidChangeSelectedInk:(id)arg0 ;
-(void)layoutSubviews;
-(void)notifyColorSelected:(id)arg0 didChange:(BOOL)arg1 ;
-(void)notifyToolSelected:(BOOL)arg0 ;
-(void)pencilInteractionDidTap:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)resetToDrawingToolWithAnimation:(BOOL)arg0 ;
-(void)selectColorPickerColor:(id)arg0 ;
-(void)toggleRuler;
-(void)toolIndicator:(id)arg0 willPresent:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)toolTapped:(id)arg0 ;
-(void)updateSelectedToolColor:(id)arg0 ;
-(void)userDidTouchTool:(id)arg0 ;


@end


#endif