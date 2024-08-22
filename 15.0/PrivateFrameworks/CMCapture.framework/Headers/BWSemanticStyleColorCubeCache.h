// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWSEMANTICSTYLECOLORCUBECACHE_H
#define BWSEMANTICSTYLECOLORCUBECACHE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "BWColorLookupCache.h"

@interface BWSemanticStyleColorCubeCache : NSObject {
    BWColorLookupCache *_colorLookupCache;
    NSMutableDictionary *_cubeFilterCache;
    NSMutableArray *_recentFilterCacheKeys;
    BOOL _cachingEnabled;
    NSUInteger _cacheMaxSize;
}




+(void)initialize;
-(id)filtersForSemanticStyle:(id)arg0 sceneType:(int)arg1 personSegmentationEnabled:(BOOL)arg2 maskVisualizationEnabled:(BOOL)arg3 filtersToCombine:(id)arg4 ;
-(id)initWithColorLookupCache:(id)arg0 ;
-(void)dealloc;


@end


#endif