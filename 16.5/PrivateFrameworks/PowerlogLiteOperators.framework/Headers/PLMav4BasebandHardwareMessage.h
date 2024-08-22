// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMAV4BASEBANDHARDWAREMESSAGE_H
#define PLMAV4BASEBANDHARDWAREMESSAGE_H



#import "PLBasebandHardwareMessage.h"

@interface PLMav4BasebandHardwareMessage : PLBasebandHardwareMessage

@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats adm; // ivar: _mav4_adm
@property (nonatomic) *_PLMav4BasebandHWStatsARMPerf armPerf; // ivar: _mav4_armPerf
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats gps; // ivar: _mav4_gps
@property (nonatomic) *_PLMav4BasebandHWStatsHeader header; // ivar: _mav4_header
@property (readonly, nonatomic) unsigned short hw_rev;
@property (readonly, nonatomic) unsigned char level;
@property unsigned int logDuration; // ivar: _mav4_duration
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats mdm; // ivar: _mav4_mdm
@property (nonatomic) *_PLMav4BasebandHWStatsMDSP mdsp; // ivar: _mav4_mdsp
@property (nonatomic) *_PLMav4BasebandHWStatsQDSP qdsp; // ivar: _mav4_qdsp
@property (nonatomic) *_PLMav4BasebandHWStatsRX rx; // ivar: _mav4_rx
@property (nonatomic) *_PLMav4BasebandHWSleepVeto sleep_arm; // ivar: _mav4_sleep_arm
@property (nonatomic) *_PLMav4BasebandHWSleepVeto sleep_qdsp; // ivar: _mav4_sleep_qdsp
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats spi; // ivar: _mav4_spi
@property (readonly, nonatomic) unsigned short sw_rev;
@property (nonatomic) *_PLMav4BasebandHWStatsSystem system; // ivar: _mav4_system
@property (nonatomic) *_PLMav4BasebandHWStatsTX tx; // ivar: _mav4_tx
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats uart; // ivar: _mav4_uart
@property (nonatomic) *_PLMav4BasebandHWOnOffComponentStats usb; // ivar: _mav4_usb


-(BOOL)parseData:(id)arg0 ;
-(id)indexToRAT:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)logHeaderWithLogger:(id)arg0 ;
-(void)logModemAppWithLogger:(id)arg0 ;
-(void)logPeripheralsWithLogger:(id)arg0 ;
-(void)logProcessorWithLogger:(id)arg0 ;
-(void)logRFWithLogger2:(id)arg0 ;
-(void)logSleepWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif