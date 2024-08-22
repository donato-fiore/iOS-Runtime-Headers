// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCOOKIESTORAGE_H
#define AMSCOOKIESTORAGE_H


#import <Foundation/Foundation.h>


@interface AMSCookieStorage : NSObject



+(BOOL)isFeatureEnabled;
+(BOOL)updateCookiesWithCookiesToAdd:(id)arg0 cookiesToRemove:(id)arg1 forAccount:(id)arg2 error:(*id)arg3 ;
+(id)cookiesForAccount:(id)arg0 error:(*id)arg1 ;


@end


#endif