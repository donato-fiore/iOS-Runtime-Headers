// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLMAV7BASEBANDHARDWAREMESSAGE_H
#define PLMAV7BASEBANDHARDWAREMESSAGE_H

@class NSMutableString;


#import "PLMav5BasebandHardwareMessage.h"

@interface PLMav7BasebandHardwareMessage : PLMav5BasebandHardwareMessage

@property (nonatomic) *_PLMav7BasebandHWStatsClockStateMask apps_clock_count_mask; // ivar: _apps_clock_count_mask
@property (retain, nonatomic) NSMutableString *apps_clock_duration; // ivar: _apps_clock_duration
@property (nonatomic) *_PLMav7BasebandHWStatsClockStateMask apps_clock_duration_mask; // ivar: _apps_clock_duration_mask
@property (nonatomic) *_PLMav7BasebandGPSDPOBin gps_dpo_bins; // ivar: _gps_dpo_bins
@property (nonatomic) *_PLMav7BasebandHWStatsHSICState hsic; // ivar: _hsic
@property (nonatomic) *_PLMav7BasebandHWStatsMCPMVeto mcpm_sleep_veto; // ivar: _mcpm_sleep_veto
@property (nonatomic) *_PLMav7BasebandHWStatsClockStateMask mpss_clock_count_mask; // ivar: _mpss_clock_count_mask
@property (retain, nonatomic) NSMutableString *mpss_clock_duration; // ivar: _mpss_clock_duration
@property (nonatomic) *_PLMav7BasebandHWStatsClockStateMask mpss_clock_duration_mask; // ivar: _mpss_clock_duration_mask
@property (nonatomic) *_PLMav7BasebandHWStatsNPAVeto npa_sleep_veto; // ivar: _npa_sleep_veto
@property (nonatomic) *_PLMav7BasebandHWStatsProtocol protocol; // ivar: _protocol
@property (nonatomic) *_PLMav7BasebandHWStatsRFTech rf; // ivar: _rf


-(id)indexToRAT:(NSUInteger)arg0 ;
-(id)initWithData:(id)arg0 ;
-(int)GetClockCount:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 ;
-(void)SetClocks:(struct _PLMav7BasebandHWStatsClockStateMask *)arg0 oftype:(int)arg1 withData:(char *)arg2 ;
-(void)logAPPSWithLogger:(id)arg0 ;
-(void)logClockWithLogger:(id)arg0 ;
-(void)logHSICWithLogger:(id)arg0 ;
-(void)logMPSSWithLogger:(id)arg0 ;
-(void)logPeripheralsWithLogger:(id)arg0 ;
-(void)logProtocolActiveWithLogger:(id)arg0 ;
-(void)logRFWithLogger2:(id)arg0 ;
-(void)logSleepVetoWithLogger:(id)arg0 ;
-(void)logWithLogger:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif