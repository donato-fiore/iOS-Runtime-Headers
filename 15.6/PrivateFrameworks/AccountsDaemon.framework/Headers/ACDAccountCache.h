// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDACCOUNTCACHE_H
#define ACDACCOUNTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACDAccountCache : NSObject {
    os_unfair_lock_s _cachesLock;
    os_unfair_lock_s _expirersLock;
}


@property unsigned int cacheValidityDuration; // ivar: _cacheValidityDuration
@property (retain) NSMutableDictionary *cachedAccountIDsByType; // ivar: _cachedAccountIDsByType
@property (retain) NSMutableDictionary *cachedAccountTypesByID; // ivar: _cachedAccountTypesByID
@property (retain) NSMutableDictionary *cachedAccountsByID; // ivar: _cachedAccountsByID
@property (retain) NSMutableDictionary *expirersByID; // ivar: _expirersByID


-(id)_expirerIdentifierForAccountTypeID:(id)arg0 ;
-(id)_keyForType:(id)arg0 justActive:(BOOL)arg1 ;
-(id)cachedAccountForIdentifier:(id)arg0 ;
-(id)cachedAccountTypeForID:(id)arg0 ;
-(id)cachedAccountsOfType:(id)arg0 justActive:(BOOL)arg1 ;
-(id)initWithValidityDuration:(unsigned int)arg0 ;
-(void)_lock_removeAccountsForType:(id)arg0 ;
-(void)_resetParentAccountForCachedAccountIfNeeded:(id)arg0 ;
-(void)cacheAccount:(id)arg0 ;
-(void)cacheAccountType:(id)arg0 ;
-(void)cacheAccounts:(id)arg0 forType:(id)arg1 justActive:(BOOL)arg2 ;
-(void)clearCache;
-(void)removeAccount:(id)arg0 ;
-(void)removeAccountType:(id)arg0 ;


@end


#endif