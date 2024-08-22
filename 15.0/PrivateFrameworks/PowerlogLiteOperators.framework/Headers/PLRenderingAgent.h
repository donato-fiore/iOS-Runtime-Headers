// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLRENDERINGAGENT_H
#define PLRENDERINGAGENT_H

@class PLAgent, NSString, NSNumber, PLXPCListenerOperatorComposition, FBSDisplayLayoutMonitor, PLEntryNotificationOperatorComposition;
@protocol FBSDisplayLayoutObserver;



@interface PLRenderingAgent : PLAgent <FBSDisplayLayoutObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *deviceIsPlugged; // ivar: _deviceIsPlugged
@property (retain) PLXPCListenerOperatorComposition *frameStatsListener; // ivar: _frameStatsListener
@property (readonly) NSUInteger hash;
@property unsigned int lastFrameCount; // ivar: _lastFrameCount
@property (retain) FBSDisplayLayoutMonitor *mainDisplayMonitor; // ivar: _mainDisplayMonitor
@property (retain) PLEntryNotificationOperatorComposition *pluggedInStateNotification; // ivar: _pluggedInStateNotification
@property (readonly) Class superclass;


+(id)entryAggregateDefinitions;
+(id)entryEventBackwardDefinitionFrameCount;
+(id)entryEventBackwardDefinitionFrameStats;
+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(BOOL)shouldLogFrameStats;
-(id)init;
-(void)dealloc;
-(void)disableCAScreenTelemetry;
-(void)enableCAScreenTelemetry;
-(void)handleConnectedChange:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)initTaskOperatorDependancies;
-(void)layoutMonitor:(id)arg0 didUpdateDisplayLayout:(id)arg1 withContext:(id)arg2 ;
-(void)log;
-(void)logEventBackwardFrameStats:(id)arg0 ;
-(void)logEventForwardFrameCount:(id)arg0 ;
-(void)logFrameCount:(unsigned int)arg0 forConnectedState:(BOOL)arg1 ;


@end


#endif