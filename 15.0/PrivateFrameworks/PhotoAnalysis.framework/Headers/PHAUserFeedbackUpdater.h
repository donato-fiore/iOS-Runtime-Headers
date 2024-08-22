// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAUSERFEEDBACKUPDATER_H
#define PHAUSERFEEDBACKUPDATER_H


#import <Foundation/Foundation.h>


@interface PHAUserFeedbackUpdater : NSObject



+(BOOL)_demoteFeaturedMemoriesWithUserFeedbackCalculator:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 ;
+(BOOL)_hasFeaturedSuggestions:(id)arg0 ;
+(BOOL)_neverFeatureMemories:(id)arg0 photoLibrary:(id)arg1 error:(*id)arg2 ;
+(BOOL)_retireAndUnfeatureSuggestions:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 ;
+(BOOL)updateFeatureContentWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
+(CGFloat)_userFeedbackScoreForAssetCollection:(id)arg0 assetsFetchResult:(id)arg1 keyAsset:(id)arg2 personUUIDsByAssetUUID:(id)arg3 userFeedbackCalculator:(id)arg4 ;
+(id)_blockableFeaturesForAssetCollection:(id)arg0 ;
+(id)_memoriesFetchResultWithObjectIDs:(id)arg0 existingMemoriesFetchResult:(id)arg1 ;
+(id)_notRecommendedMemoriesFromMemories:(id)arg0 userFeedbackCalculator:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_personUUIDsByAssetUUIDInAssets:(id)arg0 options:(id)arg1 ;
+(id)_suggestionsToRetireWithUserFeedbackCalculator:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 ;
+(id)_userFeedbackCalculatorWithPhotoLibrary:(id)arg0 ;
+(void)_demoteNotFeaturedMemoriesWithUserFeedbackCalculator:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 ;


@end


#endif