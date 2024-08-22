// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRSMLMANAGER_H
#define PRSMLMANAGER_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "PRSCoreDuet.h"

@interface PRSMLManager : NSObject

@property (retain) NSArray *categoryList; // ivar: _categoryList
@property (retain) NSMutableDictionary *combinedBottomScoreOrder; // ivar: _combinedBottomScoreOrder
@property (retain) NSMutableDictionary *combinedTopScoreOrder; // ivar: _combinedTopScoreOrder
@property (retain) PRSCoreDuet *coreDuet; // ivar: _coreDuet
@property (retain) NSMutableDictionary *dictCoreDuetInfo; // ivar: _dictCoreDuetInfo
@property (retain) NSMutableDictionary *mapPredictionEnginesToClasses; // ivar: _mapPredictionEnginesToClasses
@property (retain) NSMutableDictionary *mapPredictionEnginesToCountFiles; // ivar: _mapPredictionEnginesToCountFiles
@property (retain) NSMutableDictionary *mapPredictionEnginesToCounts; // ivar: _mapPredictionEnginesToCounts
@property (retain) NSMutableDictionary *mapPredictionEnginesToPredictedTopHit; // ivar: _mapPredictionEnginesToPredictedTopHit


+(id)createPathToSpotlightPrefFile;
+(id)getSPMLSharedInstance;
-(NSUInteger)getCountForCategory:(id)arg0 ;
-(NSUInteger)getTotalResultsUsedCountForDuet;
-(id)getLastSavedCategoryRankings;
-(id)getRankedCategoriesAsDictionaryForDays:(NSInteger)arg0 ;
-(id)initManager;
-(void)addCategoryAndGroupNameToTrainCategories:(id)arg0 groupName:(id)arg1 ;
-(void)dumpPredictionStatsToFlatFiles;
-(void)saveLastRankingForCategories:(id)arg0 ;


@end


#endif