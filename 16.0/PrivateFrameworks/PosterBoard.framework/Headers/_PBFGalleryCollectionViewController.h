// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PBFGALLERYCOLLECTIONVIEWCONTROLLER_H
#define _PBFGALLERYCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, UICollectionViewDiffableDataSource, NSString;
@protocol PBFPosterGalleryDataProviderObserver, PBFPosterPreviewGenerator;


#import "PBFPosterGalleryDataProvider.h"
#import "PBFPosterGalleryPreviewViewController.h"

@interface _PBFGalleryCollectionViewController : UICollectionViewController <PBFPosterGalleryDataProviderObserver, PBFPosterPreviewGenerator>

 {
    UICollectionViewDiffableDataSource *_diffableDataSource;
    id<PBFPosterPreviewGenerator> *_posterPreviewGenerator;
}


@property (retain, nonatomic) PBFPosterGalleryDataProvider *dataProvider; // ivar: _dataProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PBFPosterGalleryPreviewViewController *galleryViewController; // ivar: _galleryViewController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)posterPreviewGenerator;
-(id)preparedComplicationPreviewImagesForPreview:(id)arg0 ;
-(id)preparedSnapshotForPosterPreview:(id)arg0 ;
-(struct CGRect )previewFrameForScrollingPreviewWithIdentifierToVisible:(id)arg0 ;
-(void)_applySnapshotFromDataProvider:(id)arg0 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg0 forCollectionView:(id)arg1 posterPreview:(id)arg2 ;
-(void)dataProviderDidUpdate:(id)arg0 ;
-(void)dataProviderWillUpdate:(id)arg0 ;
// -(void)fetchComplicationPreviewImagesForPreview:(id)arg0 complicationSnapshotReceivedHandler:(id)arg1 errorHandler:(unk)arg2 completion:(id)arg3  ;
-(void)fetchSnapshotForPosterPreview:(id)arg0 completion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif