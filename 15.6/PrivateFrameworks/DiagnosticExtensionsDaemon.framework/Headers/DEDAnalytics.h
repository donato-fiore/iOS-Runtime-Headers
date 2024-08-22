// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDANALYTICS_H
#define DEDANALYTICS_H


#import <Foundation/Foundation.h>


@interface DEDAnalytics : NSObject



+(id)log;
+(void)didCheckInDeferredExtensionsWithCount:(NSUInteger)arg0 ;
+(void)didCompleteBugSessionWithState:(NSInteger)arg0 ;
+(void)didCreateBugSessionForApp:(id)arg0 ;
+(void)didStartDaemon;
+(void)didStartExtensionWithIdentifier:(id)arg0 ;
+(void)extensionDidScheduleExtensionWithIdentifier:(id)arg0 delay:(NSUInteger)arg1 ;
+(void)extensionWithIdentifier:(id)arg0 didCompleteWithFileCount:(NSUInteger)arg1 bytesCollected:(NSUInteger)arg2 duration:(NSUInteger)arg3 errorCode:(NSInteger)arg4 ;
+(void)finisherDidCompleteWithDuration:(NSUInteger)arg0 uploadedByteCount:(NSUInteger)arg1 usingFinishingMove:(NSInteger)arg2 withState:(NSInteger)arg3 ;
+(void)finisherDidStartWithFileCount:(NSUInteger)arg0 expectedByteUploadCount:(NSUInteger)arg1 finishingMove:(NSInteger)arg2 ;


@end


#endif