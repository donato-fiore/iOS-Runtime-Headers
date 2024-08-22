// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXSHAREDALBUMACTIVITYGADGET_H
#define PXSHAREDALBUMACTIVITYGADGET_H

@class NSString, NSArray, NSAttributedString, UILabel, NSSet;
@protocol PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget, PXGadgetDelegate;

#import <Foundation/Foundation.h>

#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXFeedAssetsSectionInfo.h"
#import "PXAssetCollageView.h"
#import "_PXSharedAlbumActivityGadgetContentView.h"
#import "PXAssetReference.h"
#import "PXGadgetSpec.h"
#import "PXSharedAlbumHeaderView.h"
#import "PXPhotoKitUIMediaProvider.h"

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget>



@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) NSUInteger accessoryButtonType;
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (retain, nonatomic) PXFeedAssetsSectionInfo *assetsSectionInfo; // ivar: _assetsSectionInfo
@property (copy, nonatomic) NSAttributedString *caption; // ivar: _caption
@property (retain, nonatomic) UILabel *captionLabel; // ivar: _captionLabel
@property (retain, nonatomic) PXAssetCollageView *collageView; // ivar: _collageView
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (retain, nonatomic) _PXSharedAlbumActivityGadgetContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) PXAssetReference *currentAssetReference; // ivar: _currentAssetReference
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGadgetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec; // ivar: _gadgetSpec
@property (readonly, nonatomic) NSUInteger gadgetType;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger headerStyle;
@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL isContentViewLaidOut; // ivar: _isContentViewLaidOut
@property (readonly, nonatomic) BOOL isContentViewLoaded;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (copy, nonatomic) NSSet *oneUpHiddenAssetReferences; // ivar: _oneUpHiddenAssetReferences
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (readonly) Class superclass;
@property (nonatomic) CGRect visibleContentRect; // ivar: _visibleContentRect
@property (nonatomic) BOOL wasAskedToLoadContentData; // ivar: _wasAskedToLoadContentData


+(void)preloadResources;
-(BOOL)_isAccessibilityContentSize;
-(NSInteger)oneUpPresentationOrigin:(id)arg0 ;
-(NSUInteger)_numberOfLinesForCaption;
-(id)init;
-(id)oneUpPresentation:(id)arg0 currentImageForAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg0 regionOfInterestForAssetReference:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg0 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg0 ;
-(id)oneUpPresentationMediaProvider:(id)arg0 ;
-(id)uniqueGadgetIdentifier;
-(struct CGSize )_performLayoutInRect:(struct CGRect )arg0 updateSubviewFrames:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)_handleActionTap:(id)arg0 ;
-(void)_handleCollageViewTap:(id)arg0 ;
-(void)_layoutContentView;
-(void)_loadAssets;
-(void)_loadCaption;
-(void)_loadContentFromSectionInfo;
-(void)_navigateToAssetView:(id)arg0 ;
-(void)_updateCollageView;
-(void)_updateCollageViewHiddenAssets;
-(void)_updateCollageViewVideoEnabled;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)oneUpPresentation:(id)arg0 setHiddenAssetReferences:(id)arg1 ;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;
-(void)userDidSelectGadget;


@end


#endif