// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTEMESSAGELOGEVENT_H
#define HMDREMOTEMESSAGELOGEVENT_H

@class HMMLogEvent, NSString;
@protocol HMDAWDLogEvent, HMMCoreAnalyticsLogging;



@interface HMDRemoteMessageLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>



@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *msgIdentifier; // ivar: _msgIdentifier
@property (readonly, nonatomic) NSString *msgName; // ivar: _msgName
@property (readonly, nonatomic) NSInteger msgType; // ivar: _msgType
@property (readonly, nonatomic) NSString *peerInformation; // ivar: _peerInformation
@property (readonly, nonatomic) BOOL secure; // ivar: _secure
@property (readonly, nonatomic) BOOL sending; // ivar: _sending
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) int transportType; // ivar: _transportType


+(id)receivedRemoteMessage:(id)arg0 identifier:(id)arg1 transactionIdentifier:(id)arg2 messageType:(NSInteger)arg3 peerInformation:(id)arg4 secure:(BOOL)arg5 transportType:(int)arg6 ;
+(id)receivedRemoteMessage:(id)arg0 transportType:(int)arg1 ;
+(id)sendingRemoteMessage:(id)arg0 identifier:(id)arg1 transactionIdentifier:(id)arg2 messageType:(NSInteger)arg3 peerInformation:(id)arg4 secure:(BOOL)arg5 transportType:(int)arg6 ;
+(id)sendingRemoteMessage:(id)arg0 transportType:(int)arg1 ;
+(int)awdMessageTypeFromHMDMessageType:(NSInteger)arg0 ;
-(id)eventName;
-(id)initWithRemoteMessage:(id)arg0 identifier:(id)arg1 transactionIdentifier:(id)arg2 messageType:(NSInteger)arg3 peerInformation:(id)arg4 secure:(BOOL)arg5 transportType:(int)arg6 sending:(BOOL)arg7 ;
-(id)metricForAWD;
-(id)serializedEvent;
-(id)serializedEventForDiagnostics:(BOOL)arg0 ;
-(int)toAWDType:(int)arg0 ;
-(unsigned int)AWDMessageType;


@end


#endif