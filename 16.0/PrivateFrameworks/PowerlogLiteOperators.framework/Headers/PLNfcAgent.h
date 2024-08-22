// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLNFCAGENT_H
#define PLNFCAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, NSDate, PLEntryNotificationOperatorComposition, PLTimer;



@interface PLNfcAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cardNotification; // ivar: _cardNotification
@property (retain) PLXPCListenerOperatorComposition *fieldNotification; // ivar: _fieldNotification
@property (retain) NSDate *lastAccessoryPowerCountersLogTime; // ivar: _lastAccessoryPowerCountersLogTime
@property (retain) NSDate *lastPowerCountersLogTime; // ivar: _lastPowerCountersLogTime
@property (retain) PLEntryNotificationOperatorComposition *nfcAccessoryPowerCounterNotification; // ivar: _nfcAccessoryPowerCounterNotification
@property int nfcConnectionRetryCount; // ivar: _nfcConnectionRetryCount
@property (retain) PLTimer *nfcConnectionRetryTimer; // ivar: _nfcConnectionRetryTimer
@property (retain) PLEntryNotificationOperatorComposition *nfcPowerCountersNotification; // ivar: _nfcPowerCountersNotification
@property CGFloat onPower; // ivar: _onPower
@property (retain) PLXPCListenerOperatorComposition *transactionNotification; // ivar: _transactionNotification
@property (retain) PLXPCListenerOperatorComposition *tsmCommunicationNotification; // ivar: _tsmCommunicationNotification


+(id)defaults;
+(id)entryEventForwardDefinitionCard;
+(id)entryEventForwardDefinitionField;
+(id)entryEventForwardDefinitionLPEM;
+(id)entryEventForwardDefinitionTSMCommunication;
+(id)entryEventForwardDefinitionTransaction;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionAccessoryPower;
+(id)entryEventIntervalDefinitions;
+(id)parseLPEMFromData:(id)arg0 ;
+(void)load;
-(id)init;
-(unsigned int)getNFCHarwareState;
-(void)fieldChangedWithEntry:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)logEventForwardLPEM;
-(void)retrieveAndLogNfcAccessoryPowerCountersWithRetry:(BOOL)arg0 ;
-(void)retrieveAndLogNfcPowerCountersWithRetry:(BOOL)arg0 ;
-(void)setUpNfcPowerCounterRetrieval;
-(void)setupLPEMCounter;
-(void)setupNfcAccessoryPowerCounterRetrieval;


@end


#endif