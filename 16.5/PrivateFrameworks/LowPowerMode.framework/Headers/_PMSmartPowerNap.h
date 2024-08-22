// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PMSMARTPOWERNAP_H
#define _PMSMARTPOWERNAP_H

@class NSXPCConnection, NSString;
@protocol _PMSmartPowerNapProtocol, _PMSmartPowerNapCallbackProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _PMSmartPowerNap : NSObject <_PMSmartPowerNapProtocol, _PMSmartPowerNapCallbackProtocol>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue; // ivar: _callback_queue
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property BOOL connection_interrupted; // ivar: _connection_interrupted
@property (nonatomic) unsigned char current_state; // ivar: _current_state
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier


-(id)init;
-(unsigned char)state;
-(unsigned char)syncState;
-(void)reRegister;
-(void)registerWithCallback:(id)arg0 callback:(id)arg1 ;
-(void)registerWithIdentifier:(id)arg0 ;
-(void)setSPNMotionAlarmStartThreshold:(unsigned int)arg0 ;
-(void)setSPNMotionAlarmThreshold:(unsigned int)arg0 ;
-(void)setSPNReentryCoolOffPeriod:(unsigned int)arg0 ;
-(void)setSPNReentryDelaySeconds:(unsigned int)arg0 ;
-(void)setSPNRequeryDelta:(unsigned int)arg0 ;
-(void)setState:(unsigned char)arg0 ;
-(void)syncStateWithHandler:(id)arg0 ;
-(void)unregister;
-(void)unregisterWithIdentifier:(id)arg0 ;
-(void)updateState:(unsigned char)arg0 ;


@end


#endif