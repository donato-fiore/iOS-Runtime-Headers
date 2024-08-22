// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLMDNSAGENT_H
#define PLMDNSAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLMDNSAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *startAdvertise; // ivar: _startAdvertise
@property (retain) PLXPCListenerOperatorComposition *startBrowse; // ivar: _startBrowse
@property (retain) PLXPCListenerOperatorComposition *startResolve; // ivar: _startResolve
@property (retain) PLXPCListenerOperatorComposition *stopAdvertise; // ivar: _stopAdvertise
@property (retain) PLXPCListenerOperatorComposition *stopBrowse; // ivar: _stopBrowse
@property (retain) PLXPCListenerOperatorComposition *stopResolve; // ivar: _stopResolve


+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventPointDefinitionsReceivedMDNSEvent;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventPointMDNS:(id)arg0 forEvent:(id)arg1 ;


@end


#endif