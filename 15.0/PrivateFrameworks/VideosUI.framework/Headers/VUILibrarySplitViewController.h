// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYSPLITVIEWCONTROLLER_H
#define VUILIBRARYSPLITVIEWCONTROLLER_H

@class UISplitViewController, NSString, UINavigationController, UIViewController, NSMutableDictionary;
@protocol VUIMenuCollectionViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol, VUILibrarySplitViewControllerDelegate;


#import "VUILibraryAlertView.h"
#import "VUIMenuDataSource.h"
#import "VUIMediaLibrary.h"
#import "VUIFamilyMember.h"
#import "VUILibraryMenuDataSource.h"
#import "VUIMenuCollectionViewController.h"

@interface VUILibrarySplitViewController : UISplitViewController <VUIMenuCollectionViewControllerDelegate, VUILibraryGridCollectionViewControllerDelegate, VUIHomeShareViewControllerDelegate, UISplitViewControllerDelegate, VUIFamilyMembersViewControllerDelegate, VUIFamilySharingContentProtocol>



@property (retain, nonatomic) VUILibraryAlertView *alertView; // ivar: _alertView
@property (retain, nonatomic) VUIMenuDataSource *categories; // ivar: _categories
@property (retain, nonatomic) VUIMediaLibrary *currentHomeShareMediaLibrary; // ivar: _currentHomeShareMediaLibrary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationController *detailNavigationController; // ivar: _detailNavigationController
@property (retain, nonatomic) UIViewController *detailViewController; // ivar: _detailViewController
@property (retain, nonatomic) NSMutableDictionary *entitiesDataSourceForMenuItem; // ivar: _entitiesDataSourceForMenuItem
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<VUILibrarySplitViewControllerDelegate> *librarySplitViewControllerDelegate; // ivar: _librarySplitViewControllerDelegate
@property (retain, nonatomic) UINavigationController *masterNavigationController; // ivar: _masterNavigationController
@property (retain, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource; // ivar: _menuDataSource
@property (retain, nonatomic) VUIMenuCollectionViewController *menuViewController; // ivar: _menuViewController
@property (readonly) Class superclass;


-(BOOL)_shouldLeftBarButton;
-(BOOL)vui_ppt_isLoading;
-(id)_deviceMediaLibrary;
-(id)_downloadViewController;
-(id)_entitiesDataSourceForCategoryType:(NSInteger)arg0 ;
-(id)_entitiesDataSourceForGenre:(id)arg0 ;
-(id)_viewControllerForIndexPath:(id)arg0 ;
-(id)initWithMenuDataSource:(id)arg0 ;
-(void)_addMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_homeShareMediaLibrariesDidChange:(id)arg0 ;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_setMenuControllerPrimaryOnlyMode;
-(void)categoryMenuViewControllerShouldDismiss:(id)arg0 ;
-(void)dealloc;
-(void)didSelectMenuItemAtIndexPath:(id)arg0 ;
-(void)familyMemberViewController:(id)arg0 didSelectFamilyMember:(id)arg1 ;
-(void)fetchDidCompleteForDataSource:(id)arg0 ;
-(void)gridCollectionViewController:(id)arg0 didSelectMediaEntity:(id)arg1 ;
-(void)homeShareViewController:(id)arg0 didSelectHomeShare:(id)arg1 ;
-(void)homeShareViewController:(id)arg0 didUpdateWith:(id)arg1 ;
-(void)menuCollectionViewControllerDidFinishLoading;
-(void)setPageMetricsForCategory:(id)arg0 onLibraryGridCollectionViewController:(id)arg1 ;
-(void)showDetailViewController:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif