// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLVIDEOAGENT_H
#define PLVIDEOAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLVideoAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cMCrabsListener; // ivar: _cMCrabsListener
@property (retain) PLXPCListenerOperatorComposition *cMFileListener; // ivar: _cMFileListener
@property (retain) PLXPCListenerOperatorComposition *cMHlsListener; // ivar: _cMHlsListener
@property (retain) PLXPCListenerOperatorComposition *groupSessionListener; // ivar: _groupSessionListener
@property (retain) PLXPCListenerOperatorComposition *notification; // ivar: _notification
@property (retain) PLXPCListenerOperatorComposition *vTSessionListener; // ivar: _vTSessionListener


+(id)defaults;
+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventIntervalDefinitionGroupSession;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(id)stateEnumForStateString:(id)arg0 ;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventBackwardCMCrabsWithEntry:(id)arg0 ;
-(void)logEventBackwardCMFileWithEntry:(id)arg0 ;
-(void)logEventBackwardCMHlsWithEntry:(id)arg0 ;
-(void)logEventBackwardVTSessionWithEntry:(id)arg0 ;
-(void)logEventForwardVideoWithEntry:(id)arg0 ;
-(void)logEventIntervalGroupSession:(id)arg0 ;


@end


#endif