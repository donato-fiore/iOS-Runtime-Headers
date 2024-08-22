// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASREACHABILITYSTATUSCACHE_H
#define ASREACHABILITYSTATUSCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ASReachabilityStatusCache : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_cache;
}




-(id)init;
-(id)statusForDestination:(id)arg0 ;
-(id)statusesForDestinations:(id)arg0 ;
-(void)addStatusesByDestination:(id)arg0 ;
-(void)setStatus:(id)arg0 forDestination:(id)arg1 ;


@end


#endif