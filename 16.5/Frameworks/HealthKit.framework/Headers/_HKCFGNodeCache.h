// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCFGNODECACHE_H
#define _HKCFGNODECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _HKCFGNodeCache : NSObject {
    NSMutableDictionary *_cache;
}




-(id)init;
-(id)nodesForPosition:(NSUInteger)arg0 nonTerminal:(id)arg1 withLengthAllowance:(NSUInteger)arg2 ;
-(void)cacheNodes:(id)arg0 forPosition:(NSUInteger)arg1 nonTerminal:(id)arg2 lengthAllowance:(NSUInteger)arg3 ;


@end


#endif