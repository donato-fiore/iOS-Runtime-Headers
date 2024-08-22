// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDCOLLECTIONVIEWCONTROLLER_H
#define GKDASHBOARDCOLLECTIONVIEWCONTROLLER_H

@class UIView, UICollectionView, NSString, NSLayoutConstraint, NSMutableIndexSet;
@protocol NSPopoverDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate;


#import "GKLoadingViewController.h"
#import "GKCollectionDataSource.h"
#import "GKNoContentView.h"

@interface GKDashboardCollectionViewController : GKLoadingViewController <NSPopoverDelegate, UIAdaptivePresentationControllerDelegate, UICollectionViewDataSource, UICollectionViewDelegate>



@property (nonatomic) BOOL autoWidthUsesTwoColumnsWhenSpace; // ivar: _autoWidthUsesTwoColumnsWhenSpace
@property (weak, nonatomic) UIView *collectionContainerView; // ivar: _collectionContainerView
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (nonatomic) UIEdgeInsets contentInsetsBeforeKeyboard; // ivar: _contentInsetsBeforeKeyboard
@property (retain, nonatomic) GKCollectionDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLoading;
@property (weak, nonatomic) UIView *keyboardAdjustedView; // ivar: _keyboardAdjustedView
@property (weak, nonatomic) NSLayoutConstraint *keyboardConstraint; // ivar: _keyboardConstraint
@property (nonatomic) CGFloat keyboardConstraintDefaultConstant; // ivar: _keyboardConstraintDefaultConstant
@property (retain, nonatomic) GKNoContentView *noContentView; // ivar: _noContentView
@property (nonatomic) UIEdgeInsets scrollInsetsBeforeKeyboard; // ivar: _scrollInsetsBeforeKeyboard
@property (retain, nonatomic) NSMutableIndexSet *sectionsToReload; // ivar: _sectionsToReload
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 canFocusItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)hasData;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)horizontalCollectionViewLayout;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)verticalCollectionViewLayout;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)clearSelection;
-(void)clearSelectionForCollectionView:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didFocusItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUnfocusItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)createCollectionViewInsideView:(id)arg0 ;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)hideNoContentPlaceholder;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadData;
-(void)loadView;
-(void)popoverDidClose:(id)arg0 ;
-(void)prepareForAutomaticTwoColumnLayout;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)setAutoWidthColumns:(NSInteger)arg0 ;
-(void)setNeedsRefresh;
-(void)setToHorizontalLayout:(BOOL)arg0 ;
-(void)setupDataSource;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)setupVisualEffect;
-(void)showNoContentPlaceholderForError:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)windowDidEndSheet:(id)arg0 ;


@end


#endif