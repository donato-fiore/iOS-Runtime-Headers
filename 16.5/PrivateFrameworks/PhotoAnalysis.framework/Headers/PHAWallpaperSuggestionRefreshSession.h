// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWALLPAPERSUGGESTIONREFRESHSESSION_H
#define PHAWALLPAPERSUGGESTIONREFRESHSESSION_H

@class NSString, NSURL, PRSService, VCPMediaAnalysisService, PGManager, PHPhotoLibrary, CPAnalytics;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PHAWallpaperSuggestionRefreshSession : NSObject {
    NSString *_refreshSessionIdentifier;
    NSURL *_refreshSessionURL;
    PRSService *_posterService;
    VCPMediaAnalysisService *_mediaAnalysisService;
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    NSObject<OS_dispatch_queue> *_workQueue;
    CPAnalytics *_analytics;
}




+(id)lastGalleryRefreshDate;
+(void)saveLastGalleryRefreshDate:(id)arg0 loggingConnection:(id)arg1 ;
-(BOOL)_prepareWithError:(*id)arg0 ;
-(BOOL)prepareWithError:(*id)arg0 ;
-(BOOL)reloadWallpaperSuggestionsForUUIDs:(id)arg0 progress:(id)arg1 error:(*id)arg2 ;
-(BOOL)savePreviewSegmentationResourcesForAsset:(id)arg0 atURL:(id)arg1 withClassification:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)saveSegmentationResourcesForAsset:(id)arg0 atURL:(id)arg1 withOptions:(id)arg2 classification:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)saveShuffleSegmentationResourcesForAsset:(id)arg0 atURL:(id)arg1 withClassification:(NSUInteger)arg2 style:(id)arg3 error:(*id)arg4 ;
-(id)consolidatedShuffleConfigurationFromPosterConfigurations:(id)arg0 ;
-(id)createAndExportMediaForSuggestionLocalIdentifiers:(id)arg0 style:(id)arg1 toURL:(id)arg2 error:(*id)arg3 ;
-(id)currentlyFeaturedSuggestionUUIDsForTop:(BOOL)arg0 ;
-(id)featuredPhotoDescriptorsForDonationWithSuggestionUUIDsToAvoid:(id)arg0 ;
-(id)fetchSuggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)arg0 ;
-(id)initWithGraphManager:(id)arg0 ;
-(id)posterDescriptorOfType:(NSInteger)arg0 withSuggestion:(id)arg1 assetBySuggestionUUID:(id)arg2 ;
-(id)randomizedWallpaperSuggesstionWithSubtype:(unsigned short)arg0 suggestionUUIDsToAvoid:(id)arg1 ;
-(id)suggestionUUIDsForPosterDescriptors:(id)arg0 ;
-(id)suggestionsForGalleryDonationWithSuggestionUUIDsToAvoid:(id)arg0 ;
-(id)updateIfNeededPosterDescriptors:(id)arg0 fromCurrentPosterDescriptors:(id)arg1 partialErrors:(*id)arg2 ;
-(id)updatedPosterDescriptorsFromSuggestions:(id)arg0 ;
-(id)uuidsOfSuggestions:(id)arg0 ;
-(void)_cleanup;
-(void)_removeIfNeededFeaturedContent:(id)arg0 withCompletion:(id)arg1 ;
-(void)cleanup;
-(void)dealloc;
-(void)enumerateSmartAlbumShufflePosterConfigurationsIn:(id)arg0 usingBlock:(id)arg1 ;
// -(void)refreshPosterConfigurationsForNightlyRefresh:(BOOL)arg0 passingFilter:(id)arg1 withCompletion:(unk)arg2  ;
-(void)refreshPosterDescriptorsWithCompletion:(id)arg0 ;
-(void)updateSuggestionFeaturedStateWithNewSuggestionUUIDs:(id)arg0 oldSuggestionUUIDs:(id)arg1 ;


@end


#endif