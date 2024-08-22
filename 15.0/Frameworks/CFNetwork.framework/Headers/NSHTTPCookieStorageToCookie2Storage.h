// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSHTTPCOOKIESTORAGETOCOOKIE2STORAGE_H
#define NSHTTPCOOKIESTORAGETOCOOKIE2STORAGE_H



#import "NSHTTPCookieStorage.h"
#import "NSHTTPCookie2Storage.h"

@interface NSHTTPCookieStorageToCookie2Storage : NSHTTPCookieStorage {
    NSUInteger _acceptPolicy;
    BOOL _behavesLikeNS;
    NSHTTPCookie2Storage *_store;
}




-(NSUInteger)cookieAcceptPolicy;
-(id)_cookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 ;
-(id)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0 ;
-(id)_initWithIdentifier:(id)arg0 private:(BOOL)arg1 ;
-(id)cookies;
-(id)cookiesForURL:(id)arg0 ;
-(id)init;
-(struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
-(void)_getCookiesForPartition:(id)arg0 completionHandler:(id)arg1 ;
-(void)_getCookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 partition:(id)arg2 completionHandler:(id)arg3 ;
-(void)_getCookiesForURL:(id)arg0 mainDocumentURL:(id)arg1 partition:(id)arg2 policyProperties:(id)arg3 completionHandler:(id)arg4 ;
-(void)_saveCookies;
-(void)_saveCookies:(id)arg0 ;
-(void)_setCookies:(id)arg0 forURL:(id)arg1 mainDocumentURL:(id)arg2 policyProperties:(id)arg3 ;
-(void)_setPrivateBrowsingEnabled:(BOOL)arg0 ;
-(void)_testingOfStoringOfCookie:(id)arg0 ;
-(void)dealloc;
-(void)deleteCookie:(id)arg0 ;
-(void)getCookiesForTask:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeCookiesSinceDate:(id)arg0 ;
-(void)setCookie:(id)arg0 ;
-(void)setCookieAcceptPolicy:(NSUInteger)arg0 ;
-(void)setCookies:(id)arg0 forURL:(id)arg1 mainDocumentURL:(id)arg2 ;
-(void)storeCookies:(id)arg0 forTask:(id)arg1 ;


@end


#endif