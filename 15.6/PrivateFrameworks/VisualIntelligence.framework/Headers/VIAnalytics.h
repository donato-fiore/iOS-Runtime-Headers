// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VIANALYTICS_H
#define VIANALYTICS_H

@protocol OS_dispatch_queue, SFFeedbackListener, VIAnalyticsTestingDelegate;

#import <Foundation/Foundation.h>

#import "VIAEntryPointLogger.h"

@interface VIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    VIAEntryPointLogger *_entryPointLogger;
}


@property (readonly, nonatomic) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (weak, nonatomic) NSObject<VIAnalyticsTestingDelegate> *testingDelegate; // ivar: _testingDelegate


+(id)_shared;
+(void)logEvent:(id)arg0 ;
-(id)initWithFeedbackListener:(id)arg0 ;
-(void)_logEvent:(id)arg0 ;
-(void)_performLogEvent:(id)arg0 ;


@end


#endif