// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARUISPRITEUNIFORMSCACHE_H
#define ARUISPRITEUNIFORMSCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface ARUISpriteUniformsCache : NSObject {
    NSCache *_cache;
}




+(id)cacheWithLimit:(NSUInteger)arg0 ;
+(id)defaultCache;
-(id)initWithLimit:(NSUInteger)arg0 ;
-(id)uniformsForSprite:(id)arg0 renderedInContext:(id)arg1 ;
-(void)clearCache;


@end


#endif