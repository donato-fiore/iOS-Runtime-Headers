// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDAPPLEMEDIAACCESSORIESSTATEMANAGERMETRICSDISPATCHER_H
#define HMDAPPLEMEDIAACCESSORIESSTATEMANAGERMETRICSDISPATCHER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, HMMLogEventSubmitting;



@interface HMDAppleMediaAccessoriesStateManagerMetricsDispatcher : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 ;
-(id)logIdentifier;
-(void)submitMatchingIdentifierEventWithMatchingCount:(NSInteger)arg0 ;
-(void)submitMatchingIdentifierRemovalEventWithRemovalCount:(NSInteger)arg0 ;


@end


#endif