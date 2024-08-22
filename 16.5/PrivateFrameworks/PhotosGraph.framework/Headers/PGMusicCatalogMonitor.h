// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICCATALOGMONITOR_H
#define PGMUSICCATALOGMONITOR_H


#import <Foundation/Foundation.h>


@interface PGMusicCatalogMonitor : NSObject



+(BOOL)checkMusicCatalogEligibilityWithProgressReporter:(id)arg0 ;
+(void)checkMusicCatalogEligibilityWithProgressReporter:(id)arg0 completionHandler:(id)arg1 ;
+(void)clearCatalogMusicFromCacheWithPhotoLibrary:(id)arg0 progressReporter:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif