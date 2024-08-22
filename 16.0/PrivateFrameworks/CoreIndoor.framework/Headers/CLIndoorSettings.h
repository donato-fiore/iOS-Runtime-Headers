// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLINDOORSETTINGS_H
#define CLINDOORSETTINGS_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>

#import "CLGpsPosition.h"

@interface CLIndoorSettings : NSObject {
    duration<long double, std::ratio<1, 1>> _debounceInterval;
    duration<long long, std::ratio<1, 1000000000>> _errorBackoffDuration;
    duration<long long, std::ratio<1, 1>> _tilePrefetchActivityInterval;
    duration<long long, std::ratio<1, 1>> _tilePrefetchRelevancyWindow;
}


@property ? debounceInterval;
@property (copy, nonatomic) NSSet *disabledVenues; // ivar: _disabledVenues
@property ? errorBackoffDuration;
@property (retain, nonatomic) CLGpsPosition *fakeLastFix; // ivar: _fakeLastFix
@property (copy, nonatomic) NSSet *forcedVenues; // ivar: _forcedVenues
@property (copy, nonatomic) NSString *indoorAvailabilityTilesServerUrl; // ivar: _indoorAvailabilityTilesServerUrl
@property (nonatomic) optional<double> indoorPrefetchClusterMergeRadius; // ivar: _indoorPrefetchClusterMergeRadius
@property (nonatomic) optional<unsigned long> indoorTilePrefetchMaxCount; // ivar: _indoorTilePrefetchMaxCount
@property (nonatomic) optional<double> indoorTilePrefetchRadius; // ivar: _indoorTilePrefetchRadius
@property (nonatomic) BOOL pipelinedEnabled; // ivar: _pipelinedEnabled
@property (nonatomic) optional<double> prefetchClusterMergeRadius; // ivar: _prefetchClusterMergeRadius
@property (nonatomic) optional<double> regionalPrefetchClusterMergeRadius; // ivar: _regionalPrefetchClusterMergeRadius
@property (nonatomic) optional<unsigned long> regionalTilePrefetchMaxCount; // ivar: _regionalTilePrefetchMaxCount
@property (nonatomic) optional<double> regionalTilePrefetchRadius; // ivar: _regionalTilePrefetchRadius
@property ? tilePrefetchActivityInterval;
@property (nonatomic) optional<unsigned long> tilePrefetchMaxCount; // ivar: _tilePrefetchMaxCount
@property (nonatomic) optional<unsigned int> tilePrefetchPredictionActivityCycleAllowance; // ivar: _tilePrefetchPredictionActivityCycleAllowance
@property (nonatomic) optional<double> tilePrefetchRadius; // ivar: _tilePrefetchRadius
@property ? tilePrefetchRelevancyWindow;
@property (nonatomic) CGFloat venueGroupDistance; // ivar: _venueGroupDistance


-(id)initWithSettings:(id)arg0 ;


@end


#endif