// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBBSLEEPWAKEMSG_H
#define PLBBSLEEPWAKEMSG_H

@class NSString, NSData, NSDictionary, NSMutableDictionary, NSNumber;


#import "PLBBMsgRoot.h"

@interface PLBBSleepWakeMsg : PLBBMsgRoot

@property (retain) NSString *ariGroupId; // ivar: _ariGroupId
@property (retain) NSString *ariLen; // ivar: _ariLen
@property (retain) NSString *ariMsgId; // ivar: _ariMsgId
@property (retain) NSString *ariMsgName; // ivar: _ariMsgName
@property (retain) NSString *ariSeqNum; // ivar: _ariSeqNum
@property (retain) NSString *bbWakeChannel; // ivar: _bbWakeChannel
@property (retain) NSData *bbWakeDataBin; // ivar: _bbWakeDataBin
@property (retain) NSDictionary *bbWakeDataParsed; // ivar: _bbWakeDataParsed
@property (retain) NSString *bbWakeSubType; // ivar: _bbWakeSubType
@property (retain) NSString *bbWakeType; // ivar: _bbWakeType
@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain) NSString *qmiClntId; // ivar: _qmiClntId
@property (retain) NSString *qmiLen; // ivar: _qmiLen
@property (retain) NSString *qmiMsgId; // ivar: _qmiMsgId
@property (retain) NSString *qmiMsgType; // ivar: _qmiMsgType
@property (retain) NSString *qmiSvcType; // ivar: _qmiSvcType
@property (retain) NSString *swAtCmd; // ivar: _swAtCmd
@property (retain) NSString *swCTData; // ivar: _swCTData
@property (retain) NSString *swChan; // ivar: _swChan
@property (retain) NSString *swClientId; // ivar: _swClientId
@property (retain) NSString *swCmd; // ivar: _swCmd
@property (retain) NSString *swCmdFullName; // ivar: _swCmdFullName
@property (retain) NSString *swCmdName; // ivar: _swCmdName
@property (retain) NSDictionary *swIpData; // ivar: _swIpData
@property (retain) NSString *swMsgId; // ivar: _swMsgId
@property (retain) NSString *swMsgType; // ivar: _swMsgType
@property (retain) NSString *swRadioClass; // ivar: _swRadioClass
@property (retain) NSString *swRawData; // ivar: _swRawData
@property (retain) NSString *swReason; // ivar: _swReason
@property (retain) NSNumber *swSvcId; // ivar: _swSvcId


+(id)entryEventPointDefinitionSleepWakeActivityIceABM;
+(id)entryEventPointDefinitionSleepWakeActivityMavABM;
-(void)logEventPointSleepWakeABM;
-(void)refreshSleepWakeActivity;
-(void)sendAndLogPLEntry:(id)arg0 withName:(id)arg1 withType:(id)arg2 ;


@end


#endif