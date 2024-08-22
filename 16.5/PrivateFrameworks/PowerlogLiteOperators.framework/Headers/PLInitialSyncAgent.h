// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLINITIALSYNCAGENT_H
#define PLINITIALSYNCAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLInitialSyncAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler; // ivar: _xpcHandler


+(id)entryEventIntervalDefinitions;
+(void)load;
-(void)initOperatorDependancies;
-(void)logInitialSyncActivityFromEvent:(id)arg0 ;
-(void)logInitialSyncFromEvent:(id)arg0 ;


@end


#endif