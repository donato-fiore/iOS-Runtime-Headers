// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDPRIMARYRESIDENTDISCOVERYOPERATION_H
#define HMDPRIMARYRESIDENTDISCOVERYOPERATION_H

@class HMFOperation, NSArray, NSEnumerator, HMFFuture, NSUUID, NSString, NSError, HMFTimer;
@protocol HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryOperation;


#import "HMDResidentDevice.h"
#import "HMDHome.h"
#import "HMDMessageDispatcher.h"

@interface HMDPrimaryResidentDiscoveryOperation : HMFOperation <HMFLogging, HMFTimerDelegate, HMDPrimaryResidentDiscoveryOperation>



@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly) NSArray *candidateDestinations; // ivar: _candidateDestinations
@property (retain) NSEnumerator *candidateDestinationsEnumerator; // ivar: _candidateDestinationsEnumerator
@property (readonly) HMFFuture *completionFuture; // ivar: _completionFuture
@property (readonly) HMDResidentDevice *currentPrimaryResident; // ivar: _currentPrimaryResident
@property (readonly) NSUUID *currentPrimaryResidentGenerationID; // ivar: _currentPrimaryResidentGenerationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (readonly) NSUInteger hash;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMDMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) id *responseHandler; // ivar: _responseHandler
@property (retain) HMFTimer *sendToNextDestinationTimer; // ivar: _sendToNextDestinationTimer
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)main;
-(void)run;
-(void)timerDidFire:(id)arg0 ;


@end


#endif