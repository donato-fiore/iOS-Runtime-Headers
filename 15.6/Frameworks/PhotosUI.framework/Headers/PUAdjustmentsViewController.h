// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUADJUSTMENTSVIEWCONTROLLER_H
#define PUADJUSTMENTSVIEWCONTROLLER_H

@class UIViewController, UIImage, PXUISnappingController, UICollectionView, NSString, NSIndexPath, CEKSlider;
@protocol UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, PUPhotoEditBaseAdjustmentCellDelegate, CEKSliderDelegate, PUAdjustmentsViewDataSource, PUAdjustmentViewControllerDelegate;


#import "PUPhotoEditAutoAdjustmentCell.h"
#import "PUAdjustmentsViewFlowLayout.h"
#import "PUAdjustmentInfo.h"
#import "PUSelectionFeedbackGenerator.h"

@interface PUAdjustmentsViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UIGestureRecognizerDelegate, PUPhotoEditBaseAdjustmentCellDelegate, CEKSliderDelegate>

 {
    CGPoint _lastOffset;
    CGFloat _previousTimeStamp;
    UIImage *_selectedItemBackgroundImage;
    UIImage *_itemBackgroundImage;
    BOOL _sliderIsScrubbing;
    PUPhotoEditAutoAdjustmentCell *_autoEnhanceCell;
    PXUISnappingController *_snappingController;
}


@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) PUAdjustmentsViewFlowLayout *collectionViewLayout; // ivar: _collectionViewLayout
@property (nonatomic) CGSize controlSize; // ivar: _controlSize
@property (weak, nonatomic) NSObject<PUAdjustmentsViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAdjustmentViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPerformHapticFeedback; // ivar: _didPerformHapticFeedback
@property (nonatomic) BOOL didSetupControls; // ivar: _didSetupControls
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAnimatingScroll; // ivar: _isAnimatingScroll
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly, nonatomic) PUAdjustmentInfo *selectedAdjustmentInfo; // ivar: _selectedAdjustmentInfo
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (retain, nonatomic) PUSelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (nonatomic) BOOL shouldDisplayControlValues; // ivar: _shouldDisplayControlValues
@property (nonatomic) BOOL shouldDisplayMappedValues; // ivar: _shouldDisplayMappedValues
@property (retain, nonatomic) CEKSlider *slider; // ivar: _slider
@property (readonly) Class superclass;


-(BOOL)canToggleCell:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSInteger)preferredUserInterfaceStyle;
-(id)_backgroundImageForItemAtIndexPath:(id)arg0 ;
-(id)_circularImageWithSize:(struct CGSize )arg0 color:(id)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_performFeedbackIfNeeded;
-(void)_resetControlsAtIndexPath:(id)arg0 ;
-(void)_setupCellBackgroundImagesIfNeeded;
-(void)_updateCell:(id)arg0 withInfo:(id)arg1 ;
-(void)_updateCollectionViewLayoutDirection:(NSInteger)arg0 ;
-(void)_updateSelectedInfo;
-(void)_updateSliderForControlAtIndexPath:(id)arg0 ;
-(void)_updateViewLayout;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)decreaseAdjustmentValue:(BOOL)arg0 ;
-(void)didToggleCell:(id)arg0 ;
-(void)increaseAdjustmentValue:(BOOL)arg0 ;
-(void)resetControls;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)slider:(id)arg0 willUpdateValue:(*CGFloat)arg1 withVelocity:(CGFloat)arg2 ;
-(void)sliderDidEndScrolling:(id)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)sliderWillBeginScrolling:(id)arg0 ;
-(void)sliderWillEndScrolling:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)toggleAutoEnhance;
-(void)updateControls;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif