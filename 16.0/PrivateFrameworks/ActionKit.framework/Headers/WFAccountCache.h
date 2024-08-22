// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFACCOUNTCACHE_H
#define WFACCOUNTCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface WFAccountCache : NSObject

@property (readonly, nonatomic) NSCache *cache; // ivar: _cache


-(id)accountsForService:(id)arg0 ;
-(id)init;
-(id)numberOfAccountsForService:(id)arg0 ;
-(void)clearCacheForService:(id)arg0 ;
-(void)setAccounts:(id)arg0 forService:(id)arg1 ;
-(void)setNumberOfAccounts:(id)arg0 forService:(id)arg1 ;


@end


#endif