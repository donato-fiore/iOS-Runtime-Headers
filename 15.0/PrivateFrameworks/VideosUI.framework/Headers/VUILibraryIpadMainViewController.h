// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUILIBRARYIPADMAINVIEWCONTROLLER_H
#define VUILIBRARYIPADMAINVIEWCONTROLLER_H

@class UIViewController, NSString, UINavigationController;
@protocol VUILibraryDataSourceDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate, VUIFamilySharingContentProtocol;


#import "VUIViewControllerContentPresenter.h"
#import "VUIFamilyMember.h"
#import "VUILibrarySplitViewController.h"
#import "VUIMediaLibrary.h"
#import "VUILibraryMenuDataSource.h"

@interface VUILibraryIpadMainViewController : UIViewController <VUILibraryDataSourceDelegate, VUILibrarySplitViewControllerDelegate, UIGestureRecognizerDelegate, VUIFamilySharingContentProtocol>

 {
    BOOL _ppt_isLoaded;
}


@property (nonatomic) BOOL areLocalMediaItemsAvailable; // ivar: _areLocalMediaItemsAvailable
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UINavigationController *downloadNavigationViewController; // ivar: _downloadNavigationViewController
@property (retain, nonatomic) UIViewController *downloadViewController; // ivar: _downloadViewController
@property (retain, nonatomic) VUIFamilyMember *familyMember; // ivar: _familyMember
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUILibrarySplitViewController *librarySplitViewController; // ivar: _librarySplitViewController
@property (nonatomic) BOOL makeNavigationBarHidden; // ivar: _makeNavigationBarHidden
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) VUILibraryMenuDataSource *menuDataSource; // ivar: _menuDataSource
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewIsOrWillBeVisible; // ivar: _viewIsOrWillBeVisible


-(BOOL)_gestureRecognizerShouldBegin;
-(BOOL)_isDeviceMediaLibraryInitialUpdateInProgress;
-(BOOL)_shouldShowSplitViewWithCategories:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)vui_ppt_isLoading;
-(id)_deviceMediaLibrary;
-(id)initWithMenuDataSource:(id)arg0 ;
-(void)_accountsChanged:(id)arg0 ;
-(void)_addMediaLibraryNotificationObservers;
-(void)_addNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_declareLaunchDidFinish;
-(void)_deviceMediaLibraryUpdateStateDidChange:(id)arg0 ;
-(void)_networkReachabilityDidChange:(id)arg0 ;
-(void)_removeMediaLibraryNotificationObservers;
-(void)_removeNotificationObserversWithDeviceLibrary:(id)arg0 ;
-(void)_setupDownloadViewController;
-(void)_startMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_stopMonitoringDeviceMediaLibraryInitialUpdate;
-(void)_updateVisibleViewControllerForCategories:(id)arg0 error:(id)arg1 ;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)dealloc;
-(void)librarySplitViewControllerShouldDismiss:(id)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif