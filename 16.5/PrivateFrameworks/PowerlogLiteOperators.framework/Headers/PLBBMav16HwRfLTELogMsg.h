// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBBMAV16HWRFLTELOGMSG_H
#define PLBBMAV16HWRFLTELOGMSG_H

@class NSNumber, NSArray, NSMutableDictionary, NSString, NSMutableArray;


#import "PLBBMsgRoot.h"

@interface PLBBMav16HwRfLTELogMsg : PLBBMsgRoot

@property (retain) NSNumber *PCCBw; // ivar: _PCCBw
@property (retain) NSNumber *PCCFreq; // ivar: _PCCFreq
@property (retain) NSNumber *SCC1Bw; // ivar: _SCC1Bw
@property (retain) NSNumber *SCC1Freq; // ivar: _SCC1Freq
@property (retain) NSNumber *SCC2Bw; // ivar: _SCC2Bw
@property (retain) NSNumber *SCC2Freq; // ivar: _SCC2Freq
@property (retain) NSArray *actRxTxCnt; // ivar: _actRxTxCnt
@property (retain) NSNumber *ardRxDOff; // ivar: _ardRxDOff
@property (retain) NSArray *arxBaselinePCC; // ivar: _arxBaselinePCC
@property (retain) NSArray *arxBaselineSCC1; // ivar: _arxBaselineSCC1
@property (retain) NSArray *arxBaselineSCC2; // ivar: _arxBaselineSCC2
@property (retain) NSNumber *arxOffPCC; // ivar: _arxOffPCC
@property (retain) NSNumber *arxOffSCC1; // ivar: _arxOffSCC1
@property (retain) NSNumber *arxOffSCC2; // ivar: _arxOffSCC2
@property (retain) NSArray *arxQicePCC; // ivar: _arxQicePCC
@property (retain) NSArray *arxQiceSCC1; // ivar: _arxQiceSCC1
@property (retain) NSArray *arxQiceSCC2; // ivar: _arxQiceSCC2
@property (retain) NSArray *arxStateCnt; // ivar: _arxStateCnt
@property (retain) NSArray *bpeStats; // ivar: _bpeStats
@property (retain) NSArray *caSCCCnt; // ivar: _caSCCCnt
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSArray *dlTBSzCnt; // ivar: _dlTBSzCnt
@property (retain) NSNumber *dupMode; // ivar: _dupMode
@property (retain) NSString *error; // ivar: _error
@property (retain) NSMutableArray *groupArrEntries; // ivar: _groupArrEntries
@property (retain) NSString *groupEntryKey; // ivar: _groupEntryKey
@property (retain) NSString *groupID; // ivar: _groupID
@property (retain) NSArray *hsicPCC; // ivar: _hsicPCC
@property (retain) NSArray *hsicSCC1; // ivar: _hsicSCC1
@property (retain) NSArray *hsicSCC2; // ivar: _hsicSCC2
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration
@property (retain) NSArray *nlicStateCnt; // ivar: _nlicStateCnt
@property (retain) NSArray *rsrpConnCnt; // ivar: _rsrpConnCnt
@property (retain) NSArray *rsrpIdleCnt; // ivar: _rsrpIdleCnt
@property (retain) NSArray *sinrConnCnt; // ivar: _sinrConnCnt
@property (retain) NSArray *sinrIdleCnt; // ivar: _sinrIdleCnt
@property (retain) NSArray *sleepStateConnCnt; // ivar: _sleepStateConnCnt
@property (retain) NSArray *sleepStateIdleCnt; // ivar: _sleepStateIdleCnt
@property (retain) NSArray *txPwrCnt; // ivar: _txPwrCnt
@property (retain) NSNumber *uSleepPCCCnt; // ivar: _uSleepPCCCnt
@property (retain) NSNumber *uSleepSCC1Cnt; // ivar: _uSleepSCC1Cnt
@property (retain) NSNumber *uSleepSCC2Cnt; // ivar: _uSleepSCC2Cnt
@property (retain) NSArray *ulCaSCCCnt; // ivar: _ulCaSCCCnt


+(id)entryEventBackwardDefinitionBBMav16HwRfLTE;
-(id)init;
-(id)logEventBackwardBBMav16HwRfLTE;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateMav16Entry:(id)arg0 ;
-(void)refreshMav16BBRfLTE;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif