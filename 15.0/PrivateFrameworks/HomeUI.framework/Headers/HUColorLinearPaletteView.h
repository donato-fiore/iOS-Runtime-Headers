// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCOLORLINEARPALETTEVIEW_H
#define HUCOLORLINEARPALETTEVIEW_H

@class UIView, HFColorPalette, UICollectionViewFlowLayout, UICollectionView, NSString, UIImpactFeedbackGenerator, NSIndexPath, HFColorPaletteColor, UISelectionFeedbackGenerator;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUQuickControlInteractiveView, HUQuickControlColorPaletteViewInteractionDelegate;


#import "HUQuickControlColorViewProfile.h"

@interface HUColorLinearPaletteView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HUQuickControlInteractiveView>



@property (retain, nonatomic) HFColorPalette *calibratedColorPalette; // ivar: _calibratedColorPalette
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionViewFlowLayout; // ivar: _collectionViewFlowLayout
@property (retain, nonatomic) HFColorPalette *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) UICollectionView *colorSwatchCollectionView; // ivar: _colorSwatchCollectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (weak, nonatomic) NSObject<HUQuickControlColorPaletteViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSIndexPath *prevSelectedColorIndexPath; // ivar: _prevSelectedColorIndexPath
@property (copy, nonatomic) HUQuickControlColorViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) HFColorPaletteColor *selectedColor; // ivar: _selectedColor
@property (retain, nonatomic) NSIndexPath *selectedColorIndexPath; // ivar: _selectedColorIndexPath
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)_indexForSelectedColor:(id)arg0 includeBias:(BOOL)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 colorPalette:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_actuateImpactTapticFeedback;
-(void)_actuateSelectionTapticFeedback;
-(void)_prepareForTapticFeedback;
-(void)_updateCalibratedColorPalette;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateSelectedColorIndexPathToIndexPath:(id)arg0 ;


@end


#endif