// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOFILEPATHS_H
#define GEOFILEPATHS_H

@class NSString;
@protocol GEOPListStateCapturing;

#import <Foundation/Foundation.h>


@interface GEOFilePaths : NSObject <GEOPListStateCapturing>

 {
    NSUInteger _stateCaptureHandle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_internal_geoServicesCacheDirectoryPath;
+(id)_internal_homeDirectory;
+(id)analyticsPipelineFilePath;
+(id)analyticsUploadDirectoryPath;
+(id)dictionaryRepresentation;
+(id)geoServicesCacheDirectoryPath;
+(id)geodCacheDirectoryPath;
+(id)homeDirectory;
+(id)imageServiceDBFileURL;
+(id)locationShifterDBFilePath;
+(id)mapsSuggestionsCacheDirectoryPath;
+(id)pathFor:(NSUInteger)arg0 ;
+(id)preferencesDirectoryPath;
+(id)requestCountsDBFilePath;
+(id)tileCacheDirectoryPath;
+(id)urlFor:(NSUInteger)arg0 ;
-(id)captureStatePlistWithHints:(struct os_state_hints_s *)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif