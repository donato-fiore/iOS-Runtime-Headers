// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCANALYTICSUTILITIES_H
#define RCANALYTICSUTILITIES_H


#import <Foundation/Foundation.h>


@interface RCAnalyticsUtilities : NSObject



+(void)sendDidCaptureModifyExistingRecording;
+(void)sendDidCaptureNewRecording;
+(void)sendDidOpenShareMemoController;
+(void)sendDidPlaybackVoiceMemo;
+(void)sendDidShareRecording;
+(void)sendDidTrimVoiceMemo;
+(void)sendNewRecordingDuration:(CGFloat)arg0 ;
+(void)sendReceivedSharedRecording;
+(void)sendRecordingsCount:(NSInteger)arg0 ;


@end


#endif