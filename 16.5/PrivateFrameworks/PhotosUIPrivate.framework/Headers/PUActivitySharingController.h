// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACTIVITYSHARINGCONTROLLER_H
#define PUACTIVITYSHARINGCONTROLLER_H

@class NSArray, UIActivityViewController<PXActivityViewController>, NSDictionary, PHAsset, NSString, PHPerson, PHResourceLocalAvailabilityRequest, PXSelectionSnapshot;
@protocol PUActivityViewControllerDelegate, UIActivityViewControllerAirDropDelegate, PUCarouselSharingViewControllerDelegate, UIPresentationControllerDelegatePrivate, PXChangeObserver, PXActivitySharingController, PXActivitySharingControllerDelegate;

#import <Foundation/Foundation.h>

#import "PUCarouselSharingViewController.h"
#import "PUActivityViewController.h"
#import "PUActivitySharingViewModel.h"

@interface PUActivitySharingController : NSObject <PUActivityViewControllerDelegate, UIActivityViewControllerAirDropDelegate, PUCarouselSharingViewControllerDelegate, UIPresentationControllerDelegatePrivate, PXChangeObserver, PXActivitySharingController>

 {
    BOOL _activityViewControllerWasCreated;
}


@property (copy, nonatomic) NSArray *activities; // ivar: _activities
@property (readonly, nonatomic) UIActivityViewController<PXActivityViewController> *activityViewController;
@property (nonatomic) BOOL allowsAirPlayActivity; // ivar: _allowsAirPlayActivity
@property (nonatomic) BOOL allowsRemoveFromFeaturedPhotosActivity; // ivar: _allowsRemoveFromFeaturedPhotosActivity
@property (nonatomic) BOOL allowsSuggestLessPersonActivity; // ivar: _allowsSuggestLessPersonActivity
@property (copy, nonatomic) NSDictionary *assetsFetchResultsByAssetCollection; // ivar: _assetsFetchResultsByAssetCollection
@property (retain, nonatomic) PUCarouselSharingViewController *carouselViewController; // ivar: _carouselViewController
@property (readonly, nonatomic) PHAsset *currentAsset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXActivitySharingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL excludeShareActivity; // ivar: _excludeShareActivity
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PUActivityViewController *internalActivityViewController; // ivar: _internalActivityViewController
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (retain, nonatomic) PHResourceLocalAvailabilityRequest *resourcesPreheatRequest; // ivar: _resourcesPreheatRequest
@property (readonly, nonatomic) NSArray *selectedAssets;
@property (readonly, nonatomic) NSDictionary *selectedAssetsByAssetCollection;
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (readonly) Class superclass;
@property (retain, nonatomic) PUActivitySharingViewModel *viewModel; // ivar: _viewModel


-(BOOL)activityViewControllerShouldCancelAfterPreparationCanceled:(id)arg0 ;
-(id)_createActivityViewControllerWithActivities:(id)arg0 ;
-(id)init;
-(id)initWithActivitySharingConfiguration:(id)arg0 ;
-(id)new;
-(id)photosDataSource;
-(void)_activitySharingControllerWillDismissActivityViewController;
-(void)_activityViewControllerDidCompleteWithActivityType:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_cancel;
-(void)_cancelPreheatResourcesRequest;
-(void)_createCarouselSharingViewControllerIfNeeded;
-(void)_handlePreheatRequestCompletionWithSuccess:(BOOL)arg0 cancelled:(BOOL)arg1 error:(id)arg2 ;
-(void)_incrementShareCountForSelectedAssets;
-(void)_preheatResources;
-(void)_updateActionSheetPresentationStyleIfNeeded;
-(void)_updateExcludedActivityTypes;
-(void)_updatePreheatResourcesRequest;
-(void)_updateSelectedAssetIdentifiers;
-(void)activityViewControllerDidFinishAirdropTransfer:(id)arg0 ;
-(void)activityViewControllerWillDisappear:(id)arg0 ;
-(void)carouselSharingViewController:(id)arg0 addAssetItem:(id)arg1 ;
-(void)carouselSharingViewController:(id)arg0 removeAssetItem:(id)arg1 ;
-(void)carouselSharingViewController:(id)arg0 replaceAssetItem:(id)arg1 withAssetItem:(id)arg2 ;
-(void)carouselSharingViewController:(id)arg0 setAssetItems:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)selectAllAssets;


@end


#endif