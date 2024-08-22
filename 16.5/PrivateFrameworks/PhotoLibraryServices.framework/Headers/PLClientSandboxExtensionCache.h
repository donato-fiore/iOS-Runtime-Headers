// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCLIENTSANDBOXEXTENSIONCACHE_H
#define PLCLIENTSANDBOXEXTENSIONCACHE_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface PLClientSandboxExtensionCache : NSObject {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) NSUInteger cacheLimit; // ivar: _cacheLimit
@property (retain, nonatomic) NSMutableOrderedSet *sandboxExtensionURLs; // ivar: _sandboxExtensionURLs


-(BOOL)containsURL:(id)arg0 ;
-(id)initWithCacheLimit:(NSUInteger)arg0 ;
-(void)insertSandboxedURL:(id)arg0 ;


@end


#endif