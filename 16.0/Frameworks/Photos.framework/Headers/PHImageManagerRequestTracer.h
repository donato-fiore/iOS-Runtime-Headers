// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMAGEMANAGERREQUESTTRACER_H
#define PHIMAGEMANAGERREQUESTTRACER_H


#import <Foundation/Foundation.h>


@interface PHImageManagerRequestTracer : NSObject



+(id)_currentTimestampString;
+(id)recentMessagesSummaryForAssetUUID:(id)arg0 ;
+(int)requestIDFromTaskIdentifier:(id)arg0 ;
+(void)_inq_recordRequestID:(NSInteger)arg0 ;
+(void)_inq_trimToMostRecentImageManagerMessages;
+(void)initialize;
+(void)registerRequestID:(int)arg0 withAssetUUID:(id)arg1 ;
+(void)setTracingDisabled:(BOOL)arg0 ;
+(void)traceMessageForRequestID:(int)arg0 message:(id)arg1 ;


@end


#endif