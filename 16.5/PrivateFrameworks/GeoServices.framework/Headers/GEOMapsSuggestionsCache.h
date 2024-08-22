// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPSSUGGESTIONSCACHE_H
#define GEOMAPSSUGGESTIONSCACHE_H


#import <Foundation/Foundation.h>


@interface GEOMapsSuggestionsCache : NSObject



+(id)defaultCacheDir;
+(id)defaultPathForProcessName:(id)arg0 ;
+(id)defaultSuppressedEntriesPath;
+(void)pruneOldCacheAtPath:(id)arg0 ;


@end


#endif