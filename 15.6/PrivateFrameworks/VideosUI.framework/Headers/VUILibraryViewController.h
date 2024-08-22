// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUILIBRARYVIEWCONTROLLER_H
#define VUILIBRARYVIEWCONTROLLER_H

@class NSString, NSArray, UIBarButtonItem, NSMutableArray;
@protocol UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, UIGestureRecognizerDelegate, VUIShelvesDataSourceDelegate, VUILibraryDataSourceDelegate, VUIMenuCollectionViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol;


#import "VUILibraryStackViewController.h"
#import "VUILibraryBannerCollectionViewCell.h"
#import "VUIViewControllerContentPresenter.h"
#import "VUIMediaLibrary.h"
#import "_VUILibrarySeeAllController.h"
#import "VUIFamilyMember.h"
#import "VUILibraryMenuDataSource.h"
#import "VUILibraryMenuItemViewCell.h"
#import "VUIDownloadTableViewController.h"
#import "VUILibraryShelvesDataSource.h"

@interface VUILibraryViewController : VUILibraryStackViewController <UICollectionViewDataSource, VUILibraryShelfCollectionViewControllerDelegate, UIGestureRecognizerDelegate, VUIShelvesDataSourceDelegate, VUILibraryDataSourceDelegate, VUIMenuCollectionViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol>

 {
    BOOL _ppt_isLoaded;
}


@property (retain, nonatomic) VUILibraryBannerCollectionViewCell *bannerViewSizingCell; // ivar: _bannerViewSizingCell
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary; // ivar: _currentHomeShareMediaLibrary
@property (nonatomic) NSInteger currentLibraryCategory; // ivar: _currentLibraryCategory
@property (nonatomic) BOOL currentLibraryCategoryIsFromShelf; // ivar: _currentLibraryCategoryIsFromShelf
@property (nonatomic) BOOL currentLibraryCategoryIsValid; // ivar: _currentLibraryCategoryIsValid
@property (retain, nonatomic) _VUILibrarySeeAllController *currentSeeAllController; // ivar: _currentSeeAllController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doesDeviceSupportHDR; // ivar: _doesDeviceSupportHDR
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (nonatomic) BOOL hasMediaEntitiesFetchCompleted; // ivar: _hasMediaEntitiesFetchCompleted
@property (nonatomic) BOOL hasMenuItemFetchCompleted; // ivar: _hasMenuItemFetchCompleted
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *homeShares; // ivar: _homeShares
@property (nonatomic) BOOL isPresentingDownloads; // ivar: _isPresentingDownloads
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton; // ivar: _libraryBarButton
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) NSArray *menuCells; // ivar: _menuCells
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource; // ivar: _menuDataSource
@property (retain, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // ivar: _menuItemSizingCell
@property (retain, nonatomic) VUIDownloadTableViewController *presentedDownloadViewController; // ivar: _presentedDownloadViewController
@property (retain, nonatomic) NSMutableArray *shelves; // ivar: _shelves
@property (retain, nonatomic) VUILibraryShelvesDataSource *shelvesDataSource; // ivar: _shelvesDataSource
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableArray *validShelfTypes; // ivar: _validShelfTypes
@property (nonatomic) BOOL viewHasAppearedAtLeastOnce; // ivar: _viewHasAppearedAtLeastOnce


+(id)_localizedTitleForShelfType:(NSInteger)arg0 ;
+(id)shelfTypesSortComparator:(SEL)arg0 ;
-(*NSInteger)_categoryForCellType:(NSInteger)arg0 ;
-(BOOL)_downloadsAreAvailable;
-(BOOL)_gestureRecognizerShouldBegin;
-(BOOL)_haveAllInitialFetchesCompleted;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(BOOL)_shouldShowContentView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)vui_ppt_isLoading;
-(NSInteger)_categoryForShelfType:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_dataSourceForShelves;
-(id)_deviceMediaLibrary;
-(id)_downloadViewController;
-(id)_localizedTitleForCellType:(NSInteger)arg0 ;
-(id)_menuItems;
-(id)_navigationBarTitle;
-(id)_viewControllerWithCellType:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithMenuDataSource:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_addMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_configureShelfViewController:(id)arg0 withShelfType:(NSInteger)arg1 ;
-(void)_constructLibraryDataSourceAndUpdateActiveView;
-(void)_constructShelves;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg0 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg0 ;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_presentDownloadViewController;
-(void)_removeDownloadViewController;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_resetNavigationBar;
-(void)_selectLibraryCellType:(NSInteger)arg0 ;
-(void)_showContentOrNoContentView;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_updateNavigationTitle;
-(void)_updateViewIfFetchComplete;
-(void)_updateVisibleCellSeparators;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureWithCollectionView:(id)arg0 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)didSelectMenuItemAtIndexPath:(id)arg0 ;
-(void)familyMemberViewController:(id)arg0 didSelectFamilyMember:(id)arg1 ;
-(void)loadView;
-(void)seeAllButtonPressed:(id)arg0 ;
-(void)shelfCollectionViewController:(id)arg0 collectionView:(id)arg1 didSelectMediaEntity:(id)arg2 atIndexPath:(id)arg3 ;
-(void)shelvesDidFinishWithDataSource:(id)arg0 ;
-(void)start;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif