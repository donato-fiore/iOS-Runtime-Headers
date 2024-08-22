// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSXPCCONNECTIONCLASSCACHE_H
#define _NSXPCCONNECTIONCLASSCACHE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _NSXPCConnectionClassCache : NSObject {
    NSMutableSet *_cache;
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)dealloc;


@end


#endif