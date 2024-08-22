// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI23PAGEPERFORMANCEREPORTER_H
#define _TTC8VIDEOSUI23PAGEPERFORMANCEREPORTER_H

@class SwiftObject;



@interface _TtC8VideosUI23PagePerformanceReporter : SwiftObject {
    ? baseAbsoluteTime;
    ? baseTimeval;
    ? baseTimevalInMicros;
    ? perfMetrics;
    ? metricsFlushed;
    ? imageProxyList;
    ? metricsWithEventType;
}




-(void)onImageDidLoad:(id)arg0 ;
-(void)onImageWillLoad:(id)arg0 ;


@end


#endif