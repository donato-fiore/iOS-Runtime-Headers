// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBBEUREKALOGMSG_H
#define PLBBEUREKALOGMSG_H

@class NSDate, NSNumber, NSMutableDictionary, NSMutableString;


#import "PLBasebandMessage.h"

@interface PLBBEurekaLogMsg : PLBasebandMessage

@property (retain) NSDate *bbDate; // ivar: _bbDate
@property (retain) NSNumber *bbSeqNum; // ivar: _bbSeqNum
@property *CGFloat bbTimeCal; // ivar: _bbTimeCal
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain, nonatomic) NSMutableString *sdAct; // ivar: _sdAct
@property (retain, nonatomic) NSMutableString *sdEvent; // ivar: _sdEvent
@property (retain, nonatomic) NSMutableString *sdState; // ivar: _sdState


+(id)bbEuLogMsgNameLTESleepMgrStats;
-(id)init;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)logEventBackwardLTESleepMgrStatsWithVer:(id)arg0 andML1State:(id)arg1 andSES:(id)arg2 andSDS:(id)arg3 andStDur:(id)arg4 andDSlpDur:(id)arg5 andLSlpDur:(id)arg6 ;
-(void)refreshLTESleepMgrStats;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;
-(void)setError:(id)arg0 ;
-(void)setEventCode:(unsigned int)arg0 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;
-(void)setPayload:(id)arg0 ;


@end


#endif