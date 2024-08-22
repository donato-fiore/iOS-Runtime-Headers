// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSDSTORESEARCHVIEWCONTROLLER_H
#define MSDSTORESEARCHVIEWCONTROLLER_H

@class UIViewController, UISheetPresentationControllerDetent, NSString, MSDKManagedDevice, UINavigationController, CLLocation;
@protocol UISheetPresentationControllerDelegate, MSDSearchResultViewControllerDelegate, MSDMapViewControllerDelegate, OS_dispatch_queue;


#import "MSDMapViewController.h"
#import "MSDSearchResultViewController.h"
#import "MSDStoreInfo.h"

@interface MSDStoreSearchViewController : UIViewController <UISheetPresentationControllerDelegate, MSDSearchResultViewControllerDelegate, MSDMapViewControllerDelegate>



@property (retain, nonatomic) UISheetPresentationControllerDetent *customDetent; // ivar: _customDetent
@property (retain, nonatomic) NSString *customDetentIdentifier; // ivar: _customDetentIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MSDKManagedDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MSDMapViewController *mapViewController; // ivar: _mapViewController
@property (retain, nonatomic) MSDSearchResultViewController *searchResultViewController; // ivar: _searchResultViewController
@property (retain, nonatomic) MSDStoreInfo *selectedStore; // ivar: _selectedStore
@property (retain, nonatomic) UINavigationController *sheetContentViewController; // ivar: _sheetContentViewController
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // ivar: _updateQueue
@property (retain, nonatomic) CLLocation *userLocation; // ivar: _userLocation


-(BOOL)presentationControllerShouldDismiss:(id)arg0 ;
-(id)_searchStoreWithText:(id)arg0 ;
-(id)init;
-(void)_help:(id)arg0 ;
-(void)_lockSheetDetent;
-(void)_showSheet;
-(void)_unlockSheetDetent;
-(void)_updateViewWithSearchText:(id)arg0 ;
-(void)didAssignStore:(id)arg0 forViewController:(id)arg1 ;
-(void)didDeselectStore:(id)arg0 forViewController:(id)arg1 ;
-(void)didDeselectStores:(id)arg0 forViewController:(id)arg1 ;
-(void)didDismissStoreListView:(id)arg0 forViewController:(id)arg1 ;
-(void)didEnterSearchText:(id)arg0 forViewController:(id)arg1 ;
-(void)didSelectNoStoreForViewController:(id)arg0 ;
-(void)didSelectStore:(id)arg0 forViewController:(id)arg1 ;
-(void)didSelectStores:(id)arg0 forViewController:(id)arg1 ;
-(void)userLocationDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif