// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15PHOTOSUIPRIVATE40PUWALLPAPERSHUFFLECONFIGURATIONVIEWMODEL_H
#define _TTC15PHOTOSUIPRIVATE40PUWALLPAPERSHUFFLECONFIGURATIONVIEWMODEL_H


#import <Foundation/Foundation.h>


@interface _TtC15PhotosUIPrivate40PUWallpaperShuffleConfigurationViewModel : NSObject {
    ? photoLibrary;
    ? posterConfiguration;
    ? finishHandler;
    ? cancelHandler;
    ? showAssetPreviews;
    ? presentationState;
    ? $__lazy_storage_$_assetPreviewViewModel;
    ? $__lazy_storage_$_smartAlbumDataSource;
    ? _selectedSmartAlbumsType;
    ? _availableSmartAlbums;
    ? _isFinishingWithFeaturedPhotos;
    ? peoplePickerHandler;
    ? selectedPersonLocalIdentifiers;
    ? $__lazy_storage_$_peoplePickerDataSource;
    ? availableShuffleFrequencies;
    ? _selectedShuffleFrequencyType;
    ? manualSelectionPhotoPickerHandler;
    ? manuallySelectedAssetIdentifiers;
}




-(id)init;


@end


#endif