// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYPRODUCTVIEWCONTROLLER_H
#define VUILIBRARYPRODUCTVIEWCONTROLLER_H

@class NSString;
@protocol UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate;


#import "VUILibraryStackViewController.h"
#import "VUIMediaItem.h"
#import "VUIProductLockupView.h"
#import "VUILibraryProductInfoView.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIDownloadButton.h"

@interface VUILibraryProductViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUIProductLockupViewDelegate, VUIRoundButtonDelegate>

 {
    VUIMediaItem *_mediaItem;
    VUIProductLockupView *_productLockupView;
    VUILibraryProductInfoView *_productInfoView;
}


@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIDownloadButton *downloadButton; // ivar: _downloadButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_productInfoViewWithMediaItem:(id)arg0 ;
-(id)_productLockupViewWithMediaItem:(id)arg0 ;
-(id)_productSectionForHeader:(id)arg0 data:(id)arg1 group:(id)arg2 maxItemCount:(NSUInteger)arg3 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_updateAfterContentWasManuallyDeleted:(BOOL)arg0 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)contentDescriptionExpanded;
-(void)didSelectButton:(id)arg0 ;
-(void)loadView;
-(void)reportMetricsPageEvent;
-(void)start;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif