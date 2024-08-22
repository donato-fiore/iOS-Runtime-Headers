// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMESSAGEHANDLERMETRICSDISPATCHER_H
#define HMDMESSAGEHANDLERMETRICSDISPATCHER_H

@class HMFObject, NSUUID;
@protocol HMMLogEventSubmitting;



@interface HMDMessageHandlerMetricsDispatcher : HMFObject

@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter


+(id)logCategory;
-(id)attributeDescriptions;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)logIdentifier;
-(id)privateDescription;
-(void)submitFailureEventOfType:(NSUInteger)arg0 message:(id)arg1 ;


@end


#endif