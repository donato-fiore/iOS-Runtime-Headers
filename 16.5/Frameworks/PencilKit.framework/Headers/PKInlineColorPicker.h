// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKINLINECOLORPICKER_H
#define PKINLINECOLORPICKER_H

@class UIView, UIColor, NSArray, NSString, UIScrollView;
@protocol UIScrollViewDelegate, PKColorPickerDelegatePrivate, UIPopoverPresentationControllerDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate, _PKInlineColorPickerAllowDrawingWithPopoverDelegate, PKInlineColorPickerContentsHiddenDelegate, PKInlineColorPickerDelegate, PKInlineColorPickerSerialViewControllerTransitionDelegate;


#import "PKColorPicker.h"

@interface PKInlineColorPicker : UIView <UIScrollViewDelegate, PKColorPickerDelegatePrivate, UIPopoverPresentationControllerDelegate, _PKAllowDrawingWhilePresentingPopoverViewDelegate>



@property (weak, nonatomic) NSObject<_PKInlineColorPickerAllowDrawingWithPopoverDelegate> *_allowDrawingWithPopoverDelegate; // ivar: __allowDrawingWithPopoverDelegate
@property (weak, nonatomic) NSObject<PKInlineColorPickerContentsHiddenDelegate> *_contentsHiddenDelegate; // ivar: __contentsHiddenDelegate
@property (retain, nonatomic) UIColor *_pickerColor; // ivar: __pickerColor
@property (nonatomic) NSInteger aggd_colorsChangedCount; // ivar: _aggd_colorsChangedCount
@property (retain, nonatomic) UIColor *aggd_initialColorOnPopoverOpen; // ivar: _aggd_initialColorOnPopoverOpen
@property (retain, nonatomic) NSArray *buttonItems; // ivar: _buttonItems
@property (nonatomic) NSUInteger colorSet; // ivar: _colorSet
@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKInlineColorPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSelectColorUsingSpringLoadedSelection; // ivar: _didSelectColorUsingSpringLoadedSelection
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isUsedOnDarkBackground; // ivar: _isUsedOnDarkBackground
@property (retain, nonatomic) UIView *leftOverflowView; // ivar: _leftOverflowView
@property (retain, nonatomic) PKColorPicker *presentedColorPicker; // ivar: _presentedColorPicker
@property (retain, nonatomic) UIView *rightOverflowView; // ivar: _rightOverflowView
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) CGFloat selectedColorAlpha; // ivar: _selectedColorAlpha
@property (retain, nonatomic) UIColor *selectedColorBeforeSpringLoadedSelection; // ivar: _selectedColorBeforeSpringLoadedSelection
@property (nonatomic) NSUInteger selectedColorIndex; // ivar: _selectedColorIndex
@property (nonatomic) NSUInteger selectionState; // ivar: _selectionState
@property (weak, nonatomic) NSObject<PKInlineColorPickerSerialViewControllerTransitionDelegate> *serialViewControllerTransitionDelegate; // ivar: _serialViewControllerTransitionDelegate
@property (nonatomic) BOOL shouldEmboss; // ivar: _shouldEmboss
@property (nonatomic) NSUInteger sizeState; // ivar: _sizeState
@property (readonly) Class superclass;


-(BOOL)_isInkPickerContentsHidden;
-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)colorPickerButtonIndex;
-(NSInteger)defaultColorIndex;
-(NSUInteger)colorIndexMatchingColor:(id)arg0 ;
-(id)_axLabelForColorButton:(id)arg0 ;
-(id)_effectiveBarButtonItemForPopoverPresentation;
-(id)_effectiveViewControllerForPopoverPresentation;
-(id)_representableColorForColor:(id)arg0 ;
-(id)colorForIndex:(NSInteger)arg0 ;
-(id)colorsForColorSet:(NSUInteger)arg0 ;
-(id)createColorButtonItemWithColor:(id)arg0 shouldEmboss:(BOOL)arg1 ;
-(id)createColorPickerButtonShouldEmboss:(BOOL)arg0 ;
-(id)initWithEmbossing:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_effectiveRectForPopoverPresentation;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 sizeState:(NSUInteger)arg1 selectionState:(NSUInteger)arg2 ;
-(void)_allowDrawingWhilePresentingPopoverViewDidBeginDrawing:(id)arg0 ;
-(void)_axHandleLongPressOnColorButtonForLargeTextHUD:(id)arg0 ;
-(void)_colorPickerUserDidTouchUpInside:(id)arg0 ;
-(void)_colorPickerWillDismiss:(id)arg0 ;
-(void)_commonInit;
-(void)_dismissColorPickerPopover:(BOOL)arg0 ;
-(void)_forceSetColorSet:(NSUInteger)arg0 ;
-(void)_presentColorPickerPopover:(BOOL)arg0 ;
-(void)_selectColorWithButton:(id)arg0 ;
-(void)_toggleColorPickerPopoverPresentation:(BOOL)arg0 ;
-(void)colorButtonTapHandler:(id)arg0 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg0 ;
-(void)layoutSubviews;
-(void)notifyDelegateDidSelectColor:(BOOL)arg0 ;
-(void)notifyDelegateDidSelectColorInCompactChooseToolState;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)showOverflowViewsIfNeeded;
-(void)springLoadingGestureHandler:(id)arg0 ;


@end


#endif