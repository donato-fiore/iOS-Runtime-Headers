// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFCAMERAANALYTICSCAMERACLIPEXPORTSESSIONEVENT_H
#define HFCAMERAANALYTICSCAMERACLIPEXPORTSESSIONEVENT_H



#import "HFCameraAnalyticsEvent.h"

@interface HFCameraAnalyticsCameraClipExportSessionEvent : HFCameraAnalyticsEvent

@property (nonatomic) CGFloat recordingDuration; // ivar: _recordingDuration


-(id)sendEventForState:(NSUInteger)arg0 ;


@end


#endif