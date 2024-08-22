// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLINDOORAVAILABILITYTILEPARAMS_H
#define CLINDOORAVAILABILITYTILEPARAMS_H


#import <Foundation/Foundation.h>


@interface CLIndoorAvailabilityTileParams : NSObject {
    optional<proto::params::LocalizerParameters> _optionalParams;
}


@property (readonly, nonatomic) CGFloat availabilityZScoreConfidenceInterval; // ivar: _availabilityZScoreConfidenceInterval
@property (readonly, nonatomic) unsigned int cyclingToNonFitnessSeconds; // ivar: _cyclingToNonFitnessSeconds
@property (readonly, nonatomic) BOOL hasCyclingToNonFitnessSeconds; // ivar: _hasCyclingToNonFitnessSeconds
@property (readonly, nonatomic) BOOL hasMotionActivityDebounceParameters; // ivar: _hasMotionActivityDebounceParameters
@property (readonly, nonatomic) BOOL hasNonFitnessToCyclingSeconds; // ivar: _hasNonFitnessToCyclingSeconds
@property (readonly, nonatomic) BOOL hasNonFitnessToRunningSeconds; // ivar: _hasNonFitnessToRunningSeconds
@property (readonly, nonatomic) BOOL hasRegionalPrefetchMaxFloorCount; // ivar: _hasRegionalPrefetchMaxFloorCount
@property (readonly, nonatomic) BOOL hasRunningToNonFitnessSeconds; // ivar: _hasRunningToNonFitnessSeconds
@property (readonly, nonatomic) unsigned int indoorLocationOfInterestMergeRadiusKM; // ivar: _indoorLocationOfInterestMergeRadiusKM
@property (readonly, nonatomic) float indoorNumberOfDaysBeforeTileRedownload; // ivar: _indoorNumberOfDaysBeforeTileRedownload
@property (readonly, nonatomic) unsigned int indoorPrefetchMaxFloorCount; // ivar: _indoorPrefetchMaxFloorCount
@property (readonly, nonatomic) unsigned int indoorPrefetchMaxTotalBytes; // ivar: _indoorPrefetchMaxTotalBytes
@property (readonly, nonatomic) unsigned int indoorPrefetchRadiusKM; // ivar: _indoorPrefetchRadiusKM
@property (readonly, nonatomic) unsigned int nonFitnessToCyclingSeconds; // ivar: _nonFitnessToCyclingSeconds
@property (readonly, nonatomic) unsigned int nonFitnessToRunningSeconds; // ivar: _nonFitnessToRunningSeconds
@property (readonly, nonatomic) unsigned int preferPredictionWithinNActivityCycles; // ivar: _preferPredictionWithinNActivityCycles
@property (readonly, nonatomic) unsigned int regionalLocationOfInterestMergeRadiusKM; // ivar: _regionalLocationOfInterestMergeRadiusKM
@property (readonly, nonatomic) float regionalNumberOfDaysBeforeTileRedownload; // ivar: _regionalNumberOfDaysBeforeTileRedownload
@property (readonly, nonatomic) unsigned int regionalPrefetchMaxFloorCount; // ivar: _regionalPrefetchMaxFloorCount
@property (readonly, nonatomic) unsigned int regionalPrefetchMaxTotalBytes; // ivar: _regionalPrefetchMaxTotalBytes
@property (readonly, nonatomic) unsigned int regionalPrefetchRadiusKM; // ivar: _regionalPrefetchRadiusKM
@property (readonly, nonatomic) unsigned int runningToNonFitnessSeconds; // ivar: _runningToNonFitnessSeconds


-(id)init;
-(id)initWithAvailabilityTile:(*void)arg0 ;
-(struct optional<proto::params::LocalizerParameters> )localizerParams;


@end


#endif