// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHUSERFEEDBACKCALCULATOR_H
#define PHUSERFEEDBACKCALCULATOR_H


#import <Foundation/Foundation.h>

#import "PHUserFeedbackDataCache.h"
#import "PHPhotoLibrary.h"

@interface PHUserFeedbackCalculator : NSObject

@property (readonly, nonatomic) PHUserFeedbackDataCache *dataCache; // ivar: _dataCache
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;


+(BOOL)_isUserFeedbackFeatureFlagEnabled;
+(BOOL)score:(CGFloat)arg0 meetsScoreThreshold:(CGFloat)arg1 ;
+(id)descriptionForScore:(CGFloat)arg0 ;
+(id)fetchSongIdentifiersWithNegativeFeedbackWithPhotoLibrary:(id)arg0 ;
+(id)songIdentifiersWithNegativeFeedbackForMemory:(id)arg0 ;
-(BOOL)_anyPersonUUIDs:(id)arg0 matchesWithImportantPersonType:(NSUInteger)arg1 ;
-(BOOL)_hasNegativeFeedback:(id)arg0 ;
-(CGFloat)_adjustScore:(CGFloat)arg0 shouldDowngrade:(BOOL)arg1 ;
-(CGFloat)_scoreForKeyAssetWithPersonUUIDs:(id)arg0 ;
-(CGFloat)_scoreForPersonsInAssetsForUUIDs:(id)arg0 keyAssetUUID:(id)arg1 personsUUIDsByAssetUUIDs:(id)arg2 ;
-(CGFloat)scoreForAssetUUIDs:(id)arg0 keyAssetUUID:(id)arg1 personsUUIDsByAssetUUIDs:(id)arg2 memoryFeatures:(id)arg3 ;
-(CGFloat)scoreForAssetUUIDs:(id)arg0 personsUUIDsByAssetUUIDs:(id)arg1 ;
-(CGFloat)scoreForKeyAssetUUID:(id)arg0 personsUUIDsInKeyAsset:(id)arg1 memoryFeatures:(id)arg2 ;
-(NSUInteger)userFeedbackTypeForPersonUUID:(id)arg0 ;
-(id)_uniqueFeedbackTypesForPersonUUIDs:(id)arg0 ;
-(id)initWithDataCache:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)memoryFeaturesWithNegativeFeedbackForMemoryFeatures:(id)arg0 ;
-(id)personUUIDsWithNegativeFeedback;
-(id)userFeedbackTypeByPersonUUIDForPersonUUIDs:(id)arg0 ;


@end


#endif