// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTROKESPATIALCACHE_H
#define PKSTROKESPATIALCACHE_H

@class NSArray;
@protocol PKStrokeSpatialCacheDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKDrawing.h"

@interface PKStrokeSpatialCache : NSObject {
    BOOL _hasValidOnscreenVisibleStrokes;
    id<PKStrokeSpatialCacheDelegate> *_delegate;
    NSArray *_onscreenVisibleStrokes;
    id *_generateOnscreenVisibleStrokesBlock;
    NSObject<OS_dispatch_queue> *_onscreenVisibleStrokesQueue;
    NSInteger _currentGenerationCount;
    PKDrawing *_cachedDrawing;
    CGRect _cachedBounds;
}




-(id)init;
-(void)dealloc;


@end


#endif