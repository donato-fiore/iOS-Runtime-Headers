// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPUSHAGENT_H
#define PLPUSHAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, NSDate, NSMutableDictionary, PLTimer;



@interface PLPushAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *apsdConnectedListener; // ivar: _apsdConnectedListener
@property (retain) NSDate *detectionStartTime; // ivar: _detectionStartTime
@property (retain) PLXPCListenerOperatorComposition *messageReceivedListener; // ivar: _messageReceivedListener
@property (retain) PLXPCListenerOperatorComposition *messageSentListener; // ivar: _messageSentListener
@property NSUInteger numKeepAlives; // ivar: _numKeepAlives
@property (retain) NSMutableDictionary *pushUsageDict; // ivar: _pushUsageDict
@property (retain) PLXPCListenerOperatorComposition *receivedPushListener; // ivar: _receivedPushListener
@property (retain) PLTimer *runTimeAggregatorTimer; // ivar: _runTimeAggregatorTimer
@property (retain) PLXPCListenerOperatorComposition *sentKeepAliveListener; // ivar: _sentKeepAliveListener
@property (retain) PLXPCListenerOperatorComposition *sentPushListener; // ivar: _sentPushListener
@property (retain) PLXPCListenerOperatorComposition *suppressedPushesListener; // ivar: _suppressedPushesListener


+(BOOL)isHighPriorityPushEntry:(id)arg0 ;
+(id)bundleIdFromTopic:(id)arg0 ;
+(id)defaults;
+(id)entryAggregateDefinitionAPSDConnected;
+(id)entryAggregateDefinitionSentPushes;
+(id)entryAggregateDefinitionSuppressedPushes;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionMessage;
+(id)entryEventPointDefinitionMessageReceived;
+(id)entryEventPointDefinitionMessageSent;
+(id)entryEventPointDefinitions;
+(id)entryEventPointDefinitionsAPSDConnectedEvent;
+(id)entryEventPointDefinitionsReceivedPush;
+(id)entryEventPointDefinitionsSentKeepAlive;
+(id)entryEventPointDefinitionsSentPush;
+(id)replaceConnectionTypeWithEnum:(id)arg0 ;
+(void)load;
-(id)init;
-(void)accountReceivedPushWithEntry:(id)arg0 ;
-(void)checkPushUsage:(id)arg0 withPLEntry:(id)arg1 ;
-(void)handleMessageEvent:(id)arg0 isSentEvent:(BOOL)arg1 ;
-(void)initOperatorDependancies;
-(void)log;
-(void)logAggregateSuppressedPushes:(id)arg0 ;
-(void)sendEnergyIssueSignatureNotification:(id)arg0 withThreshold:(CGFloat)arg1 ;


@end


#endif