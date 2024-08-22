// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSECURESERVICEAGENT_H
#define PLSECURESERVICEAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition, PLTimer, NSString;



@interface PLSecureServiceAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *connectionListener; // ivar: _connectionListener
@property (retain) PLXPCListenerOperatorComposition *daemonLaunchListener; // ivar: _daemonLaunchListener
@property (retain) PLXPCListenerOperatorComposition *deviceIntentListener; // ivar: _deviceIntentListener
@property (retain) PLXPCListenerOperatorComposition *disconnectionListener; // ivar: _disconnectionListener
@property (retain) PLTimer *entriesPerHourTimer; // ivar: _entriesPerHourTimer
@property NSInteger numBTConn; // ivar: _numBTConn
@property NSInteger numEntries; // ivar: _numEntries
@property NSInteger periodicReportCount; // ivar: _periodicReportCount
@property (retain) PLXPCListenerOperatorComposition *periodicReportListener; // ivar: _periodicReportListener
@property NSInteger prevActiveKeys; // ivar: _prevActiveKeys
@property NSInteger previousEvent; // ivar: _previousEvent
@property (retain) NSString *previousHash; // ivar: _previousHash


+(BOOL)isSecureServiceSupported;
+(id)defaults;
+(id)entryEventPointDefinitionConnectionState;
+(id)entryEventPointDefinitionSummary;
+(id)entryEventPointDefinitions;
+(void)load;
-(id)init;
-(void)initOperatorDependancies;
-(void)log;
-(void)logEventPointConnectionState:(id)arg0 withEvent:(NSInteger)arg1 ;
-(void)logEventPointPeriodicReport:(id)arg0 ;


@end


#endif