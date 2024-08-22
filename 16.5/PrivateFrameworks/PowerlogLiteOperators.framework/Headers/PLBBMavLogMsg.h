// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMAVLOGMSG_H
#define PLBBMAVLOGMSG_H

@class NSArray, NSString, NSDate, NSNumber, NSMutableDictionary, NSMutableArray, NSDictionary;


#import "PLBasebandMessage.h"

@interface PLBBMavLogMsg : PLBasebandMessage

@property (retain) NSArray *ProtocolActivityHistogram; // ivar: _ProtocolActivityHistogram
@property (retain) NSArray *admOnOffState; // ivar: _admOnOffState
@property (retain) NSString *appsClockStateDurationStr; // ivar: _appsClockStateDurationStr
@property (retain) NSArray *appsPerfStateCountHist; // ivar: _appsPerfStateCountHist
@property (retain) NSArray *appsSleepVeto; // ivar: _appsSleepVeto
@property (retain) NSArray *bbActive; // ivar: _bbActive
@property (retain) NSDate *bbDate; // ivar: _bbDate
@property (retain) NSNumber *bbHwCurrTimeStamp; // ivar: _bbHwCurrTimeStamp
@property (retain) NSNumber *bbHwLastTimeStamp; // ivar: _bbHwLastTimeStamp
@property (retain) NSNumber *bbHwLogDurationInTicks; // ivar: _bbHwLogDurationInTicks
@property (retain) NSArray *bbHwModemAppAdmState; // ivar: _bbHwModemAppAdmState
@property (retain) NSArray *bbHwModemAppAdspClockState; // ivar: _bbHwModemAppAdspClockState
@property (retain) NSArray *bbHwModemAppAdspSpeed; // ivar: _bbHwModemAppAdspSpeed
@property (retain) NSArray *bbHwModemAppAdspState; // ivar: _bbHwModemAppAdspState
@property (retain) NSArray *bbHwModemAppMdmSpeed; // ivar: _bbHwModemAppMdmSpeed
@property (retain) NSArray *bbHwModemAppMdmState; // ivar: _bbHwModemAppMdmState
@property (retain) NSArray *bbHwModemAppMdspClockState; // ivar: _bbHwModemAppMdspClockState
@property (retain) NSArray *bbHwModemAppMdspSpeed; // ivar: _bbHwModemAppMdspSpeed
@property (retain) NSArray *bbHwModemAppMdspState; // ivar: _bbHwModemAppMdspState
@property (retain) NSArray *bbHwModemAppQ6FwSpeed; // ivar: _bbHwModemAppQ6FwSpeed
@property (retain) NSArray *bbHwModemAppQ6SwSpeed; // ivar: _bbHwModemAppQ6SwSpeed
@property (retain) NSArray *bbHwModemAppQdspSpeed; // ivar: _bbHwModemAppQdspSpeed
@property (retain) NSNumber *bbHwMsgType; // ivar: _bbHwMsgType
@property (retain) NSArray *bbHwPeripheralGPSState; // ivar: _bbHwPeripheralGPSState
@property (retain) NSArray *bbHwPeripheralSPIState; // ivar: _bbHwPeripheralSPIState
@property (retain) NSArray *bbHwPeripheralUARTState; // ivar: _bbHwPeripheralUARTState
@property (retain) NSArray *bbHwPeripheralUSBState; // ivar: _bbHwPeripheralUSBState
@property (retain) NSArray *bbHwProcArmPerfState; // ivar: _bbHwProcArmPerfState
@property (retain) NSArray *bbHwProcSystemState; // ivar: _bbHwProcSystemState
@property (retain) NSNumber *bbHwRev; // ivar: _bbHwRev
@property (retain) NSArray *bbHwSleepVetoClientListArm; // ivar: _bbHwSleepVetoClientListArm
@property (retain) NSArray *bbHwSleepVetoClientListQdsp; // ivar: _bbHwSleepVetoClientListQdsp
@property (retain) NSNumber *bbHwStatsLength; // ivar: _bbHwStatsLength
@property (retain) NSNumber *bbHwStatsLevel; // ivar: _bbHwStatsLevel
@property (retain) NSNumber *bbHwStatsType; // ivar: _bbHwStatsType
@property (retain) NSNumber *bbSeqNum; // ivar: _bbSeqNum
@property (retain) NSNumber *bbSwRev; // ivar: _bbSwRev
@property (retain) NSNumber *bbTimeCal; // ivar: _bbTimeCal
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSNumber *cxoShutDownCount; // ivar: _cxoShutDownCount
@property (retain) NSNumber *cxoShutDownDuration; // ivar: _cxoShutDownDuration
@property (retain) NSArray *gpsDPOBin; // ivar: _gpsDPOBin
@property (retain) NSArray *gpsDPOOnOff; // ivar: _gpsDPOOnOff
@property (retain) NSArray *gpsOnOff; // ivar: _gpsOnOff
@property (retain) NSMutableArray *groupArrEntries; // ivar: _groupArrEntries
@property (retain) NSMutableDictionary *groupDict; // ivar: _groupDict
@property (retain) NSString *groupEntryKey; // ivar: _groupEntryKey
@property (retain) NSString *groupID; // ivar: _groupID
@property (retain) NSArray *hsicStateSleepVetoNum; // ivar: _hsicStateSleepVetoNum
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSArray *lpassOnOffState; // ivar: _lpassOnOffState
@property (retain) NSArray *mcpmVetoNumHistogram; // ivar: _mcpmVetoNumHistogram
@property (retain) NSArray *mdspConfigCount; // ivar: _mdspConfigCount
@property (retain) NSString *mpssClockStateDurationStr; // ivar: _mpssClockStateDurationStr
@property (retain) NSNumber *mpssCxoShutDownCount; // ivar: _mpssCxoShutDownCount
@property (retain) NSNumber *mpssCxoShutDownDuration; // ivar: _mpssCxoShutDownDuration
@property (retain) NSArray *mpssSleepVeto; // ivar: _mpssSleepVeto
@property (retain) NSArray *npaVetoClientNumHistogram; // ivar: _npaVetoClientNumHistogram
@property (retain) NSNumber *npaVetoMask; // ivar: _npaVetoMask
@property (retain) NSArray *pcieStateHistogram; // ivar: _pcieStateHistogram
@property (retain) NSArray *protocolStateHist; // ivar: _protocolStateHist
@property (retain) NSDictionary *protocolStateHistDict; // ivar: _protocolStateHistDict
@property (retain) NSArray *qdspConfigCount; // ivar: _qdspConfigCount
@property (retain) NSNumber *radioTech; // ivar: _radioTech
@property (retain) NSNumber *rpmVDDMinDuration; // ivar: _rpmVDDMinDuration
@property (retain) NSNumber *rpmVDDMinEnterCnt; // ivar: _rpmVDDMinEnterCnt
@property (retain) NSNumber *rpmXOShutCnt; // ivar: _rpmXOShutCnt
@property (retain) NSNumber *rpmXOShutDuration; // ivar: _rpmXOShutDuration
@property (retain) NSArray *rssiModeCount; // ivar: _rssiModeCount
@property (retain) NSArray *rx0RssiPowerHist; // ivar: _rx0RssiPowerHist
@property (retain) NSArray *rx0SQAPowerHist; // ivar: _rx0SQAPowerHist
@property (retain) NSArray *rx1RssiPowerHist; // ivar: _rx1RssiPowerHist
@property (retain) NSArray *rx1SQAPowerHist; // ivar: _rx1SQAPowerHist
@property (retain) NSNumber *rxTicks; // ivar: _rxTicks
@property (retain) NSArray *spiOnOffState; // ivar: _spiOnOffState
@property (retain) NSArray *txPowerHist; // ivar: _txPowerHist
@property (retain) NSArray *txPowerHist1x; // ivar: _txPowerHist1x
@property (retain) NSArray *txPowerHistEVDO; // ivar: _txPowerHistEVDO
@property (retain) NSNumber *txTicks; // ivar: _txTicks
@property (retain) NSArray *uartOnOffState; // ivar: _uartOnOffState
@property (retain) NSArray *usbStateCountHist; // ivar: _usbStateCountHist


