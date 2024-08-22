// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDMEDIADESTINATIONCONTROLLERMETRICSEVENTDISPATCHER_H
#define HMDMEDIADESTINATIONCONTROLLERMETRICSEVENTDISPATCHER_H

@class HMFObject, HMFUnfairLock, NSString, NSUUID, NSArray;
@protocol HMFLogging, HMDLogEventDailyProvider, HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;


#import "HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent.h"

@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject <HMFLogging, HMDLogEventDailyProvider>

 {
    HMFUnfairLock *_lock;
}


@property (weak) NSObject<HMDMediaDestinationControllerMetricsEventDispatcherDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;
@property (retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent; // ivar: _trackedStagedDestinationIdentifierEvent


+(id)logCategory;
-(id)dataSourceDestinationTypeWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 logEventSubmitter:(id)arg1 dataSource:(id)arg2 ;
-(id)logIdentifier;
-(void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg0 ;
-(void)submitDailySetDestinationEvent;
-(void)submitFailureEventWithEventErrorCode:(NSUInteger)arg0 error:(id)arg1 ;
-(void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg0 existingDestinationIdentifier:(id)arg1 ;
-(void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg0 ;
-(void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg0 existingDestinationIdentifier:(id)arg1 ;
-(void)triggerLogEventProviderDailySubmissionBlocks;


@end


#endif