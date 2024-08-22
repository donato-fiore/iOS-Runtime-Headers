// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTECOLORPICKERVIEW_H
#define PKPALETTECOLORPICKERVIEW_H

@class UIView, UIColor, UICollectionView, NSString, UILongPressGestureRecognizer, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKPaletteEdgeLocating, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling, PKPaletteColorPickerController, PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate;


#import "PKPaletteMulticolorSwatch.h"

@interface PKPaletteColorPickerView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIPopoverPresentationControllerDelegate, UIGestureRecognizerDelegate, PKPaletteColorPickerControllerDelegate, PKPaletteEdgeLocating, PKPaletteQuickColorPicking, PKPalettePopoverUpdating, PKPalettePopoverDismissing, PKPaletteViewSizeScaling>



@property (nonatomic) NSInteger analyticsColorChangeCount; // ivar: _analyticsColorChangeCount
@property (retain, nonatomic) UIColor *analyticsInitialColor; // ivar: _analyticsInitialColor
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) NSObject<PKPaletteColorPickerController> *colorPickerController; // ivar: _colorPickerController
@property (nonatomic) NSInteger colorPickerMode; // ivar: _colorPickerMode
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPalettePopoverPresenting><PKPaletteColorPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger edgeLocation; // ivar: _edgeLocation
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) PKPaletteMulticolorSwatch *multicolorSwatch; // ivar: _multicolorSwatch
@property (nonatomic) CGFloat scalingFactor; // ivar: _scalingFactor
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *swatchColors; // ivar: _swatchColors
@property (retain, nonatomic) NSArray *swatches; // ivar: _swatches


+(id)collectionViewFlowLayoutWithItemSize:(struct CGSize )arg0 minimumLineSpacing:(CGFloat)arg1 minimumInterItemSpacing:(CGFloat)arg2 ;
-(BOOL)_colorPickerAllowsColorSelection;
-(BOOL)_shouldDisplayExtendedColorPickerPopoverFromColorSwatch:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSUInteger)_multicolorSwatchIndexForEdge:(NSUInteger)arg0 ;
-(id)_popoverPresentingSourceview;
-(id)_selectedSwatch;
-(id)_swatchColorsForTraitCollection:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)colorAtPoint:(struct CGPoint )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)swatchWithColor:(id)arg0 ;
-(id)swatchWithIdentifier:(id)arg0 ;
-(id)traitCollectionWithCurrentInterfaceStyle;
-(struct CGRect )_popoverPresentingSourceRect;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )swatchSize;
-(void)_enableOrDisableLongPressGesture;
-(void)_reloadSwatchColorsForTraitCollection:(id)arg0 ;
-(void)_showExtendedColorPicker;
-(void)_swatchLongPressHandler:(id)arg0 ;
-(void)_updateUI;
-(void)collectionView:(id)arg0 didHighlightItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnhighlightItemAtIndexPath:(id)arg1 ;
-(void)colorPickerControllerDidChangeSelectedColor:(id)arg0 ;
-(void)dealloc;
-(void)didChangePreferredContentSize:(id)arg0 ;
-(void)dismissPalettePopoverWithCompletion:(id)arg0 ;
-(void)reloadColorsForCurrentColorPickerMode;
-(void)toggleColorSelectionPopover;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePopoverUI;


@end


#endif