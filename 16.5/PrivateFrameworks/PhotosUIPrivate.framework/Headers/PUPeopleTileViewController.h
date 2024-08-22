// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPEOPLETILEVIEWCONTROLLER_H
#define PUPEOPLETILEVIEWCONTROLLER_H

@class PHAsset, UICollectionViewCellRegistration, UICollectionView, NSString, CAGradientLayer, NSArray, PHFetchResult;
@protocol UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, PUPeopleTileDelegate, PHPhotoLibraryChangeObserver;


#import "PUTileViewController.h"

@interface PUPeopleTileViewController : PUTileViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, PUPeopleTileDelegate, PHPhotoLibraryChangeObserver>



@property (retain, nonatomic) PHAsset *asset; // ivar: _asset
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration; // ivar: _cellRegistration
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CAGradientLayer *fadeLayer; // ivar: _fadeLayer
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PUPeopleTileDelegate> *peopleDelegate; // ivar: _peopleDelegate
@property (retain, nonatomic) NSArray *sortedPeople; // ivar: _sortedPeople
@property (readonly) Class superclass;
@property (retain, nonatomic) PHFetchResult *unsortedFetchResult; // ivar: _unsortedFetchResult


+(CGFloat)_interItemSpacingForTraitCollection:(id)arg0 ;
+(id)_fetchUnsortedPeopleForAsset:(id)arg0 ;
+(id)_sortedPersonsForFetchResult:(id)arg0 ;
+(struct CGSize )tileSizeForTraitCollection:(id)arg0 ;
-(BOOL)_compare:(id)arg0 to:(id)arg1 ignoringIndices:(id)arg2 ;
-(CGFloat)collectionView:(id)arg0 layout:(id)arg1 minimumLineSpacingForSectionAtIndex:(NSInteger)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_peopleDidChange:(id)arg0 ;
-(void)_reloadEverythingForAsset:(id)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)presentPeopleViewController:(id)arg0 ;
-(void)pushPeopleViewController:(id)arg0 ;
-(void)setDisplayAsset:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif