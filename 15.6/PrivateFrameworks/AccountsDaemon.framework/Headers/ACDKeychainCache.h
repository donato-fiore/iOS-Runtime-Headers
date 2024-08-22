// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDKEYCHAINCACHE_H
#define ACDKEYCHAINCACHE_H

@class NSDictionary, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACDKeychainCache : NSObject {
    os_unfair_lock_s _cachesLock;
    os_unfair_lock_s _expirersLock;
}


@property unsigned int cacheValidityDuration; // ivar: _cacheValidityDuration
@property (retain) NSDictionary *cachesByUsername; // ivar: _cachesByUsername
@property (retain) NSMutableDictionary *expirersByUsername; // ivar: _expirersByUsername


-(id)dataForService:(id)arg0 username:(id)arg1 syncState:(NSUInteger)arg2 ;
-(id)initWithValidityDuration:(unsigned int)arg0 ;
-(void)cacheData:(id)arg0 forService:(id)arg1 username:(id)arg2 syncState:(NSUInteger)arg3 ;
-(void)clearCacheForSyncState:(NSUInteger)arg0 ;
-(void)clearDataForService:(id)arg0 username:(id)arg1 syncState:(NSUInteger)arg2 ;


@end


#endif