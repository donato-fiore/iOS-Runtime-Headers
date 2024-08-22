// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCOOKIESERVICE_H
#define AMSCOOKIESERVICE_H

@class NSString;
@protocol AMSCookieServiceInterface;

#import <Foundation/Foundation.h>


@interface AMSCookieService : NSObject <AMSCookieServiceInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedService;
-(id)_inMemoryStorage;
-(id)cookiePromiseForAccount:(id)arg0 ;
-(void)getCookiesForAccount:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateCookiesWithCookiesToAdd:(id)arg0 cookiesToRemove:(id)arg1 forAccount:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif