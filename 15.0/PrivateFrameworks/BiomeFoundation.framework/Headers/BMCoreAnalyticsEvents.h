// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMCOREANALYTICSEVENTS_H
#define BMCOREANALYTICSEVENTS_H


#import <Foundation/Foundation.h>


@interface BMCoreAnalyticsEvents : NSObject



+(id)dictionaryWithAllStreamsEventWritten:(BOOL)arg0 size:(unsigned int)arg1 streamIdentifier:(id)arg2 ;
+(id)dictionaryWithAppLaunchEventWritten:(BOOL)arg0 size:(unsigned int)arg1 ;
+(id)dictionaryWithBookmarkResumeFailureTime:(CGFloat)arg0 bookmarkCreationTime:(CGFloat)arg1 publicStream:(NSInteger)arg2 ;
+(id)dictionaryWithIntentEventWritten:(BOOL)arg0 size:(unsigned int)arg1 ;
+(id)dictionaryWithPrunePublicStream:(NSInteger)arg0 deletionInterval:(CGFloat)arg1 eventDeletionCount:(unsigned int)arg2 ;
+(id)dictionaryWithUnreadableEventTime:(CGFloat)arg0 stream:(NSInteger)arg1 segmentTime:(CGFloat)arg2 ;
+(id)dictionaryWithUnreadableSegment:(CGFloat)arg0 stream:(NSInteger)arg1 size:(unsigned int)arg2 ;
+(void)sendAllStreamsEventWritten:(BOOL)arg0 size:(unsigned int)arg1 streamIdentifier:(id)arg2 ;
+(void)sendAppLaunchEventWritten:(BOOL)arg0 size:(unsigned int)arg1 ;
+(void)sendBookmarkResumeFailureTime:(CGFloat)arg0 bookmarkCreationTime:(CGFloat)arg1 publicStream:(NSInteger)arg2 ;
+(void)sendEvent:(id)arg0 payload:(id)arg1 ;
+(void)sendIntentEventWritten:(BOOL)arg0 size:(unsigned int)arg1 ;
+(void)sendPrunePublicStream:(NSInteger)arg0 deletionInterval:(CGFloat)arg1 eventDeletionCount:(unsigned int)arg2 ;
+(void)sendUnreadableEventTime:(CGFloat)arg0 stream:(NSInteger)arg1 segmentTime:(CGFloat)arg2 ;
+(void)sendUnreadableSegment:(CGFloat)arg0 stream:(NSInteger)arg1 size:(unsigned int)arg2 ;


@end


#endif