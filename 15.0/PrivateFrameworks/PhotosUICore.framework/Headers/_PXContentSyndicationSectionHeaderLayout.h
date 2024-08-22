// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PXCONTENTSYNDICATIONSECTIONHEADERLAYOUT_H
#define _PXCONTENTSYNDICATIONSECTIONHEADERLAYOUT_H

@class NSString, SLHighlight;
@protocol PXContentSyndicationSectionHeaderViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXPhotosSectionedLayoutHeader, PXDisplayAsset, PXContentSyndicationSocialLayerHighlightProvider;


#import "PXGSingleViewLayout.h"
#import "PXAssetCollectionActionManager.h"
#import "PXAssetsDataSource.h"
#import "PXContentSyndicationSectionHeaderView.h"
#import "PXSelectionSnapshot.h"
#import "PXPhotosLayoutSpec.h"

@interface _PXContentSyndicationSectionHeaderLayout : PXGSingleViewLayout <PXContentSyndicationSectionHeaderViewDelegate, PXContentSyndicationSocialLayerHighlightProviderChangeObserver, PXPhotosSectionedLayoutHeader>



@property (retain, nonatomic) PXAssetCollectionActionManager *assetCollectionManager; // ivar: _assetCollectionManager
@property (retain, nonatomic) PXAssetsDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (retain, nonatomic) NSObject<PXDisplayAsset> *referenceAssetForHighlight; // ivar: _referenceAssetForHighlight
@property (retain, nonatomic) PXContentSyndicationSectionHeaderView *sectionHeaderContentView; // ivar: _sectionHeaderContentView
@property (nonatomic) PXSimpleIndexPath sectionIndexPath; // ivar: _sectionIndexPath
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot; // ivar: _selectionSnapshot
@property (retain, nonatomic) SLHighlight *socialLayerHighlight; // ivar: _socialLayerHighlight
@property (readonly, nonatomic) NSObject<PXContentSyndicationSocialLayerHighlightProvider> *socialLayerHighlightProvider; // ivar: _socialLayerHighlightProvider
@property (retain, nonatomic) PXPhotosLayoutSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(id)additionalContextMenuActionsForAttributionViewInContentSyndicationHeaderView:(id)arg0 ;
-(id)init;
-(id)initWithSpec:(id)arg0 socialLayerHighlightProvider:(id)arg1 ;
-(void)_updateReferenceAssetForHighlightIfNeeded;
-(void)socialLayerHighlightProvider:(id)arg0 didChangeSocialLayerHighlight:(id)arg1 forAsset:(id)arg2 ;


@end


#endif