// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSIRIAGENT_H
#define PLSIRIAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *dictationConnectionListener; // ivar: _dictationConnectionListener
@property (retain) PLXPCListenerOperatorComposition *siriConfigListener; // ivar: _siriConfigListener
@property (retain) PLXPCListenerOperatorComposition *siriWakesListener; // ivar: _siriWakesListener


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionDictationConnection;
+(id)entryEventForwardDefinitionSiriConfig;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionSiriWakes;
+(id)entryEventPointDefinitions;
+(void)load;
-(NSUInteger)convertMode:(id)arg0 ;
-(NSUInteger)convertRecognition:(id)arg0 ;
-(NSUInteger)convertSiriEvent:(id)arg0 ;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventForwardDictationConnection:(id)arg0 ;
-(void)logEventForwardSiriConfig:(id)arg0 ;
-(void)logEventPointSiriWakes:(id)arg0 ;


@end


#endif