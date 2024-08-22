// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBMAV10HWMSGPARSER_H
#define PLBBMAV10HWMSGPARSER_H



#import "PLMav7BasebandHardwareMessage.h"

@interface PLBBMav10HwMsgParser : PLMav7BasebandHardwareMessage

@property (nonatomic) *? appsNew; // ivar: _appsNew
@property (nonatomic) *? apps_sleepNew; // ivar: _apps_sleepNew
@property (nonatomic) *? mcpm_sleep_vetoNew; // ivar: _mcpm_sleep_vetoNew
@property (nonatomic) *? mpss_sleepNew; // ivar: _mpss_sleepNew
@property (nonatomic) *? qdspNew; // ivar: _qdspNew
@property (nonatomic) *? rf1x; // ivar: _rf1x
@property (nonatomic) *? rfGSM; // ivar: _rfGSM
@property (nonatomic) *? rfHDR; // ivar: _rfHDR
@property (nonatomic) *? rfLTE; // ivar: _rfLTE
@property (nonatomic) *? rfOOS; // ivar: _rfOOS
@property (nonatomic) *? rfTDS; // ivar: _rfTDS
@property (nonatomic) *? rfWCDMA; // ivar: _rfWCDMA
@property (nonatomic) *? rpmNew; // ivar: _rpmNew


-(BOOL)parseData:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 ;
-(void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 oftype:(int)arg1 withData:(char *)arg2 ;
-(void)logAPPSWithLogger:(id)arg0 ;
-(void)logHwRF1xWithLogger:(id)arg0 ;
-(void)logHwRFGSMWithLogger:(id)arg0 ;
-(void)logHwRFHDRWithLogger:(id)arg0 ;
-(void)logHwRFLTEWithLogger:(id)arg0 ;
-(void)logHwRFOOSWithLogger:(id)arg0 ;
-(void)logHwRFTDSWithLogger:(id)arg0 ;
-(void)logHwRFWCDMAWithLogger:(id)arg0 ;
-(void)logMPSSWithLogger:(id)arg0 ;
-(void)logRPMWithLogger:(id)arg0 ;
-(void)logSleepVetoWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;


@end


#endif