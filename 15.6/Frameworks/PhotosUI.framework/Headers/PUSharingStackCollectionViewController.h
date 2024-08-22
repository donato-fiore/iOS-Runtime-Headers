// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSHARINGSTACKCOLLECTIONVIEWCONTROLLER_H
#define PUSHARINGSTACKCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSArray, NSString, NSMutableDictionary;
@protocol PUSharingStackCollectionViewLayoutDelegate, PUSharingStackCollectionViewControllerDataSource, PXUIImageProvider;


#import "PUSharingStackCollectionViewLayout.h"

@interface PUSharingStackCollectionViewController : UICollectionViewController <PUSharingStackCollectionViewLayoutDelegate>



@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (nonatomic) NSInteger currentRotationDirection; // ivar: _currentRotationDirection
@property (nonatomic) NSInteger currentVerticalAdjustmentDirection; // ivar: _currentVerticalAdjustmentDirection
@property (weak, nonatomic) NSObject<PUSharingStackCollectionViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PXUIImageProvider> *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) NSMutableDictionary *layoutItemsByAssets; // ivar: _layoutItemsByAssets
@property (nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (nonatomic) NSUInteger numberOfItems; // ivar: _numberOfItems
@property (readonly, nonatomic) PUSharingStackCollectionViewLayout *stackLayout; // ivar: _stackLayout
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_layoutItemInputForAsset:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionViewLayout:(id)arg0 ;
-(id)initWithImageProvider:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)sharingStackCollectionViewLayout:(id)arg0 layoutItemForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )_sizeForAsset:(id)arg0 ;
-(void)_updateCell:(id)arg0 forItemAtIndexPath:(id)arg1 ;
-(void)_updatePhotoForAsset:(id)arg0 cell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateContent;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif