// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMLISTCELLCONTENTVIEWHELPER_H
#define PUALBUMLISTCELLCONTENTVIEWHELPER_H

@class UIImage, PXAssetBadgeManager, PXCollectionTileLayoutTemplate, PXPhotoKitCollectionsDataSourceManager, NSString, PXFeatureSpec, PXFeatureSpecManager, PHImageRequestOptions, PXUIMediaProvider, PXExtendedTraitCollection;
@protocol PXChangeObserver;

#import <Foundation/Foundation.h>

#import "PUAlbumListCellContentViewHelperConfiguration.h"
#import "PUFontManager.h"

@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver>



@property (retain, nonatomic) UIImage *addSharedAlbumPlaceholderImage; // ivar: _addSharedAlbumPlaceholderImage
@property (nonatomic) CGSize albumCellSize; // ivar: _albumCellSize
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager; // ivar: _badgeManager
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate; // ivar: _collectionTileLayoutTemplate
@property (readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didInitializeMemoriesTitleSupport; // ivar: _didInitializeMemoriesTitleSupport
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage; // ivar: _emptyAlbumPlaceholderImage
@property (retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage; // ivar: _emptySharedAlbumPlaceholderImage
@property (retain, nonatomic) PXFeatureSpec *featureSpec; // ivar: _featureSpec
@property (retain, nonatomic) PXFeatureSpecManager *featureSpecManager; // ivar: _featureSpecManager
@property (retain, nonatomic) PUFontManager *fontManager; // ivar: _fontManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *hiddenAlbumPlaceholderImage; // ivar: _hiddenAlbumPlaceholderImage
@property (retain, nonatomic) PHImageRequestOptions *imageRequestOptions; // ivar: _imageRequestOptions
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage; // ivar: _recentlyDeletedAlbumPlaceholderImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // ivar: _traitCollection


+(id)_placeholderImageWithSize:(struct CGSize )arg0 backgroundColor:(id)arg1 glyphImageName:(id)arg2 glyphAlpha:(CGFloat)arg3 ;
-(NSInteger)estimatedIndexOfAssetForStackItemAtIndex:(NSInteger)arg0 inCollection:(id)arg1 albumListCellContentView:(id)arg2 ;
-(NSUInteger)_editCapabilitiesForAlbum:(id)arg0 ;
-(id)_getDisplayableAssetsForStandInCollectionList:(id)arg0 maximumCount:(NSInteger)arg1 useCache:(BOOL)arg2 correspondingCollections:(*id)arg3 ;
-(id)_getDisplayableFacesForCollectionList:(id)arg0 maximumCount:(NSInteger)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg0 correspondingCollections:(*id)arg1 ;
-(id)_visibleAssetsForCollection:(id)arg0 maximumNumberOfVisibleAssets:(NSInteger)arg1 correspondingCollections:(*id)arg2 ;
-(id)initWithConfiguration:(id)arg0 dataSourceManager:(id)arg1 mediaProvider:(id)arg2 extendedTraitCollection:(id)arg3 ;
-(id)subtitleForCollection:(id)arg0 ;
-(void)_getDisplayableAssets:(*id)arg0 indexes:(*id)arg1 forCollection:(id)arg2 maximumCount:(NSInteger)arg3 useCache:(BOOL)arg4 ;
-(void)_initializeMemoriesTitleSupportIfNeeded;
-(void)_invalidateAlbumCellSize;
-(void)_prepareStackView:(id)arg0 forCollection:(id)arg1 withStackCount:(NSInteger)arg2 withCustomEmptyPlaceHolderImage:(id)arg3 ;
-(void)_recalculateAlbumCellSize;
-(void)_updateAlbumListCellContentViewForPeopleAlbum:(id)arg0 ;
-(void)_updateAlbumListCellContentViewForPlacesAlbum:(id)arg0 ;
-(void)_updateStackView:(id)arg0 forAssets:(id)arg1 collection:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3 ;
-(void)_updateStackView:(id)arg0 forAssets:(id)arg1 memoriesCollection:(id)arg2 memories:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4 ;
-(void)_updateStackView:(id)arg0 forFaces:(id)arg1 inCollection:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3 ;
-(void)configureAlbumListCellContentView:(id)arg0 forCollection:(id)arg1 title:(id)arg2 animated:(BOOL)arg3 enabled:(BOOL)arg4 editing:(BOOL)arg5 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)reconfigureImageInAlbumListCellContentView:(id)arg0 withPlaceholderImage:(id)arg1 ;


@end


#endif