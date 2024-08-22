// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPREFETCHCONFIGURATION_H
#define PLPREFETCHCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PLPrefetchConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger cloudResourceATVNearLowDiskThreshold; // ivar: _cloudResourceATVNearLowDiskThreshold
@property (readonly, nonatomic) CGFloat cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio; // ivar: _cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio
@property (nonatomic) CGFloat cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio; // ivar: _cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio
@property (readonly, nonatomic) NSUInteger cloudResourceIntervalBetweenCheckCPLBGDownload; // ivar: _cloudResourceIntervalBetweenCheckCPLBGDownload
@property (readonly, nonatomic) unsigned short cloudResourceMaxPrefetchRetry; // ivar: _cloudResourceMaxPrefetchRetry
@property (nonatomic) NSUInteger cloudResourceMaximumSmallLibraryThreshold; // ivar: _cloudResourceMaximumSmallLibraryThreshold
@property (readonly, nonatomic) unsigned short cloudResourceMemoriesMaxResourcesPerFetch; // ivar: _cloudResourceMemoriesMaxResourcesPerFetch
@property (readonly, nonatomic) unsigned short cloudResourceNonThumbnailsMaxResourcesPerFetch; // ivar: _cloudResourceNonThumbnailsMaxResourcesPerFetch
@property (nonatomic) NSUInteger cloudResourcePrefetchMaxFileSize; // ivar: _cloudResourcePrefetchMaxFileSize
@property (readonly, nonatomic) CGFloat cloudResourceSmallLibraryThresholdRatio; // ivar: _cloudResourceSmallLibraryThresholdRatio
@property (readonly, nonatomic) unsigned short cloudResourceThumbnailsMaxResourcesPerFetch; // ivar: _cloudResourceThumbnailsMaxResourcesPerFetch
@property (readonly, nonatomic) unsigned short cloudResourceWidgetMaxResourcesPerFetch; // ivar: _cloudResourceWidgetMaxResourcesPerFetch
@property (nonatomic) unsigned short memoryMaxPrefetchPhotosCount; // ivar: _memoryMaxPrefetchPhotosCount
@property (nonatomic) unsigned short memoryMaxPrefetchVideosCount; // ivar: _memoryMaxPrefetchVideosCount
@property (nonatomic) NSInteger memoryPrefetchAllowedIfLastViewedDateWithin; // ivar: _memoryPrefetchAllowedIfLastViewedDateWithin
@property (nonatomic) NSInteger memoryPrefetchIfCreationDateWithin; // ivar: _memoryPrefetchIfCreationDateWithin
@property (nonatomic) unsigned short memoryPrefetchLimit; // ivar: _memoryPrefetchLimit


+(NSInteger)_defaultPrefetchOptimizeMode;
+(NSInteger)defaultPrefetchOptimizeMode;
+(id)descriptionForPrefetchOptimizeMode:(NSInteger)arg0 ;
+(id)overridePrefetchOptimizeMode;
-(NSInteger)prefetchOptimizeModeForTotalSizeOfOriginalResources:(NSInteger)arg0 totalSizeOfLocallyAvailableOriginalResources:(NSInteger)arg1 availableSpace:(NSInteger)arg2 overrideMaximumSmallLibraryThresholdGB:(NSInteger)arg3 nonThumbnailsBudget:(NSInteger)arg4 ;
-(NSUInteger)smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(NSInteger)arg0 availableSpace:(NSInteger)arg1 overrideMaximumThresholdGB:(NSInteger)arg2 ;
-(id)initWithPrefetchDictionary:(id)arg0 ;
-(void)updateValuesFromPrefetchDictionary:(id)arg0 ;
-(void)updateValuesFromTrialIfNecessary;


@end


#endif