// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCHAINABLEMODIFIERMETHODCACHE_H
#define SBCHAINABLEMODIFIERMETHODCACHE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SBModifierCacheCoordinator.h"
#import "SBChainableModifier.h"

@interface SBChainableModifierMethodCache : NSObject <NSCopying>

 {
    *SEL _selectors;
    NSInteger _selectorCount;
    **unk _imps;
    NSUInteger _genCount;
    *SBModifierCacheDispatchData _dispatchCache;
    *unk _nextFunc;
}


@property (retain, nonatomic) SBModifierCacheCoordinator *cacheCoordinator; // ivar: _cacheCoordinator
@property (readonly, nonatomic) BOOL hasNonTrampolineIMPs;
@property (nonatomic) SBChainableModifier *modifier; // ivar: _modifier


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIMPs:(**unk)arg0 selectorList:(id)arg1 subsequentMethodCacheFunc:(*unk)arg2 ;
-(void)dealloc;


@end


#endif