// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMAV5BASEBANDHARDWAREMESSAGE_H
#define PLMAV5BASEBANDHARDWAREMESSAGE_H



#import "PLMav4BasebandHardwareMessage.h"

@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage {
    *_PLMav5BasebandHWStatsSleep _mav5_mpss_sleep;
    *_PLMav5BasebandHWMPSSSleepVeto _mav5_mpss_sleep_veto;
}


@property (nonatomic) *_PLMav5BasebandHWStatsAPPSPerf apps; // ivar: _mav5_apps
@property (nonatomic) *_PLMav5BasebandHWStatsSleep apps_sleep; // ivar: _mav5_apps_sleep
@property (nonatomic) *_PLMav5BasebandHWAPPSSleepVeto apps_sleep_veto; // ivar: _mav5_apps_sleep_veto
@property (nonatomic) *_PLMav5BasebandHWClocksDuration clock; // ivar: _mav5_clock
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats gps_dpo; // ivar: _mav5_gps_dpo
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats lpass; // ivar: _mav5_lpass
@property (nonatomic) *_PLMav5BasebandHWStatsMDSP mdsp; // ivar: _mav5_mdsp
@property (nonatomic) *_PLMav5BasebandHWStatsSleep mpss_sleep; // ivar: _mav4_mpss_sleep
@property (nonatomic) *_PLMav5BasebandHWMPSSSleepVeto mpss_sleep_veto; // ivar: _mav4_mpss_sleep_veto
@property (nonatomic) *_PLMav5BasebandHWStatsProtocol protocol; // ivar: _mav5_protocol
@property (nonatomic) *_PLMav5BasebandHWStatsQDSP qdsp; // ivar: _mav5_qdsp
@property (nonatomic) *_PLMav5BasebandHWStatsRPM rpm; // ivar: _mav5_rpm
@property (nonatomic) *_PLMav5BasebandHWStatsRX rx; // ivar: _mav5_rx
@property (nonatomic) *_PLMav5BasebandHWStatsRXSQA rx_sqa; // ivar: _mav5_rx_sqa
@property (nonatomic) *_PLMav5BasebandHWStatsTX tx; // ivar: _mav5_tx
@property (nonatomic) *_PLMav5BasebandHWStatsUSB usb; // ivar: _mav5_usb


-(id)indexToRAT:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)formatDurationandCount:(unsigned int)arg0 withCount:(unsigned int)arg1 inString:(id)arg2 ;
-(void)logAPPSWithLogger:(id)arg0 ;
-(void)logClockWithLogger:(id)arg0 ;
-(void)logLPASSWithLogger:(id)arg0 ;
-(void)logModemAppWithLogger:(id)arg0 ;
-(void)logPeripheralsWithLogger:(id)arg0 ;
-(void)logProtocolWithLogger:(id)arg0 withCount:(unsigned int)arg1 ;
-(void)logRFWithLogger2:(id)arg0 ;
-(void)logRPMWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif