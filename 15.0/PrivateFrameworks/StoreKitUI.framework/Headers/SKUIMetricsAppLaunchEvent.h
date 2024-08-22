// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIMETRICSAPPLAUNCHEVENT_H
#define SKUIMETRICSAPPLAUNCHEVENT_H

@class SSMetricsBaseEvent, NSString, NSDictionary;
@protocol SKUIInspectableObject;



@interface SKUIMetricsAppLaunchEvent : SSMetricsBaseEvent <SKUIInspectableObject>



@property (nonatomic) CGFloat bootstrapEndTime;
@property (nonatomic) CGFloat bootstrapStartTime;
@property (nonatomic) CGFloat clientConfigurationLoadTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialTabRequestStartTime;
@property (nonatomic) CGFloat initialTabResponseEndTime;
@property (nonatomic) CGFloat initialTabResponseStartTime;
@property (nonatomic) CGFloat jsResourcesEndTime;
@property (nonatomic) CGFloat jsResourcesStartTime;
@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (nonatomic) CGFloat launchEndTime;
@property (nonatomic) CGFloat launchFailureTime;
@property (nonatomic) CGFloat mainTime;
@property (nonatomic) BOOL requiredBlockingBagLoad;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *templateMetrics; // ivar: _templateMetrics
@property (nonatomic) BOOL usedBootstrapFallback;


+(CGFloat)processStartTime;
+(id)consumePendingLaunchEvent;
+(void)createPendingLaunchEvent;
+(void)resetPendingLaunchEventForTesting;
+(void)withPendingLaunchEvent:(id)arg0 ;
-(id)init;
-(void)addTemplateLoadTimingMetric:(id)arg0 forURL:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg0 ;
-(void)populateObjectInspector:(id)arg0 ;


@end


#endif