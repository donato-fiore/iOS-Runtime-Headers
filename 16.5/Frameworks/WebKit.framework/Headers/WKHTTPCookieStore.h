// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKHTTPCOOKIESTORE_H
#define WKHTTPCOOKIESTORE_H

@class NSString;
@protocol WKObject;

#import <Foundation/Foundation.h>


@interface WKHTTPCookieStore : NSObject <WKObject>

 {
    ObjectStorage<API::HTTPCookieStore> _cookieStore;
    HashMap<const void *, std::unique_ptr<WKHTTPCookieStoreObserver>, WTF::DefaultHash<const void *>, WTF::HashTraits<const void *>, WTF::HashTraits<std::unique_ptr<WKHTTPCookieStoreObserver>>, WTF::HashTableTraits> _observers;
}


@property (readonly) *Object _apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_flushCookiesToDiskWithCompletionHandler:(id)arg0 ;
-(void)_getCookiesForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)_setCookieAcceptPolicy:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)deleteCookie:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAllCookies:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setCookie:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif