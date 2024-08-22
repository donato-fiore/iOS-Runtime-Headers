// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCOOKIESERVICE_H
#define AMSCOOKIESERVICE_H

@class NSString, NSCache;
@protocol NSCacheDelegate, AMSCookieServiceInterface;

#import <Foundation/Foundation.h>


@interface AMSCookieService : NSObject <NSCacheDelegate, AMSCookieServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSCache *inMemoryStorage; // ivar: _inMemoryStorage
@property (readonly, nonatomic) os_unfair_lock_s inMemoryStorageLock; // ivar: _inMemoryStorageLock
@property BOOL isObservingNotifications; // ivar: _isObservingNotifications
@property (readonly) Class superclass;


+(BOOL)_isEntitledForDirectCookieAccess;
+(id)sharedService;
-(id)_cachedCookiesForAccount:(id)arg0 ;
-(id)getCookiesForAccount:(id)arg0 cookieDatabaseOnly:(BOOL)arg1 error:(*id)arg2 ;
-(id)getCookiesForAccount:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_cacheCookies:(id)arg0 forAccount:(id)arg1 ;
-(void)_registerForCookieChangeNotifications;
-(void)_unregisterFromCookieChangeNotifications;
-(void)cache:(id)arg0 willEvictObject:(id)arg1 ;
-(void)clearCookieCache;
-(void)clearCookieCacheForAccount:(id)arg0 ;
-(void)getCookiesForAccount:(id)arg0 cookieDatabaseOnly:(BOOL)arg1 withCompletion:(id)arg2 ;
-(void)getCookiesForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateCookiesWithCookiesToAdd:(id)arg0 cookiesToRemove:(id)arg1 forAccount:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif