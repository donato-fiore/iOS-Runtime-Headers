// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAUSERFEEDBACKUPDATER_H
#define PHAUSERFEEDBACKUPDATER_H

@class PGManager, PHPhotoLibrary, PHUserFeedbackCalculator;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHAUserFeedbackUpdater : NSObject {
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    NSObject<OS_os_log> *_loggingConnection;
}




+(id)_blockableFeaturesForAssetCollection:(id)arg0 ;
+(id)_memoriesFetchResultWithObjectIDs:(id)arg0 existingMemoriesFetchResult:(id)arg1 ;
+(id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg0 ;
-(BOOL)_deleteWallpaperTopSuggestionsOfPersonsForLocalIdentifiers:(id)arg0 ;
-(BOOL)_demoteFeaturedMemories;
-(BOOL)_neverFeatureMemories:(id)arg0 error:(*id)arg1 ;
-(BOOL)_retireAndUnfeatureSuggestions:(id)arg0 didUnfeatureSuggestions:(*BOOL)arg1 ;
-(BOOL)updateFeatureContentWithError:(*id)arg0 ;
-(CGFloat)_userFeedbackScoreForAssetCollection:(id)arg0 assetsFetchResult:(id)arg1 keyAsset:(id)arg2 personUUIDsByAssetUUID:(id)arg3 ;
-(id)_notRecommendedMemoriesFromMemories:(id)arg0 ;
-(id)_personUUIDsByAssetUUIDFromAssets:(id)arg0 ;
-(id)_suggestionsToRetire;
-(id)initWithGraphManager:(id)arg0 ;
-(void)_demoteNotFeaturedMemories;
-(void)_processWallpaperSuggestionsWithNegativeFeedbackPersonUUIDs:(id)arg0 ;
-(void)_reloadWallpaperSuggestionsWithRejectedPersonsForLocalIdentifiers:(id)arg0 forceReload:(BOOL)arg1 ;


@end


#endif