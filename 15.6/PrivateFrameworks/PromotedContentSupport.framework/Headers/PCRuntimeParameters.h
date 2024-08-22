// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCRUNTIMEPARAMETERS_H
#define PCRUNTIMEPARAMETERS_H


#import <Foundation/Foundation.h>


@interface PCRuntimeParameters : NSObject



+(NSInteger)contextPrefetchLimit;
+(void)clientHandlesImpressionTracking:(BOOL)arg0 ;
+(void)rateLimitRequests:(float)arg0 ;
+(void)rateLimitRequestsInFeed:(float)arg0 inArticle:(float)arg1 betweenArticle:(float)arg2 videoInArticle:(float)arg3 nativeInFeed:(float)arg4 nativeInArticle:(float)arg5 ;
+(void)setContextPrefetchLimit:(NSInteger)arg0 ;


@end


#endif