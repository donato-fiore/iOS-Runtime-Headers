// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOSHIGHLIGHTCLUSTERGENERATOR_H
#define PLPHOTOSHIGHLIGHTCLUSTERGENERATOR_H

@class NSArray, NSDateInterval;
@protocol PLMomentGenerationDataManagement;

#import <Foundation/Foundation.h>

#import "PLFrequentLocationManager.h"
#import "PLLocalCreationDateCreator.h"

@interface PLPhotosHighlightClusterGenerator : NSObject

@property (readonly, nonatomic) NSArray *allMomentsSorted; // ivar: _allMomentsSorted
@property (readonly, weak, nonatomic) NSObject<PLMomentGenerationDataManagement> *dataManager; // ivar: _dataManager
@property (readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // ivar: _frequentLocationManager
@property (readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // ivar: _localCreationDateCreator
@property (readonly, nonatomic) NSDateInterval *recentHighlightsDateInterval; // ivar: _recentHighlightsDateInterval


-(BOOL)_isRecent:(id)arg0 ;
-(id)_aggregationHighlightClustersForMoments:(id)arg0 ;
-(id)_aggregationsInMoments:(id)arg0 unavailableMoments:(id)arg1 intersectingMoments:(id)arg2 ;
-(id)_dayMomentClustersWithMomentsSortedByDate:(id)arg0 ;
-(id)_recentHighlightClusterWithRecentMoments:(id)arg0 ;
-(id)_recentHighlightClusterWithRecentMoments:(id)arg0 intersectingMoments:(id)arg1 ;
-(id)_recentMoments;
-(id)_remainingHighlightClusterWithMoments:(id)arg0 ;
-(id)_remainingHighlightClustersWithClusters:(id)arg0 intersectingMoments:(id)arg1 ;
-(id)_remainingMomentClustersWithMomentsSortedByDate:(id)arg0 ;
-(id)_tripHighlightClustersForMoments:(id)arg0 tripType:(NSUInteger)arg1 ;
-(id)_tripsInMoments:(id)arg0 ;
-(id)highlightClustersIntersectingMoments:(id)arg0 includeAllTripHighlightClusters:(BOOL)arg1 ;
-(id)initWithDataManager:(id)arg0 frequentLocationManager:(id)arg1 recentHighlightDateInterval:(id)arg2 localCreationDateCreator:(id)arg3 ;
-(id)recentMomentsInMomentClusters:(id)arg0 ;


@end


#endif