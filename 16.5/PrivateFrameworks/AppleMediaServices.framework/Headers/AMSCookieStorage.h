// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCOOKIESTORAGE_H
#define AMSCOOKIESTORAGE_H


#import <Foundation/Foundation.h>


@interface AMSCookieStorage : NSObject



+(BOOL)isCookieDomainMigrationEnabled;
+(BOOL)updateCookiesWithCookiesToAdd:(id)arg0 cookiesToRemove:(id)arg1 forAccount:(id)arg2 error:(*id)arg3 ;
+(id)cookiesForAccount:(id)arg0 cookieDatabaseOnly:(BOOL)arg1 error:(*id)arg2 ;
+(id)cookiesForAccount:(id)arg0 error:(*id)arg1 ;


@end


#endif