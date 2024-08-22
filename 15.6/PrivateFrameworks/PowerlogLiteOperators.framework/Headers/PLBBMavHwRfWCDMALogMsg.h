// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBMAVHWRFWCDMALOGMSG_H
#define PLBBMAVHWRFWCDMALOGMSG_H

@class NSArray, NSMutableDictionary, NSNumber, NSString, NSMutableArray;


#import "PLBasebandMessage.h"

@interface PLBBMavHwRfWCDMALogMsg : PLBasebandMessage

@property (retain) NSArray *DCEqStatCnt; // ivar: _DCEqStatCnt
@property (retain) NSArray *DCQsetEqStatCnt; // ivar: _DCQsetEqStatCnt
@property (retain) NSArray *DurInCarrierMode; // ivar: _DurInCarrierMode
@property (retain) NSArray *RABModeCnt; // ivar: _RABModeCnt
@property (retain) NSArray *RABTypeCnt; // ivar: _RABTypeCnt
@property (retain) NSArray *SCEqStatCnt; // ivar: _SCEqStatCnt
@property (retain) NSArray *SCQsetEqStatCnt; // ivar: _SCQsetEqStatCnt
@property (retain) NSArray *TxPwrBucket; // ivar: _TxPwrBucket
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain) NSNumber *cpcEnergy; // ivar: _cpcEnergy
@property (retain) NSNumber *cpcRxOnCnt; // ivar: _cpcRxOnCnt
@property (retain) NSNumber *cpcRxTxOffCnt; // ivar: _cpcRxTxOffCnt
@property (retain) NSNumber *cpcTimeCnt; // ivar: _cpcTimeCnt
@property (retain) NSString *error; // ivar: _error
@property (retain) NSNumber *fetCnt; // ivar: _fetCnt
@property (retain) NSMutableArray *groupArrEntries; // ivar: _groupArrEntries
@property (retain) NSString *groupEntryKey; // ivar: _groupEntryKey
@property (retain) NSString *groupID; // ivar: _groupID
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSNumber *logDuration; // ivar: _logDuration


+(id)entryEventBackwardDefinitionBBMav16BHwRfWCDMA;
+(id)entryEventBackwardDefinitionBBMav16HwRfWCDMA;
+(id)entryEventBackwardDefinitionBBMavHwRfWCDMA;
-(id)init;
-(id)logEventBackwardBBMavHwRfWCDMA;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)populateEntry:(id)arg0 ;
-(void)refreshRequest;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;


@end


#endif