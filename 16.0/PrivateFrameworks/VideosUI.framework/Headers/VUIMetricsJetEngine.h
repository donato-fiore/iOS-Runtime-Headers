// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMETRICSJETENGINE_H
#define VUIMETRICSJETENGINE_H


#import <Foundation/Foundation.h>


@interface VUIMetricsJetEngine : NSObject {
    ? sharedPipeline;
    ? recorder;
}


@property (nonatomic, retain) NSObject *wrappedPipeline; // ivar: wrappedPipeline


+(BOOL)isEnabled;
+(id)sharedInstance;
-(BOOL)isSharedContent:(id)arg0 ;
-(id)init;
-(id)recordEventWithTopic:(id)arg0 eventType:(id)arg1 eventData:(id)arg2 lastPageEvent:(id)arg3 ;
-(void)flushMetrics;
-(void)flushMetricsWithCompletion:(id)arg0 ;
-(void)setMonitorsLifecycleEvents:(BOOL)arg0 ;


@end


#endif