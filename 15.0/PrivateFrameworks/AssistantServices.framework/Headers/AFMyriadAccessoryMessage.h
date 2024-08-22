// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFMYRIADACCESSORYMESSAGE_H
#define AFMYRIADACCESSORYMESSAGE_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface AFMyriadAccessoryMessage : NSObject {
    myrAccessoryMessage _message;
}


@property (readonly, nonatomic) NSUUID *accessoryId; // ivar: _accessoryId
@property (readonly, nonatomic, getter=isAcknowledgement) unsigned char ack; // ivar: _ack
@property (readonly, nonatomic) unsigned short audioHash; // ivar: _audioHash
@property (readonly, nonatomic) unsigned char deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) unsigned char deviceGroup; // ivar: _deviceGroup
@property (readonly, nonatomic, getter=electionWon) unsigned char electionDecision; // ivar: _electionDecision
@property (readonly, nonatomic, getter=isEmergencyHandled) unsigned char emergencyHandled; // ivar: _emergencyHandled
@property (readonly, nonatomic) unsigned char goodnessScore; // ivar: _goodnessScore
@property (readonly, nonatomic) BOOL isSane; // ivar: _isSane
@property (readonly, nonatomic) unsigned char productType; // ivar: _productType
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, nonatomic, getter=usesSerializedProtocol) BOOL serializedProtocol; // ivar: _serializedProtocol
@property (readonly, nonatomic) NSUInteger session; // ivar: _session
@property (readonly, nonatomic) unsigned char tieBreaker; // ivar: _tieBreaker
@property (readonly, nonatomic) unsigned char userConfidenceScore; // ivar: _userConfidenceScore
@property (readonly, nonatomic) unsigned char version; // ivar: _version
@property (readonly, nonatomic) CGFloat voiceTriggerEndTime; // ivar: _voiceTriggerEndTime


+(BOOL)isMyriadRequestMessage:(id)arg0 ;
+(id)acknowledgeRequestKey;
+(id)audioDataKey;
+(id)deviceInfoKey;
+(id)electionDecisionKey;
+(id)emergencyHandledKey;
+(id)messageKey;
+(id)myriadRequestTypeAsString:(NSUInteger)arg0 ;
+(id)protocolName;
-(id)description;
-(id)initElectionDecisionMessageWithSessionId:(NSUInteger)arg0 decision:(BOOL)arg1 accessoryId:(id)arg2 ;
-(id)initPreheatMessageWithSessionId:(NSUInteger)arg0 accessoryId:(id)arg1 ;
-(id)initResetMessageWithSessionId:(NSUInteger)arg0 accessoryId:(id)arg1 ;
-(id)initWithAccessoryMessage:(id)arg0 accessoryId:(id)arg1 ;
-(id)initWithAccessoryMessageAsDictionary:(id)arg0 accessoryId:(id)arg1 ;
-(id)initWithRequestType:(NSUInteger)arg0 session:(NSUInteger)arg1 voiceTriggerEndTime:(CGFloat)arg2 audioHash:(unsigned short)arg3 goodnessScore:(unsigned char)arg4 userConfidenceScore:(unsigned char)arg5 tieBreaker:(unsigned char)arg6 deviceClass:(unsigned char)arg7 deviceGroup:(unsigned char)arg8 productType:(unsigned char)arg9 electionDecision:(unsigned char)arg10 emergencyHandled:(unsigned char)arg11 ack:(unsigned char)arg12 accessoryId:(id)arg13 ;
-(id)messageAsData;
-(void)_copyRawBytesFromSource:(*void)arg0 toDest:(*void)arg1 length:(NSUInteger)arg2 ;
-(void)_initWithMessage:(struct myrAccessoryMessage *)arg0 ;
-(void)_initializeMessageObj:(id)arg0 ;
-(void)_initializeMessageObjFromDictionary:(id)arg0 ;


@end


#endif