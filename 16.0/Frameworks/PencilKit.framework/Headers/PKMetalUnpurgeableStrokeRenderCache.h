// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMETALUNPURGEABLESTROKERENDERCACHE_H
#define PKMETALUNPURGEABLESTROKERENDERCACHE_H

@class NSMutableSet;


#import "PKMetalStrokeRenderCache.h"

@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet *_lockedResourceSet;
}




-(id)initWithInk:(id)arg0 ;
-(void)addBuffer:(id)arg0 ;
-(void)dealloc;


@end


#endif