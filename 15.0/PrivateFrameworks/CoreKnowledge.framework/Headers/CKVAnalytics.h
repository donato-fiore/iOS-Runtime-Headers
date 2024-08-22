// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVANALYTICS_H
#define CKVANALYTICS_H


#import <Foundation/Foundation.h>


@interface CKVAnalytics : NSObject



+(void)sendAllDatasetStatistics:(id)arg0 ;
+(void)sendDonateEvent:(unsigned short)arg0 itemCount:(NSUInteger)arg1 appId:(id)arg2 reason:(unsigned short)arg3 result:(NSInteger)arg4 ;
+(void)sendErrorEvent:(id)arg0 errorCode:(NSInteger)arg1 underlyingErrorCode:(id)arg2 description:(id)arg3 ;


@end


#endif