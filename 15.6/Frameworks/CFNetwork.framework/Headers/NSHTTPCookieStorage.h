// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHTTPCOOKIESTORAGE_H
#define NSHTTPCOOKIESTORAGE_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSHTTPCookieStorageInternal.h"

@interface NSHTTPCookieStorage : NSObject {
    NSHTTPCookieStorageInternal *_internal;
}


@property (nonatomic) BOOL _overrideSessionCookieAcceptPolicy; // ivar: __overrideSessionCookieAcceptPolicy
@property NSUInteger cookieAcceptPolicy;
@property (readonly, copy) NSArray *cookies;


+(id)_csff:(id)arg0 ;
+(id)sharedCookieStorageForGroupContainerIdentifier:(id)arg0 ;
+(id)sharedHTTPCookieStorage;
+(void)_setSharedHTTPCookieStorage:(id)arg0 ;
-(id)_cookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 ;
-(id)_getCookiesForDomain:(id)arg0 ;
-(id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(id)_initWithIdentifier:(id)arg0 private:(BOOL)arg1 ;
-(id)cookiesForURL:(id)arg0 ;
-(id)description;
-(id)init;
-(id)sortedCookiesUsingDescriptors:(id)arg0 ;
-(struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
-(void)_getCookieStoragePartitionsCompletionHandler:(id)arg0 ;
-(void)_getCookiesForPartition:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getCookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 partition:(id)arg2 completionHandler:(id)arg3 ;
-(void)_getCookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 partition:(id)arg2 policyProperties:(id)arg3 completionHandler:(id)arg4 ;
-(void)_saveCookies;
-(void)_saveCookies:(id)arg0 ;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg0 ;
-(void)_setSubscribedDomainsForCookieChanges:(id)arg0 ;
-(void)_testingOfStoringOfCookie:(id)arg0 ;
-(void)dealloc;
-(void)deleteCookie:(id)arg0 ;
-(void)getCookiesForTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeCookiesSinceDate:(id)arg0 ;
-(void)setCookie:(id)arg0 ;
-(void)storeCookies:(id)arg0 forTask:(id)arg1 ;


@end


#endif