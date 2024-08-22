// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBLMDEBUGSERVICE_H
#define PLBLMDEBUGSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, PLTimer, NSMutableDictionary, PLXPCListenerOperatorComposition;



@interface PLBLMDebugService : PLService

@property (retain) PLEntryNotificationOperatorComposition *bbCallback; // ivar: _bbCallback
@property (retain) PLEntryNotificationOperatorComposition *btCallback; // ivar: _btCallback
@property (retain) PLTimer *debugTimers; // ivar: _debugTimers
@property (retain) PLEntryNotificationOperatorComposition *displayAPLCallback; // ivar: _displayAPLCallback
@property (retain) PLEntryNotificationOperatorComposition *ioreportCallback; // ivar: _ioreportCallback
@property (retain) PLEntryNotificationOperatorComposition *processmonitorCallback; // ivar: _processmonitorCallback
@property (retain) PLEntryNotificationOperatorComposition *processnetworkCallback; // ivar: _processnetworkCallback
@property (retain) NSMutableDictionary *triggers; // ivar: _triggers
@property (retain) PLEntryNotificationOperatorComposition *wifiCallback; // ivar: _wifiCallback
@property (retain) PLXPCListenerOperatorComposition *xpcListenerBLMDebugTrigger; // ivar: _xpcListenerBLMDebugTrigger


+(BOOL)isModelTriggerRun;
+(id)entryEventNoneDefinitionBLMDebug;
+(id)entryEventNoneDefinitions;
+(void)load;
-(CGFloat)energyForRootNodeID:(int)arg0 withRange:(struct _PLTimeIntervalRange )arg1 ;
-(id)Testservice:(id)arg0 ;
-(id)init;
-(id)logRailData:(int)arg0 withTriggerName:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange )arg2 ;
-(id)respondBLMDDebugQuery:(id)arg0 ;
-(void)debugTrigger;
-(void)initOperatorDependancies;
-(void)registerTrigger:(id)arg0 ;
-(void)triggerLoggersNow:(id)arg0 ;
-(void)triggerSelectorAtDate:(id)arg0 withSelector:(SEL)arg1 withUseInfo:(id)arg2 ;


@end


#endif