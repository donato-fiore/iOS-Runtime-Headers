// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMATTERTHIRDPARTYPAIRINGTAGPROCESSOR_H
#define HMDMATTERTHIRDPARTYPAIRINGTAGPROCESSOR_H

@class HMMLogEventTagProcessor, HMMStateTracker;


#import "HMDMatterThirdPartyPairingLogEvent.h"

@interface HMDMatterThirdPartyPairingTagProcessor : HMMLogEventTagProcessor

@property (readonly, nonatomic) HMDMatterThirdPartyPairingLogEvent *logEvent; // ivar: _logEvent
@property (nonatomic) NSUInteger startTime; // ivar: _startTime
@property (retain, nonatomic) HMMStateTracker *stateTracker; // ivar: _stateTracker


-(id)initWithSubmitter:(id)arg0 ;
-(id)tagProcessingBlocks;
-(void)closeSessionWithEvent:(id)arg0 ;
-(void)processAccessoryInfoEvent:(id)arg0 ;
-(void)processCASESanityCheckEvent:(id)arg0 ;
-(void)processCredentialsToClientEvent:(id)arg0 ;
-(void)processFirmwareVersionEvent:(id)arg0 ;
-(void)processLongestPairingState:(id)arg0 ;
-(void)processPairingErrorEvent:(id)arg0 ;
-(void)processPairingStartEvent:(id)arg0 ;
-(void)processPairingSuccessEvent:(id)arg0 ;
-(void)processPairingTransport:(id)arg0 ;
-(void)processStateChange:(id)arg0 ;
-(void)processThreadScanResultsEvent:(id)arg0 ;
-(void)processWiFiScanResultsEvent:(id)arg0 ;


@end


#endif