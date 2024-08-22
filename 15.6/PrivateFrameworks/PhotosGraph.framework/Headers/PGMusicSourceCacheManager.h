// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGMUSICSOURCECACHEMANAGER_H
#define PGMUSICSOURCECACHEMANAGER_H


#import <Foundation/Foundation.h>


@interface PGMusicSourceCacheManager : NSObject



+(void)pruneUnusedSourcesWithPhotoLibrary:(id)arg0 graphManager:(id)arg1 progressReporter:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif