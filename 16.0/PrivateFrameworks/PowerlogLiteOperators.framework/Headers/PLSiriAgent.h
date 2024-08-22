// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLSIRIAGENT_H
#define PLSIRIAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLSiriAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *siriConfigListener; // ivar: _siriConfigListener


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionSiriConfig;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)log;
-(void)logEventForwardSiriConfig:(id)arg0 ;


@end


#endif