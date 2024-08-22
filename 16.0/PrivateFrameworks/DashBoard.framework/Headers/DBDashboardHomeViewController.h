// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDHOMEVIEWCONTROLLER_H
#define DBDASHBOARDHOMEVIEWCONTROLLER_H

@class UIViewController, FBSALOToken, NSMutableSet, NSArray, FBSApplicationDataStoreMonitor, NSString, UIView, NSIndexPath, FBSApplicationLibrary, CARObserverHashTable;
@protocol DBIconBadgeControllerObserving, DBIconModelApplicationDataSource, FBSApplicationDataStoreObserver, FBSceneManagerObserver, SBHIconManagerDelegate, SBRootFolderControllerDelegate, UNNotificationSettingsCenterDelegate, BSInvalidatable, CRSIconLayoutVehicleDataProviding, DBEventHandling, DBIconProviding, DBEnvironment;


#import "DBIconBadgeController.h"
#import "DBIconImageCache.h"
#import "DBIconManager.h"
#import "DBIconModel.h"
#import "DBNowPlayingObserver.h"
#import "DBTodayViewController.h"

@interface DBDashboardHomeViewController : UIViewController <DBIconBadgeControllerObserving, DBIconModelApplicationDataSource, FBSApplicationDataStoreObserver, FBSceneManagerObserver, SBHIconManagerDelegate, SBRootFolderControllerDelegate, UNNotificationSettingsCenterDelegate, BSInvalidatable, CRSIconLayoutVehicleDataProviding, DBEventHandling, DBIconProviding>

 {
    FBSALOToken *_installToken;
    FBSALOToken *_uninstallToken;
    FBSALOToken *_replaceToken;
    FBSALOToken *_addPlaceholderToken;
    FBSALOToken *_cancelPlaceholderToken;
}


@property (retain, nonatomic) NSMutableSet *acBackDisabledReasons; // ivar: _acBackDisabledReasons
@property (readonly, copy, nonatomic) NSArray *allApplicationIcons;
@property (nonatomic) NSUInteger currentPageIndex; // ivar: _currentPageIndex
@property (retain, nonatomic) FBSApplicationDataStoreMonitor *dataStoreMonitor; // ivar: _dataStoreMonitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly, nonatomic) UIView *hairlineView; // ivar: _hairlineView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) DBIconBadgeController *iconBadgeController; // ivar: _iconBadgeController
@property (retain, nonatomic) DBIconImageCache *iconImageCache; // ivar: _iconImageCache
@property (retain, nonatomic) DBIconManager *iconManager; // ivar: _iconManager
@property (retain, nonatomic) DBIconModel *iconModel; // ivar: _iconModel
@property (retain, nonatomic) NSIndexPath *lastFocusedIndex; // ivar: _lastFocusedIndex
@property (retain, nonatomic) FBSApplicationLibrary *library; // ivar: _library
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver; // ivar: _nowPlayingObserver
@property (retain, nonatomic) CARObserverHashTable *pageObservers; // ivar: _pageObservers
@property (readonly) Class superclass;
@property (retain, nonatomic) DBTodayViewController *todayViewController; // ivar: _todayViewController


-(BOOL)_isACBackEnabled;
-(BOOL)_onDashboardPage;
-(BOOL)folderController:(id)arg0 canChangeCurrentPageIndexToIndex:(NSInteger)arg1 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 canHandleIconDropSession:(id)arg2 ;
-(BOOL)folderController:(id)arg0 iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3 ;
-(BOOL)folderControllerShouldClose:(id)arg0 withPinchGesture:(id)arg1 ;
-(BOOL)iconCanDisplayBadge:(id)arg0 ;
-(BOOL)iconManager:(id)arg0 allowsBadgingForIcon:(id)arg1 ;
-(BOOL)iconManagerCanBeginIconDrags:(id)arg0 ;
-(BOOL)isEditingAllowedForIconManager:(id)arg0 ;
-(BOOL)isIconVisible:(id)arg0 ;
-(BOOL)isIconVisibleForIdentifier:(id)arg0 ;
-(Class)controllerClassForFolder:(id)arg0 ;
-(Class)iconManager:(id)arg0 folderControllerClassForFolderClass:(Class)arg1 proposedClass:(Class)arg2 ;
-(NSInteger)interfaceOrientationForIconManager:(id)arg0 ;
-(id)_iconViewForIndexpath:(id)arg0 ;
-(id)_indexPathForFallbackIcon:(BOOL)arg0 ;
-(id)_linearFocusMovementSequences;
-(id)_preferredFocusedIcon;
-(id)defaultIconStateForIconManager:(id)arg0 ;
-(id)folderController;
-(id)folderController:(id)arg0 iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2 ;
-(id)folderController:(id)arg0 iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3 ;
-(id)iconForIdentifier:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)preferredFocusEnvironments;
-(id)visibleIconViewForIdentifier:(id)arg0 ;
-(void)_backButtonTapped:(id)arg0 ;
-(void)_handleAppLibraryRefresh;
-(void)_handleBackActionSupportACBack:(BOOL)arg0 ;
-(void)_invalidateBadgeForIdentifier:(id)arg0 ;
-(void)_launchNowPlaying;
-(void)_persistCachedIconImages;
-(void)_setACBackDisabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)_setupIconModel;
-(void)_wheelChangedWithEvent:(id)arg0 ;
-(void)addPageChangeObserver:(id)arg0 ;
-(void)dataStoreMonitor:(id)arg0 didUpdateApplication:(id)arg1 forKey:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)folderController:(id)arg0 draggedIconShouldDropFromListView:(id)arg1 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint )arg3 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 performIconDrop:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2 ;
-(void)folderController:(id)arg0 iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3 ;
-(void)folderControllerDidEndScrolling:(id)arg0 ;
-(void)folderControllerShouldBeginEditing:(id)arg0 withHaptic:(BOOL)arg1 ;
-(void)folderControllerShouldEndEditing:(id)arg0 ;
-(void)folderControllerWillBeginScrolling:(id)arg0 ;
-(void)getApplicationIconInformationForBundleID:(id)arg0 completion:(id)arg1 ;
-(void)getIconStateWithCompletion:(id)arg0 ;
-(void)handleEvent:(id)arg0 ;
-(void)iconBadgeController:(id)arg0 didUpdateForIdentifiers:(id)arg1 ;
-(void)iconManager:(id)arg0 configureIconView:(id)arg1 forIcon:(id)arg2 ;
-(void)iconManager:(id)arg0 launchIconForIconView:(id)arg1 ;
-(void)iconManager:(id)arg0 willUseRootFolderControllerConfiguration:(id)arg1 ;
-(void)invalidate;
-(void)loadView;
-(void)removePageChangeObserver:(id)arg0 ;
-(void)resetIconState;
-(void)setIconState:(id)arg0 ;
-(void)setTodayViewActive:(BOOL)arg0 ;
-(void)setTodayViewForeground:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif