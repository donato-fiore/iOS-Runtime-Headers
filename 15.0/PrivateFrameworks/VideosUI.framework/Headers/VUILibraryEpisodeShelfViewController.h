// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYEPISODESHELFVIEWCONTROLLER_H
#define VUILIBRARYEPISODESHELFVIEWCONTROLLER_H

@class NSString, UICollectionViewDiffableDataSource, NSArray, NSIndexPath;
@protocol UICollectionViewDelegate, TVShelfViewLayoutDelegate, VUIEpisodeDetailViewControllerDelegate, VUIDialogInteractionControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate, VUILibraryEpisodeShelfViewControllerDelegate;


#import "VUIShelfViewController.h"
#import "VUILibraryEpisodeListCell.h"
#import "VUIDialogInteractionController.h"
#import "VUIEpisodeDetailViewController.h"

@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate, VUIEpisodeDetailViewControllerDelegate, VUIDialogInteractionControllerDelegate, VUILibraryDownloadPopoverViewControllerDelegate>

 {
    VUILibraryEpisodeListCell *_sizingCell;
    VUIDialogInteractionController *_dialogInteractionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VUILibraryEpisodeShelfViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) VUIEpisodeDetailViewController *episodeDetailViewController; // ivar: _episodeDetailViewController
@property (copy, nonatomic) NSArray *episodeViewModels; // ivar: _episodeViewModels
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSIndexPath *popoverIndexPath; // ivar: _popoverIndexPath
@property (nonatomic) BOOL shouldIgnoreSelectEvent; // ivar: _shouldIgnoreSelectEvent
@property (readonly) Class superclass;


-(BOOL)_canRemoveEpisodeAtIndexPath:(id)arg0 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)dialogInteractionController:(id)arg0 shouldBeginInteractionForIndexPath:(id)arg1 ;
-(id)_createDiffableDataSourceForCollectionView:(id)arg0 ;
-(id)_createDiffableDataSourceSnapshot;
-(id)_episodeViewModelsWithFetchedEpisodes:(id)arg0 ;
-(id)_episodeWithIdentifier:(id)arg0 ;
-(id)_getEntityIdentifiersFromViewModels;
-(id)initWithEpisodes:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_configureShelfLayout:(id)arg0 ;
-(void)_updateHeaderView;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)dialogInteractionController:(id)arg0 interactionDidBeginForIndexPath:(id)arg1 ;
-(void)dialogInteractionController:(id)arg0 interactionDidEndForIndexPath:(id)arg1 ;
-(void)episodeDetailViewControllerWasDismissed:(id)arg0 ;
-(void)removeDownloadDismissed;
-(void)removeDownloadPressed;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateShelfLayout:(id)arg0 ;
-(void)updateWithEpisodes:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif