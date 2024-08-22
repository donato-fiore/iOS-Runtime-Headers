// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBBEUREKAEVENTMSG_H
#define PLBBEUREKAEVENTMSG_H

@class NSMutableDictionary, NSMutableString;


#import "PLBasebandMessage.h"

@interface PLBBEurekaEventMsg : PLBasebandMessage

@property (retain, nonatomic) NSMutableDictionary *commonInfo; // ivar: _commonInfo
@property (nonatomic) unsigned char inited; // ivar: _inited
@property (retain, nonatomic) NSMutableDictionary *kvPairs; // ivar: _kvPairs
@property (retain, nonatomic) NSMutableString *sdAct; // ivar: _sdAct
@property (retain, nonatomic) NSMutableString *sdEvent; // ivar: _sdEvent
@property (retain, nonatomic) NSMutableString *sdState; // ivar: _sdState


+(id)bbEuEvMsgEventNotProcessed;
+(id)bbEuEvMsgNameBBEurekaMsgLite;
+(id)bbEuEvMsgNameCMCDMAExit;
+(id)bbEuEvMsgNameCMCallEventConn;
+(id)bbEuEvMsgNameCMCallEventConnV2;
+(id)bbEuEvMsgNameCMCallEventEnd;
+(id)bbEuEvMsgNameCMCallEventEndV2;
+(id)bbEuEvMsgNameCMCallEventIncom;
+(id)bbEuEvMsgNameCMCallEventOrig;
+(id)bbEuEvMsgNameCMCallEventOrigV2;
+(id)bbEuEvMsgNameGSML1State;
+(id)bbEuEvMsgNameLTERRCState;
+(id)bbEuEvMsgNameSDEventActionCode;
+(id)bbEuEvMsgNameWCDMARRCState;
+(id)bbEuEvMsgUTRANRRCState;
-(id)init;
-(void)addPairWithKey:(id)arg0 andWithVal:(id)arg1 ;
-(void)appendToError:(id)arg0 ;
-(void)logEventCMCallEventConnWithId:(id)arg0 andCallType:(id)arg1 andSysMode:(id)arg2 ;
-(void)logEventCMCallEventConnWithId:(id)arg0 andCallType:(id)arg1 andSysMode:(id)arg2 andClientId:(id)arg3 ;
-(void)logEventCMCallEventEndWithId:(id)arg0 andNumCalls:(id)arg1 ;
-(void)logEventCMCallEventEndWithId:(id)arg0 andNumCalls:(id)arg1 andClientId:(id)arg2 ;
-(void)logEventCMCallEventOrigWithId:(id)arg0 andCallType:(id)arg1 andSrvType:(id)arg2 ;
-(void)logEventCMCallEventOrigWithId:(id)arg0 andCallType:(id)arg1 andSrvType:(id)arg2 andClientId:(id)arg3 ;
-(void)logEventForwardBBEurekaEventMsgLite;
-(void)logEventForwardGSML1StateWith:(id)arg0 ;
-(void)logEventForwardLTERRCStateAs:(id)arg0 ;
-(void)logEventForwardSDEventActionCode;
-(void)logEventForwardUTRANRRCNextStateAs:(id)arg0 andCurrStateAs:(id)arg1 andRateAs:(id)arg2 ;
-(void)logEventForwardWCDMARRCPrevStateAs:(id)arg0 andCurrState:(id)arg1 andRate:(id)arg2 ;
-(void)logEventNoneEventNotProcessed;
-(void)logEventPointCMExitCodeWithState:(id)arg0 ;
-(void)refreshBBEurekaEventMsgLite;
-(void)refreshEventNotProcessed;
-(void)refreshLTERRCState;
-(void)refreshSDEventActionCode;
-(void)refreshUTRANRRCState;
-(void)refreshWCDMARRCState;
-(void)sendAndLogPLEntry:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)setEventCode:(unsigned int)arg0 ;
-(void)setHeaderWithSeqNum:(id)arg0 andDate:(id)arg1 andTimeCal:(CGFloat)arg2 ;
-(void)setPayload:(id)arg0 ;
-(void)setSDEventActionCodeWith:(id)arg0 andSDAction:(id)arg1 andSDState:(id)arg2 ;


@end


#endif