// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWALLPAPERSMARTALBUMDATASOURCE_H
#define PXWALLPAPERSMARTALBUMDATASOURCE_H

@class NSMutableDictionary, PFPosterMediaSuggestion, NSHashTable, PHFetchResult, NSDictionary, NSString, NSArray, PHPhotoLibrary, PHSuggestion;
@protocol PHPhotoLibraryChangeObserver, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXWallpaperSmartAlbumDataSource : NSObject <PHPhotoLibraryChangeObserver>

 {
    NSMutableDictionary *_keyAssetBySuggestionUUID;
    NSMutableDictionary *_personSuggestionsByPersonLocalIdentifier;
}


@property NSUInteger availableTypes; // ivar: _availableTypes
@property (readonly, nonatomic) PFPosterMediaSuggestion *centerMedia; // ivar: _centerMedia
@property (readonly, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (retain, nonatomic) PHFetchResult *cityscapeSuggestions; // ivar: _cityscapeSuggestions
@property (retain) NSDictionary *classificationByPreviewAssetUUID; // ivar: _classificationByPreviewAssetUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *keyAssetBySuggestionUUID;
@property (retain, nonatomic) PHFetchResult *landscapeSuggestions; // ivar: _landscapeSuggestions
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSArray *peopleLocalIdentifiers; // ivar: _peopleLocalIdentifiers
@property (retain, nonatomic) PHFetchResult *peopleSuggestions; // ivar: _peopleSuggestions
@property (readonly, nonatomic) NSDictionary *personSuggestionsByPersonLocalIdentifier;
@property (retain, nonatomic) PHFetchResult *petSuggestions; // ivar: _petSuggestions
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain) NSArray *previewAssets; // ivar: _previewAssets
@property (nonatomic) NSUInteger selectedTypes; // ivar: _selectedTypes
@property (retain) NSDictionary *shuffleSuggestionByKeyAssetUUID; // ivar: _shuffleSuggestionByKeyAssetUUID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (retain, nonatomic) PHSuggestion *workQueue_centerSuggestion; // ivar: _workQueue_centerSuggestion


+(BOOL)isAnySmartAlbumAvailableInPhotoLibrary:(id)arg0 ;
+(NSUInteger)allSmartAlbumTypes;
+(id)_commonWallpaperFetchOptionsForPhotoLibrary:(id)arg0 ;
+(id)_fetchSuggestionsWithWallpaperSubtype:(unsigned short)arg0 fetchOptions:(id)arg1 ;
+(id)_userSelectableSmartAlbumTypes;
+(id)localizedTitleForSingleSmartAlbumType:(NSUInteger)arg0 ;
+(id)systemImageNameForSingleSmartAlbumType:(NSUInteger)arg0 ;
+(unsigned short)_suggestionSubTypeForSmartAlbumType:(NSUInteger)arg0 ;
-(BOOL)shouldIncludeCenterMediaWithPreviewAssets:(id)arg0 ;
-(id)baseWallpaperFetchOptions;
-(id)customPeopleSuggestions;
-(id)fetchAssetIfNeededForAssetUUID:(id)arg0 ;
-(id)fetchShuffleSuggestionContainingAsset:(id)arg0 ;
-(id)fetchSuggestionsWithWallpaperSubtype:(unsigned short)arg0 options:(id)arg1 ;
-(id)initWithPhotoLibrary:(id)arg0 changeObserver:(id)arg1 centerMedia:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg0 changeObserver:(id)arg1 registerForPhotoLibraryChanges:(BOOL)arg2 centerMedia:(id)arg3 ;
-(void)addChangeObserver:(id)arg0 ;
-(void)cacheKeyAssetForSuggestions:(id)arg0 ;
-(void)cacheSuggestionsAndKeyAssetsForPersons:(id)arg0 ;
-(void)fetchSuggestionsAndAssets;
-(void)notifyAvailableTypeDidChange;
-(void)notifyPreviewAssetsDidChange;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)removeChangeObserver:(id)arg0 ;
-(void)setupPreviewAssets;


@end


#endif