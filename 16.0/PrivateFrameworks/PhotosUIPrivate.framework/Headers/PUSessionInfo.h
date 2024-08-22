// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSESSIONINFO_H
#define PUSESSIONINFO_H

@class NSPointerArray, NSPredicate, NSString, PXLoadingStatusManager, PXSelectionCoordinator, PHAssetCollection, NSOrderedSet;
@protocol PUPhotoSelectionManagerChangeObserver, PXPhotosViewDelegate;

#import <Foundation/Foundation.h>

#import "PUPhotoSelectionManager.h"

@interface PUSessionInfo : NSObject <PUPhotoSelectionManagerChangeObserver>

 {
    NSPointerArray *_observers;
}


@property (nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (nonatomic) BOOL allowsSwipeToSelect; // ivar: _allowsSwipeToSelect
@property (nonatomic) NSUInteger assetTypesToInclude; // ivar: _assetTypesToInclude
@property (retain, nonatomic) NSPredicate *assetsFilterPredicate; // ivar: _assetsFilterPredicate
@property (copy, nonatomic) id *bannerGenerator; // ivar: _bannerGenerator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL excludesHiddenAlbum; // ivar: _excludesHiddenAlbum
@property (nonatomic) BOOL excludesSharedAlbums; // ivar: _excludesSharedAlbums
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isForAlbumPicker; // ivar: _isForAlbumPicker
@property (readonly, nonatomic) BOOL isForAssetPicker; // ivar: _isForAssetPicker
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker; // ivar: _isLimitedLibraryPicker
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (copy, nonatomic) NSString *localizedPrompt; // ivar: _localizedPrompt
@property (nonatomic) NSInteger noContentPlaceholderType; // ivar: _noContentPlaceholderType
@property (retain, nonatomic) PUPhotoSelectionManager *photoSelectionManager; // ivar: _photoSelectionManager
@property (weak, nonatomic) NSObject<PXPhotosViewDelegate> *photosViewDelegate; // ivar: _photosViewDelegate
@property (nonatomic) NSInteger promptLocation; // ivar: _promptLocation
@property (readonly, nonatomic, getter=isSelectingAssets) BOOL selectingAssets;
@property (readonly, nonatomic, getter=isSelectingTargetAlbum) BOOL selectingTargetAlbum; // ivar: _selectingTargetAlbum
@property (retain, nonatomic) PXSelectionCoordinator *selectionCoordinator; // ivar: _selectionCoordinator
@property (nonatomic) BOOL showsFileSizePicker; // ivar: _showsFileSizePicker
@property (retain, nonatomic) PHAssetCollection *sourceAlbum; // ivar: _sourceAlbum
@property (nonatomic) NSInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) PHAssetCollection *targetAlbum; // ivar: _targetAlbum
@property (retain, nonatomic) NSString *targetAlbumName; // ivar: _targetAlbumName
@property (copy, nonatomic) NSOrderedSet *transferredAssets; // ivar: _transferredAssets
@property (nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle


-(BOOL)hasLocalTargetAlbum;
-(BOOL)hasTargetAlbum;
-(id)init;
-(void)_enumerateObserversWithBlock:(id)arg0 ;
-(void)addSessionInfoObserver:(id)arg0 ;
-(void)photoSelectionManagerSelectionDidChange:(id)arg0 ;
-(void)removeSessionInfoObserver:(id)arg0 ;


@end


#endif