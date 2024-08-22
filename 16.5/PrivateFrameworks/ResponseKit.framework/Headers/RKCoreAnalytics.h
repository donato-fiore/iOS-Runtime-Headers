// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RKCOREANALYTICS_H
#define RKCOREANALYTICS_H


#import <Foundation/Foundation.h>


@interface RKCoreAnalytics : NSObject



+(id)assignCoreAnalyticsCategory:(id)arg0 forAction:(id)arg1 withLanguageID:(id)arg2 ;
+(void)sendCoreAnalyticsEvent:(id)arg0 forAction:(id)arg1 withLanguageID:(id)arg2 ;


@end


#endif