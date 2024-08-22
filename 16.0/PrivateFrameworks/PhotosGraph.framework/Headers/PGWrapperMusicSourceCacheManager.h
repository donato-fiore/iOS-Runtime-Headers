// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGWRAPPERMUSICSOURCECACHEMANAGER_H
#define PGWRAPPERMUSICSOURCECACHEMANAGER_H


#import <Foundation/Foundation.h>


@interface PGWrapperMusicSourceCacheManager : NSObject



+(void)pruneUnusedSourcesWithPhotoLibrary:(id)arg0 graphManager:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;
-(id)init;


@end


#endif