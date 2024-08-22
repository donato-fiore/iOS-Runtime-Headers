// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSANALYTICS_H
#define DSANALYTICS_H


#import <Foundation/Foundation.h>


@interface DSAnalytics : NSObject



+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 error:(id)arg1 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 payloadDict:(id)arg1 ;


@end


#endif