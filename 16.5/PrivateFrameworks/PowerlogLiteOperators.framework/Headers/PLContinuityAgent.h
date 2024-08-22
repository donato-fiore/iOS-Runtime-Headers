// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLCONTINUITYAGENT_H
#define PLCONTINUITYAGENT_H

@class PLAgent;



@interface PLContinuityAgent : PLAgent



+(NSInteger)unlockPeerTypeStringToEnum:(id)arg0 ;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitionAutoUnlock;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;


@end


#endif