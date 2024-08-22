// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBBMAV13HWMSGPARSER_H
#define PLBBMAV13HWMSGPARSER_H



#import "PLMav7BasebandHardwareMessage.h"

@interface PLBBMav13HwMsgParser : PLMav7BasebandHardwareMessage

@property (nonatomic) *? appsPerf; // ivar: _appsPerf
@property (nonatomic) *? appsSleep; // ivar: _appsSleep
@property (nonatomic) *? appsSleepVeto; // ivar: _appsSleepVeto
@property (nonatomic) *? gpsDpoBins; // ivar: _gpsDpoBins
@property (nonatomic) *? gpsDpoState; // ivar: _gpsDpoState
@property (nonatomic) *? gpsState; // ivar: _gpsState
@property (nonatomic) *? lpassState; // ivar: _lpassState
@property (nonatomic) *? mcpmSleepVeto; // ivar: _mcpmSleepVeto
@property (nonatomic) *? mpssSleep; // ivar: _mpssSleep
@property (nonatomic) *? mpssSleepVeto; // ivar: _mpssSleepVeto
@property (nonatomic) char * optimMaskArray; // ivar: _optimMaskArray
@property (nonatomic) *? pcieState; // ivar: _pcieState
@property (nonatomic) *? protoStateC2K; // ivar: _protoStateC2K
@property (nonatomic) *? protoStateGSM; // ivar: _protoStateGSM
@property (nonatomic) *? protoStateHDR; // ivar: _protoStateHDR
@property (nonatomic) *? protoStateLTE; // ivar: _protoStateLTE
@property (nonatomic) *? protoStateTDS; // ivar: _protoStateTDS
@property (nonatomic) *? protoStateWCDMA; // ivar: _protoStateWCDMA
@property (nonatomic) *? protocolActive; // ivar: _protocolActive
@property (nonatomic) *? protocolState; // ivar: _protocolState
@property (nonatomic) *? qdspSpeed; // ivar: _qdspSpeed
@property (nonatomic) *? rfData; // ivar: _rfData
@property (nonatomic) *? rfData1xEVDO; // ivar: _rfData1xEVDO
@property (nonatomic) *? rfDataC2K; // ivar: _rfDataC2K
@property (nonatomic) *? rfDataGSM; // ivar: _rfDataGSM
@property (nonatomic) *? rfDataLTE; // ivar: _rfDataLTE
@property (nonatomic) *? rfDataTDS; // ivar: _rfDataTDS
@property (nonatomic) *? rfDataWCDMA; // ivar: _rfDataWCDMA
@property (nonatomic) *? rfEnh1xEVDO; // ivar: _rfEnh1xEVDO
@property (nonatomic) *? rfEnhC2K; // ivar: _rfEnhC2K
@property (nonatomic) *? rfEnhGSM; // ivar: _rfEnhGSM
@property (nonatomic) *? rfEnhLTE; // ivar: _rfEnhLTE
@property (nonatomic) *? rfEnhOOS; // ivar: _rfEnhOOS
@property (nonatomic) *? rfEnhTDS; // ivar: _rfEnhTDS
@property (nonatomic) *? rfEnhWCDMA; // ivar: _rfEnhWCDMA
@property (nonatomic) *? rfLTE; // ivar: _rfLTE
@property (nonatomic) *? rpmData; // ivar: _rpmData


+(id)optimMaskMappings;
-(BOOL)parseData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 ;
-(void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 oftype:(int)arg1 withData:(char *)arg2 ;
-(void)logAppsPerfWithLogger:(id)arg0 ;
-(void)logHwRF1xWithLogger:(id)arg0 ;
-(void)logHwRFEnhLTEWithLogger:(id)arg0 ;
-(void)logHwRFEnhWCDMAWithLogger:(id)arg0 ;
-(void)logHwRFGSMWithLogger:(id)arg0 ;
-(void)logHwRFHDRWithLogger:(id)arg0 ;
-(void)logHwRFOOSWithLogger:(id)arg0 ;
-(void)logHwRFTDSWithLogger:(id)arg0 ;
-(void)logLPASSWithLogger:(id)arg0 ;
-(void)logLegacyRFWithLogger:(id)arg0 usingData:(struct ? *)arg1 forRAT:(unsigned int)arg2 ;
-(void)logMPSSWithLogger:(id)arg0 ;
-(void)logPcieWithLogger:(id)arg0 ;
-(void)logPeripheralsWithLogger:(id)arg0 ;
-(void)logProtocolOnlyWithLogger:(id)arg0 forRAT:(unsigned int)arg1 ;
-(void)logProtocolWithLogger:(id)arg0 container:(id)arg1 state:(struct ? *)arg2 forRAT:(unsigned int)arg3 ;
-(void)logRPMWithLogger:(id)arg0 ;
-(void)logSleepVetoWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif