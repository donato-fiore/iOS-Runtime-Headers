// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCCONNECTIONCLASSCACHE_H
#define _NSXPCCONNECTIONCLASSCACHE_H

@class NSMutableSet;

#import <Foundation/Foundation.h>


@interface _NSXPCConnectionClassCache : NSObject {
    _opaque_pthread_mutex_t _lock;
    NSMutableSet *_cache;
}




-(id)init;
-(void)dealloc;


@end


#endif