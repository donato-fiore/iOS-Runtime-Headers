// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCONTENTSYNDICATIONGADGET_H
#define PXCONTENTSYNDICATIONGADGET_H

@class NSString, NSUserActivity;
@protocol PXChangeObserver, PXContentSyndicationAssetFetchResultProviderChangeObserver, PXContentSyndicationGadgetViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXGadget, PXContentSyndicationAssetFetchResultProvider, PXDisplayAssetFetchResult, PXUIImageProvider, PXContentSyndicationSocialLayerHighlightProvider, PXDisplayAssetCollection, PXContentSyndicationGadgetDelegate, PXDisplayAsset;

#import <Foundation/Foundation.h>

#import "PXContentSyndicationCountsController.h"
#import "PXFooterViewModel.h"
#import "PXImageRequesterHelper.h"
#import "PXContentSyndicationItem.h"
#import "PXGadgetSpec.h"
#import "PXRegionOfInterest.h"
#import "PXContentSyndicationGadgetView.h"
#import "PXContentSyndicationGadgetViewModel.h"

@interface PXContentSyndicationGadget : NSObject <PXChangeObserver, PXContentSyndicationAssetFetchResultProviderChangeObserver, PXContentSyndicationGadgetViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXGadget>

 {
    id<PXContentSyndicationAssetFetchResultProvider> *_keyImagesAssetFetchResultProvider;
    id<PXDisplayAssetFetchResult> *_keyImagesAssetFetchResult;
    id<PXUIImageProvider> *_imageProvider;
    id<PXContentSyndicationSocialLayerHighlightProvider> *_socialLayerHighlightProvider;
    PXContentSyndicationCountsController *_countsController;
    PXFooterViewModel *_gridFooterViewModel;
    PXImageRequesterHelper *_frontImageRequesterHelper;
    PXImageRequesterHelper *_middleImageRequesterHelper;
    PXImageRequesterHelper *_backImageRequesterHelper;
}


@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (copy, nonatomic) NSObject<PXDisplayAssetCollection> *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (retain, nonatomic) PXContentSyndicationItem *contentSyndicationItem; // ivar: _contentSyndicationItem
@property (nonatomic) BOOL contentViewHiddenForOneUpTransition;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXContentSyndicationGadgetDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (copy, nonatomic) NSObject<PXDisplayAssetCollection> *initialAssetCollection; // ivar: _initialAssetCollection
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) NSInteger priority;
@property (copy, nonatomic) NSObject<PXDisplayAsset> *referenceAssetForSocialLayerHighlight; // ivar: _referenceAssetForSocialLayerHighlight
@property (readonly, copy, nonatomic) PXRegionOfInterest *regionOfInterestForOneUpTransition;
@property (retain, nonatomic) NSUserActivity *siriActionActivity; // ivar: _siriActionActivity
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXContentSyndicationGadgetView *view; // ivar: _view
@property (copy, nonatomic) id *viewControllerDismisser; // ivar: _viewControllerDismisser
@property (copy, nonatomic) id *viewControllerPresenter; // ivar: _viewControllerPresenter
@property (readonly, nonatomic) PXContentSyndicationGadgetViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect


-(id)_createActionForType:(id)arg0 image:(id)arg1 attributes:(NSUInteger)arg2 ;
-(id)additionalContextMenuActionsForAttributionViewInContentSyndicationGadgetView:(id)arg0 ;
-(id)contextMenuWithSuggestedActions:(id)arg0 ;
-(id)init;
-(id)initWithAssetFetchResultProvider:(id)arg0 imageProvider:(id)arg1 socialLayerHighlightProvider:(id)arg2 ;
-(id)previewParametersForTargetPreviewView:(id)arg0 ;
-(id)targetPreviewViewForLocation:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_donateUserActivityForAssetCollectionIfNeeded;
-(void)_fetchKeyImages;
-(void)_fileRadar;
-(void)_handleKeyImage:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)_presentDetailViewController;
-(void)_refreshGadgetContents;
-(void)_retrieveAssetCollectionIfNeeded;
-(void)_updateCounts;
-(void)_updateGridFooterViewModel;
-(void)_updateImageRequesterHelper:(id)arg0 withAsset:(id)arg1 ;
-(void)_updateOverlayTitleWithDetailedCounts:(struct ? )arg0 savedCount:(NSInteger)arg1 ;
-(void)assetFetchResultProvider:(id)arg0 didChangeAssetFetchResult:(id)arg1 forAssetCollection:(id)arg2 ;
-(void)commitPreviewView:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareCollectionViewItem:(id)arg0 ;
-(void)presentGridAnimated:(BOOL)arg0 ;
-(void)presentOneUpAnimated:(BOOL)arg0 ;
-(void)socialLayerHighlightProvider:(id)arg0 didChangeSocialLayerHighlight:(id)arg1 forAsset:(id)arg2 ;
-(void)userDidSelectGadget;


@end


#endif