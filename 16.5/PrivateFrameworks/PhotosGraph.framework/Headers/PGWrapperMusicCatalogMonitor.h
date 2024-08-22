// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGWRAPPERMUSICCATALOGMONITOR_H
#define PGWRAPPERMUSICCATALOGMONITOR_H


#import <Foundation/Foundation.h>


@interface PGWrapperMusicCatalogMonitor : NSObject



+(BOOL)checkMusicCatalogEligibilityWithProgressReporter:(id)arg0 ;
+(BOOL)clearCatalogMusicFromCacheWithPhotoLibrary:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
+(void)checkMusicCatalogEligibilityWithProgressReporter:(id)arg0 completionHandler:(id)arg1 ;
-(id)init;


@end


#endif