+(id)entryEventBackwardMav1BBHwOtherPerRAT;
+(id)entryEventBackwardMavBBHwOther;
+(id)entryEventBackwardMavBBHwOtherPerRAT;
+(id)entryEventMavBBMav10HwOther;
+(id)entryEventMavBBMav13HwOther;
+(id)entryEventMavBBMav16BHwOther;
+(id)entryEventMavBBMav16HwOther;
+(id)entryEventMavBBMav1HwOther;
+(id)entryEventMavBBMav2HwOther;
+(id)entryEventMavBBMav4HwOther;
+(id)getNameBBMavHwOther;
-(id)init;
-(id)internaLogEventBackwardBBMav1HwOtherPerRAT;
-(id)internaLogEventBackwardBBMavHwOtherPerRAT;
-(id)logEventBackwardGrpEntriesBBMav1HwOtherPerRAT;
-(id)logEventBackwardGrpEntriesBBMavHwOtherPerRAT;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)addToGroupPLBBMav10HwOther;
-(void)addToGroupPLBBMav13HwOther;
-(void)addToGroupPLBBMav16BHwOther;
-(void)addToGroupPLBBMav16HwOther;
-(void)addToGroupPLBBMav1HwOther;
-(void)addToGroupPLBBMav2HwOther;
-(void)addToGroupPLBBMav4HwOther;
-(void)addToGroupPLBBMavHwEntry:(id)arg0 withEntryKey:(id)arg1 ;
-(void)addToGroupPLBBMavHwOther;
-(void)appendToError:(id)arg0 ;
-(void)logEventBackwardGrpEntriesBBMav10Hw;
-(void)logEventBackwardGrpEntriesBBMav13Hw;
-(void)logEventBackwardGrpEntriesBBMav16Hw;
-(void)logEventBackwardGrpEntriesBBMavHw;
-(void)logEventBackwardMav10BBHwOther;
-(void)logEventBackwardMav13BBHwOther;
-(void)logEventBackwardMav16BBBHwOther;
-(void)logEventBackwardMav16BBHwOther;
-(void)logEventBackwardMav1BBHwOtherPerRAT;
-(void)logEventBackwardMavBBHwOther;
-(void)logEventBackwardMavBBHwOtherPerRAT;
-(void)logGrpEntriesMavBBHwOtherPerRat;
-(void)populateEntryBBMav10HwOther:(id)arg0 ;
-(void)populateEntryBBMav13HwOther:(id)arg0 ;
-(void)populateEntryBBMav16BHwOther:(id)arg0 ;
-(void)populateEntryBBMav16HwOther:(id)arg0 ;
-(void)populateEntryBBMav1HwOtherPerRAT:(id)arg0 ;
-(void)populateEntryBBMav2HwOther:(id)arg0 ;
-(void)populateEntryBBMav4HwOther:(id)arg0 ;
-(void)populateEntryBBMavHwOther:(id)arg0 ;
-(void)populateEntryBBMavHwOtherPerRAT:(id)arg0 ;
-(void)refreshBBMav10HwOther;
-(void)refreshBBMav13HwOther;
-(void)refreshBBMav16BHwOther;
-(void)refreshBBMav16HwOther;
-(void)refreshBBMav2HwOther;
-(void)refreshBBMav4HwOther;
-(void)refreshMav1BBHwOtherPerRAT;
-(void)refreshMavBBHwOther;
-(void)refreshMavBBHwOtherPerRAT;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setDate:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;
-(void)setLogDuration:(id)arg0 ;
-(void)setMavBBHwValue:(id)arg0 forKey:(id)arg1 ;
-(void)setRat:(id)arg0 ;
-(void)setTxPwr:(id)arg0 ;
-(void)setTxPwrArray:(id)arg0 ;
-(void)setType:(id)arg0 ;


@end


#endif