// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEDFEEDBACKANALYTICS_H
#define DEDFEEDBACKANALYTICS_H


#import <Foundation/Foundation.h>


@interface DEDFeedbackAnalytics : NSObject



+(void)logDataLoadWithContentItemCount:(NSUInteger)arg0 formItemsCount:(NSUInteger)arg1 teamCount:(NSUInteger)arg2 errorsCount:(NSUInteger)arg3 startedAt:(CGFloat)arg4 endedAt:(CGFloat)arg5 ;
+(void)logEventWithRequest:(id)arg0 httpStatusCode:(NSInteger)arg1 nsurlErrorCode:(NSInteger)arg2 success:(BOOL)arg3 startedAt:(CGFloat)arg4 endedAt:(CGFloat)arg5 ;
+(void)logFBKBugSessionStartWithDeviceType:(id)arg0 isRemote:(BOOL)arg1 success:(BOOL)arg2 errorCode:(NSInteger)arg3 startedAt:(CGFloat)arg4 getSessionEndedAt:(CGFloat)arg5 showExtensionsEndedAt:(CGFloat)arg6 getStatusEndedAt:(CGFloat)arg7 ;


@end


#endif