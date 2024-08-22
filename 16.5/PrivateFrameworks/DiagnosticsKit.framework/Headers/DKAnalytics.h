// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKANALYTICS_H
#define DKANALYTICS_H


#import <Foundation/Foundation.h>


@interface DKAnalytics : NSObject



+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 error:(id)arg1 ;
+(void)sendAnalyticsWithEvent:(NSUInteger)arg0 payloadDict:(id)arg1 ;


@end


#endif