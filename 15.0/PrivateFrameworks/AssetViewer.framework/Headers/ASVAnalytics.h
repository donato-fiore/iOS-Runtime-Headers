// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVANALYTICS_H
#define ASVANALYTICS_H


#import <Foundation/Foundation.h>


@interface ASVAnalytics : NSObject



+(void)sendAnalyticsWithCategory:(id)arg0 payloadDict:(id)arg1 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 error:(id)arg1 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 payloadDict:(id)arg1 ;


@end


#endif