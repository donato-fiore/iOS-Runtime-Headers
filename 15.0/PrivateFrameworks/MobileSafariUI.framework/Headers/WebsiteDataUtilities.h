// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBSITEDATAUTILITIES_H
#define WEBSITEDATAUTILITIES_H


#import <Foundation/Foundation.h>


@interface WebsiteDataUtilities : NSObject



+(void)getApplicationCacheQuotaForOrigin:(id)arg0 currentQuota:(NSUInteger)arg1 totalBytesNeeded:(NSUInteger)arg2 dialogPresenter:(id)arg3 completionHandler:(id)arg4 ;
+(void)getDatabaseQuotaForOrigin:(id)arg0 currentQuota:(NSUInteger)arg1 currentOriginUsage:(NSUInteger)arg2 currentDatabaseUsage:(NSUInteger)arg3 expectedUsage:(NSUInteger)arg4 dialogPresenter:(id)arg5 completionHandler:(id)arg6 ;


@end


#endif