// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBBMAVHWRFLTELOGMSG_H
#define PLBBMAVHWRFLTELOGMSG_H

@class NSArray, NSMutableDictionary, NSNumber, NSString, NSMutableArray;


#import "PLBBMsgRoot.h"

@interface PLBBMavHwRfLTELogMsg : PLBBMsgRoot

@property (retain) NSArray *actRxTxCnt; // ivar: _actRxTxCnt
@property (retain) NSArray *actRxTxPriCCCnt; // ivar: _actRxTxPriCCCnt
@property (retain) NSArray *actRxTxPriSecCCCnt; // ivar: _actRxTxPriSecCCCnt
@property (retain) NSArray *actRxTxSecCCCnt; // ivar: _actRxTxSecCCCnt
@property (retain) NSArray *arxStateCnt; // ivar: _arxStateCnt
@property (retain) NSArray *bpeStats; // ivar: _bpeStats
@property (retain) NSArray *caFreqInfo; // ivar: _caFreqInfo
@property (retain) NSArray *caPriCCCnt; // ivar: _caPriCCCnt
@property (retain) NSArray *caPriSecCCCnt; // ivar: _caPriSecCCCnt
@property (retain) NSArray *caSCCCnt; // ivar: _caSCCCnt
@property (retain) NSArray *caSecCCCnt; // ivar: _caSecCCCnt
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSArray *dlC0TBSzCnt; // ivar: _dlC0TBSzCnt
@property (retain) NSArray *dlC1TBSzCnt; // ivar: _dlC1TBSzCnt
@property (retain) NSNumber *dupMode; // ivar: _dupMode
@property (retain) NSString *error; // ivar: _error
@property (retain) NSMutableArray *groupArrEntries; // ivar: _groupArrEntries
@property (retain) NSString *groupEntryKey; // ivar: _groupEntryKey
@property (retain) NSString *groupID; // ivar: _groupID
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration
@property (retain) NSArray *nlicStateCnt; // ivar: _nlicStateCnt
@property (retain) NSArray *rsrpConnCnt; // ivar: _rsrpConnCnt
@property (retain) NSArray *rsrpIdleCnt; // ivar: _rsrpIdleCnt
@property (retain) NSArray *sinrConnCnt; // ivar: _sinrConnCnt
@property (retain) NSArray *sinrIdleCnt; // ivar: _sinrIdleCnt
@property (retain) NSArray *sleepStateCnt; // ivar: _sleepStateCnt
@property (retain) NSArray *sleepStateConnCnt; // ivar: _sleepStateConnCnt
@property (retain) NSArray *sleepStateIdleCnt; // ivar: _sleepStateIdleCnt
@property (retain) NSArray *txPwrCnt; // ivar: _txPwrCnt


+(id)entryEventBackwardDefinitionBBMav10HwRfLTE;
+(id)entryEventBackwardDefinitionBBMav13HwRfLTE;
-(id)init;
-(id)logEventBackwardBBMav10HwRfLTE;
-(id)logEventBackwardBBMav13HwRfLTE;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateEntry:(id)arg0 ;
-(void)populateMav13Entry:(id)arg0 ;
-(void)refreshMav10BBRfAllRats;
-(void)refreshMav13BBRfLTE;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif