// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVANALYTICS_H
#define CKVANALYTICS_H


#import <Foundation/Foundation.h>


@interface CKVAnalytics : NSObject



+(void)sendAllDatasetStatistics:(id)arg0 ;
+(void)sendDonateEvent:(unsigned short)arg0 itemCount:(NSUInteger)arg1 appId:(id)arg2 reason:(unsigned short)arg3 result:(BOOL)arg4 ;
+(void)sendDonateVerification:(unsigned short)arg0 isConsistent:(BOOL)arg1 ;


@end


#endif