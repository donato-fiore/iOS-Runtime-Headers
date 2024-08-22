// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDISPLAYASSETVIEWMODEL_H
#define PXDISPLAYASSETVIEWMODEL_H

@class UIImage, NSError, NSArray;
@protocol PXMutableDisplayAssetViewModel, PXDisplayAsset;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXDisplayAssetViewModel : PXObservable <PXMutableDisplayAssetViewModel>



@property (readonly, nonatomic) BOOL allowsTextSelection; // ivar: _allowsTextSelection
@property (readonly, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) CGFloat assetAspectRatio; // ivar: _assetAspectRatio
@property (readonly, nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, nonatomic) UIEdgeInsets contentSafeAreaInsets; // ivar: _contentSafeAreaInsets
@property (readonly, nonatomic) UIImage *currentImage; // ivar: _currentImage
@property (readonly, nonatomic) BOOL isDisplayingFullQualityContent; // ivar: _isDisplayingFullQualityContent
@property (readonly, nonatomic) NSError *loadingError; // ivar: _loadingError
@property (readonly, nonatomic) float loadingProgress; // ivar: _loadingProgress
@property (readonly, nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (readonly, nonatomic) NSArray *stringsToHighlight; // ivar: _stringsToHighlight
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) BOOL wantsLivePhotoPlayback; // ivar: _wantsLivePhotoPlayback


-(id)init;
-(void)_invalidateAssetAspectRatio;
-(void)_setNeedsUpdate;
-(void)_updateAssetAspectRatio;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;


@end


#endif