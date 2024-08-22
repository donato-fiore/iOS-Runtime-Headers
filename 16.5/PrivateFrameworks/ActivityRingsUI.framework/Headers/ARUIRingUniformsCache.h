// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGUNIFORMSCACHE_H
#define ARUIRINGUNIFORMSCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface ARUIRingUniformsCache : NSObject {
    NSCache *_cache;
}




+(id)cacheWithLimit:(NSUInteger)arg0 ;
+(id)defaultCache;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)uniformsForRing:(id)arg0 renderedInContext:(id)arg1 ;
-(void)clearCache;


@end


#endif