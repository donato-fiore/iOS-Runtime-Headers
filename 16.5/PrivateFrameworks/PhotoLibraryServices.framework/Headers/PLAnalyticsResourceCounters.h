// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLANALYTICSRESOURCECOUNTERS_H
#define PLANALYTICSRESOURCECOUNTERS_H


#import <Foundation/Foundation.h>


@interface PLAnalyticsResourceCounters : NSObject {
    uint8_t countOfMediumOriginalLocallyAvailableCloudResources;
    uint8_t countOfMediumOriginalLocallyUnavailableCloudResources;
    uint8_t countOfAssetsSupportingCloudUpload;
    uint8_t countOfImageAssetsSupportingCloudUpload;
    uint8_t countOfVideoAssetsSupportingCloudUpload;
    uint8_t countOfAssetsWithOriginalResourceLocal;
    uint8_t countOfAssetsWithAllThumbs;
    uint8_t countOfAssetsWithCPLMediumLocallyAvailable;
    uint8_t countOfAssetsWithMediumOrOriginalLocallyAvailable;
    uint8_t countOfImageAssetsWithMediumOrOriginalLocallyAvailable;
    uint8_t countOfVideoAssetsWithMediumOrOriginalLocallyAvailable;
    uint8_t countOfResourcesPurgedInTheLastDay;
    uint8_t countOfResourcesPurgedInTheLastWeek;
    uint8_t countOfResourcesPurgedInTheLastMonth;
    uint8_t sizeOfResourcesPurgedInTheLastDay;
    uint8_t sizeOfResourcesPurgedInTheLastWeek;
    uint8_t sizeOfResourcesPurgedInTheLastMonth;
    uint8_t countOfResourcesPurgedWithinDayOfPrefetch;
    uint8_t countOfResourcesPurgedWithinWeekOfPrefetch;
    uint8_t countOfResourcesPurgedWithinMonthOfPrefetch;
    uint8_t countOfPersonalLibraryAssets;
    uint8_t countOfSharedLibraryAssets;
    uint8_t countOfSharedLibraryAssetsAddedManually;
    uint8_t countOfSharedLibraryAssetsAddedInSuggestions;
    uint8_t countOfSharedLibraryAssetsAddedInCamera;
}






@end


#endif