// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMETRICSPAGERENDEREVENT_H
#define SKUIMETRICSPAGERENDEREVENT_H

@class SSMetricsBaseEvent, NSString, NSArray, NSDictionary;
@protocol SKUIInspectableObject;



@interface SKUIMetricsPageRenderEvent : SSMetricsBaseEvent <SKUIInspectableObject>



@property (retain, nonatomic) NSString *clientCorrelationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *domChanges; // ivar: _domChanges
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *launchCorrelationKey;
@property (copy, nonatomic) NSDictionary *metricsBase; // ivar: _metricsBase
@property (nonatomic) CGFloat pageAppearTime;
@property (nonatomic) CGFloat pageDisappearTime;
@property (nonatomic) CGFloat pageRequestedTime;
@property (nonatomic) CGFloat pageUserReadyTime;
@property (nonatomic) CGFloat platformJsonParseEndTime;
@property (nonatomic) CGFloat platformJsonParseStartTime;
@property (nonatomic) CGFloat platformRequestStartTime;
@property (nonatomic) CGFloat platformResponseEndTime;
@property (nonatomic) CGFloat platformResponseStartTime;
@property (nonatomic) BOOL platformResponseWasCached;
@property (readonly, nonatomic, getter=isReadyForSubmission) BOOL readyForSubmission;
@property (readonly, copy, nonatomic) NSArray *requests; // ivar: _requests
@property (nonatomic) CGFloat resourceRequestEndTime;
@property (nonatomic) CGFloat resourceRequestOnScreenEndTime;
@property (nonatomic) CGFloat resourceRequestStartTime;
@property (readonly) Class superclass;
@property (nonatomic, setter=setXPSamplingForced:) BOOL xpSamplingForced;
@property (nonatomic, setter=setXPSamplingPercentageUsers:) CGFloat xpSamplingPercentageUsers;
@property (nonatomic, setter=setXPSessionDuration:) CGFloat xpSessionDuration;


+(BOOL)shouldCollectPageRenderData;
+(BOOL)shouldCollectPageRenderDataForDocument:(id)arg0 ;
+(CGFloat)_randomDouble;
+(id)_sampleWindowStartTime;
+(void)_setSampleWindowStartTime:(id)arg0 ;
-(id)init;
-(void)addDOMChange:(id)arg0 ;
-(void)addRequest:(id)arg0 ;
-(void)appendMetricsBaseProperties:(id)arg0 ;
-(void)appendPropertiesToBody:(id)arg0 ;
-(void)appendSamplingPropertiesFromClientContext:(id)arg0 ;
-(void)populateObjectInspector:(id)arg0 ;


@end


#endif