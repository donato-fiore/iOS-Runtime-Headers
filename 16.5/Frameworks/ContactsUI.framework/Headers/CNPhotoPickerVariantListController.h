// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPHOTOPICKERVARIANTLISTCONTROLLER_H
#define CNPHOTOPICKERVARIANTLISTCONTROLLER_H

@class UIViewController, UICollectionView, NSString, UIView, UIImageView, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CNPhotoPickerProviderItemDelegate, CNPhotoPickerVariantListControllerDelegate;


#import "CNPhotoPickerProviderItem.h"
#import "CNPhotoPickerPreviewView.h"
#import "CNPhotoPickerVariantsManager.h"

@interface CNPhotoPickerVariantListController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CNPhotoPickerProviderItemDelegate>



@property (nonatomic) NSUInteger cellStyle; // ivar: _cellStyle
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) BOOL commitsChangesOnSelection; // ivar: _commitsChangesOnSelection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNPhotoPickerVariantListControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (copy, nonatomic) id *numberOfItemsPerRowProvider; // ivar: _numberOfItemsPerRowProvider
@property (readonly, nonatomic) CNPhotoPickerProviderItem *originalItem; // ivar: _originalItem
@property (retain, nonatomic) CNPhotoPickerPreviewView *posePreview; // ivar: _posePreview
@property (retain, nonatomic) UIImageView *previewImageView; // ivar: _previewImageView
@property (retain, nonatomic) NSArray *providerItems; // ivar: _providerItems
@property (nonatomic) NSString *rightBarButtonTitle; // ivar: _rightBarButtonTitle
@property (retain, nonatomic) UIView *sectionHeaderView; // ivar: _sectionHeaderView
@property (retain, nonatomic) NSString *selectedVariantIdentifier; // ivar: _selectedVariantIdentifier
@property (nonatomic) BOOL shouldShowCaptions; // ivar: _shouldShowCaptions
@property (nonatomic) BOOL showPreview; // ivar: _showPreview
@property (nonatomic) BOOL showsSelection; // ivar: _showsSelection
@property (nonatomic) BOOL showsToolbar; // ivar: _showsToolbar
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *variantsDisplayTitle;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // ivar: _variantsManager


+(NSInteger)topMarginForBounds:(struct CGRect )arg0 shouldShowCaptions:(BOOL)arg1 ;
+(struct CGRect )frameForHeaderInBounds:(struct CGRect )arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithVariantsManager:(id)arg0 originalItem:(id)arg1 ;
-(id)initWithVariantsManager:(id)arg0 originalItem:(id)arg1 selectedVariantIdentifier:(id)arg2 ;
-(id)scrollView;
-(void)buildCollectionView;
-(void)buildHeader;
-(void)cancel:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)didFinishSelectingVariant;
-(void)generateProviderItems;
-(void)providerItemDidUpdate:(id)arg0 ;
-(void)updateFlowLayoutItemSize;
-(void)updateForNewOriginalItem:(id)arg0 ;
-(void)updatePreviewWithItem:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif