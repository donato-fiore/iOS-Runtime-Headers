// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPCPLAYERPATHCACHE_H
#define MPCPLAYERPATHCACHE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCPlayerPathCache : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (readonly, nonatomic) NSMutableDictionary *endpointObservers; // ivar: _endpointObservers
@property (readonly, nonatomic) NSMutableDictionary *playerPathObservers; // ivar: _playerPathObservers
@property (readonly, nonatomic) NSMutableDictionary *playerPathResolutions; // ivar: _playerPathResolutions


+(id)sharedCache;
-(id)_init;
-(id)observationTokenDescriptionForPlayerPath:(id)arg0 ;
-(id)resolvedPlayerPathForPlayerPath:(id)arg0 ;
-(void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg0 routeResolvedPlayerPath:(id)arg1 ;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg0 invalidationPlayerPath:(*void)arg1 ;
-(void)dealloc;


@end


#endif