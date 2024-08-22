// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_HTTP_COOKIE_STORAGE_H
#define NWCONCRETE_NW_HTTP_COOKIE_STORAGE_H

@class NSHTTPCookieStorage, NSString;
@protocol OS_nw_http_cookie_storage;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_http_cookie_storage : NSObject <OS_nw_http_cookie_storage>

 {
    NSHTTPCookieStorage *cookieStorage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif