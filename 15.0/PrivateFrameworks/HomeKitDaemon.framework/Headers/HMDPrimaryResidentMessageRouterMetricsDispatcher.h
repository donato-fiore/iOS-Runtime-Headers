// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPRIMARYRESIDENTMESSAGEROUTERMETRICSDISPATCHER_H
#define HMDPRIMARYRESIDENTMESSAGEROUTERMETRICSDISPATCHER_H

@class HMFObject;
@protocol HMMLogEventSubmitting;



@interface HMDPrimaryResidentMessageRouterMetricsDispatcher : HMFObject

@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter


-(id)initWithLogEventSubmitter:(id)arg0 ;
-(void)submitFailureEventWithMessageName:(id)arg0 failureType:(NSInteger)arg1 ;


@end


#endif