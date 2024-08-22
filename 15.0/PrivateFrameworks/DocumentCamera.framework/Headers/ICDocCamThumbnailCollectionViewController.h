// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMTHUMBNAILCOLLECTIONVIEWCONTROLLER_H
#define ICDOCCAMTHUMBNAILCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString, NSMutableArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate, ICDocCamThumbnailViewDelegate;


#import "ICDocCamImageCache.h"
#import "ICDocCamThumbnailCollectionViewLayout.h"

@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, ICDocCamThumbnailViewLayoutDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ICDocCamThumbnailViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *documentInfoArray; // ivar: _documentInfoArray
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) ICDocCamImageCache *imageCache; // ivar: _imageCache
@property (nonatomic) BOOL isPerformingBatchUpdates; // ivar: _isPerformingBatchUpdates
@property (retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout; // ivar: _layout
@property (nonatomic) BOOL needReloadAfterBatchUpdates; // ivar: _needReloadAfterBatchUpdates
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)rootView;
-(struct CGRect )targetViewRect;
-(struct CGSize )collectionView:(id)arg0 imageSizeAtIndex:(NSInteger)arg1 ;
-(void)addNewDocument:(id)arg0 completionBlock:(id)arg1 ;
-(void)animateLayoutChange;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)reloadDataForCollectionView;
-(void)setImageWithUUID:(id)arg0 forCell:(id)arg1 useResizedImage:(BOOL)arg2 ;
-(void)update;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif