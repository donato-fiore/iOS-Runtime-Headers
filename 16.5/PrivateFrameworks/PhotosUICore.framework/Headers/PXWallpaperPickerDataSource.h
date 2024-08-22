// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXWALLPAPERPICKERDATASOURCE_H
#define PXWALLPAPERPICKERDATASOURCE_H

@class NSHashTable, NSDictionary, NSString, PHPhotoLibrary, PHFetchResult, NSMutableDictionary;
@protocol PHPhotoLibraryChangeObserver, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PXWallpaperPickerDataSource : NSObject <PHPhotoLibraryChangeObserver>



@property (readonly, nonatomic) NSHashTable *changeObservers; // ivar: _changeObservers
@property (retain) NSDictionary *classificationByPreviewAssetUUID; // ivar: _classificationByPreviewAssetUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetupPreviewAssets; // ivar: _didSetupPreviewAssets
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (retain, nonatomic) PHFetchResult *portraitAssets; // ivar: _portraitAssets
@property (retain) PHFetchResult *previewAssets; // ivar: _previewAssets
@property (retain, nonatomic) NSMutableDictionary *suggestionBasedDataSourceEntries; // ivar: _suggestionBasedDataSourceEntries
@property (readonly) Class superclass;
@property (nonatomic) NSInteger userSelectedMode; // ivar: _userSelectedMode
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(BOOL)containsWallpaperSuggestionSubtypes:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(NSUInteger)parallaxClassificationForPickerMode:(NSInteger)arg0 ;
+(id)allUserSelectableModes;
+(id)availableSelectableModesInPhotoLibrary:(id)arg0 ;
+(id)localizedTitleForWallpaperPickerMode:(NSInteger)arg0 ;
+(id)systemImageNameForWallpaperPickerMode:(NSInteger)arg0 ;
+(id)wallpaperSubtypesFromPickerMode:(NSInteger)arg0 ;
-(id)fetchFeaturedModeSuggestions;
-(id)fetchKeyAssetForSuggestions:(id)arg0 ;
-(id)fetchSuggestionsWithWallpaperSubtypes:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)addChangeObserver:(id)arg0 ;
-(void)notifyChanges;
-(void)notifySameSuggestionTapped;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)removeChangeObserver:(id)arg0 ;
-(void)setupPreviewAssets;


@end


#endif