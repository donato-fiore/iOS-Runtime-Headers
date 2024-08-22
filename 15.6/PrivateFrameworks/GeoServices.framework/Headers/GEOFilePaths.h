// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOFILEPATHS_H
#define GEOFILEPATHS_H


#import <Foundation/Foundation.h>


@interface GEOFilePaths : NSObject



+(id)aleStringsCacheDirectoryPath;
+(id)analtyicsPipelineFilePath;
+(id)analyticsUploadDirectoryPath;
+(id)geoServicesCacheDirectoryPath;
+(id)geodCacheDirectoryPath;
+(id)geodLibraryDirectoryURL;
+(id)homeDirectory;
+(id)imageServiceDBFileURL;
+(id)locationShifterDBFilePath;
+(id)mapsSuggestionsCacheDirectoryPath;
+(id)pdPlaceCacheFilePath;
+(id)phoneNumberMUIDMappingFilePath;
+(id)placeDataCacheDirectoryPath;
+(id)preferencesDirectoryPath;
+(id)requestCountsDBFilePath;
+(id)tileCacheDirectoryPath;
+(void)initialize;


@end


#endif