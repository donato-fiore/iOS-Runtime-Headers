// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTHERMALMONITORSERVICE_H
#define PLTHERMALMONITORSERVICE_H

@class PLService, PLEntryNotificationOperatorComposition, PLXPCResponderOperatorComposition;



@interface PLThermalMonitorService : PLService

@property (retain) PLEntryNotificationOperatorComposition *smcNotification; // ivar: _smcNotification
@property (retain) PLXPCResponderOperatorComposition *sysdiagnoseResponder; // ivar: _sysdiagnoseResponder


+(void)load;
-(id)handleSysdiagnoseCallback:(id)arg0 ;
-(id)init;
-(void)handleSMCCallback:(id)arg0 ;
-(void)initOperatorDependancies;
-(void)performLogging:(id)arg0 ;


@end


#endif