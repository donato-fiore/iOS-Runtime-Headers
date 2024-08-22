// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICHTTPCOOKIESTORE_H
#define ICHTTPCOOKIESTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICHTTPCookieStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedCookieStore;
-(id)_accountForUserIdentifier:(id)arg0 ;
-(id)_cookieDictionaryForURL:(id)arg0 userIdentifier:(id)arg1 ;
-(id)getCookie:(id)arg0 userIdentifier:(id)arg1 ;
-(id)getCookiesForURL:(id)arg0 ;
-(id)getCookiesForURL:(id)arg0 userIdentifier:(id)arg1 ;
-(id)getCookiesForUserIdentifier:(id)arg0 ;
-(id)getCookiesHeadersForURL:(id)arg0 userIdentifier:(id)arg1 ;
-(id)getGlobalAccountCookiesForURL:(id)arg0 ;
-(id)init;
-(void)_saveCookies:(id)arg0 userIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)removeAllCookies;
-(void)removeCookiesWithProperties:(id)arg0 ;
-(void)saveCookies:(id)arg0 forURL:(id)arg1 ;
-(void)saveCookies:(id)arg0 forURL:(id)arg1 userIdentifier:(id)arg2 ;
-(void)saveGlobalAccountCookies:(id)arg0 forURL:(id)arg1 ;


@end


#endif