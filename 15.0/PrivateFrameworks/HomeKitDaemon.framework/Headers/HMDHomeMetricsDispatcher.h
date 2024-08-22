// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEMETRICSDISPATCHER_H
#define HMDHOMEMETRICSDISPATCHER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMMLogEventSubmitting;



@interface HMDHomeMetricsDispatcher : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)logIdentifier;
-(void)submitMigrationEventMetricsForModel:(id)arg0 reason:(id)arg1 ;
-(void)submitMigrationEventMetricsForModels:(id)arg0 reason:(id)arg1 ;


@end


#endif