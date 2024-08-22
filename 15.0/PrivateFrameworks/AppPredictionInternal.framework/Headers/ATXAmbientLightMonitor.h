// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAMBIENTLIGHTMONITOR_H
#define ATXAMBIENTLIGHTMONITOR_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXAmbientLightMonitor : NSObject {
    *__IOHIDEventSystemClient _client;
    *__IOHIDServiceClient _sender;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_sampledAmbientLightValues;
    int _sampledAmbientLightValuesCurrentIndex;
    CGFloat _lastSampleTimestamp;
}




+(id)sharedInstance;
+(int)getAmbientLightTypeForXValue:(CGFloat)arg0 YValue:(CGFloat)arg1 ZValue:(CGFloat)arg2 ;
-(id)getCurrentSampledValues;
-(id)init;
-(id)initWithoutMonitoring;
-(int)getCurrentAmbientLightType;
-(void)addSampleWithXValue:(id)arg0 YValue:(id)arg1 ZValue:(id)arg2 ;
-(void)dealloc;
-(void)start;


@end


#endif