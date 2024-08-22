// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKXSTRUCTPROXYCHILDCACHE_H
#define CKXSTRUCTPROXYCHILDCACHE_H


#import <Foundation/Foundation.h>

#import "CKXStructProxyBase.h"

@interface CKXStructProxyChildCache : NSObject {
    unordered_map<unsigned long, CKXProxyBase *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, CKXProxyBase *>>> fieldToProxy;
}


@property (readonly, weak, nonatomic) CKXStructProxyBase *proxy; // ivar: _proxy


-(id)initWithProxy:(id)arg0 ;
-(id)structListProxyForListReference:(NSUInteger)arg0 mutable:(BOOL)arg1 ;
-(id)structProxyForStructReference:(NSUInteger)arg0 mutable:(BOOL)arg1 ;
-(void)reset;


@end


#endif