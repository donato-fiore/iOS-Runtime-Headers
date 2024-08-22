// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMTEXTMESSAGEPIPELINEPARAMETER_H
#define IMTEXTMESSAGEPIPELINEPARAMETER_H

@class NSString, NSArray, NSNumber, NSDictionary, NSAttributedString;
@protocol IMFindChatProcessingParameter, IMTextMessageProcessingParameter, IMMessageLegacyProcessingParameter, IMMessageFromStorageParameter, IMMessageMomentShareProcessingParameter;

#import <Foundation/Foundation.h>

#import "IMDChat.h"

@interface IMTextMessagePipelineParameter : NSObject <IMFindChatProcessingParameter, IMTextMessageProcessingParameter, IMMessageLegacyProcessingParameter, IMMessageFromStorageParameter, IMMessageMomentShareProcessingParameter>



@property (copy, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSArray *attributionInfoArray; // ivar: _attributionInfoArray
@property (nonatomic, getter=isAutoReply) BOOL autoReply; // ivar: _autoReply
@property (retain, nonatomic) NSString *availabilityVerificationRecipientChannelIDPrefix; // ivar: _availabilityVerificationRecipientChannelIDPrefix
@property (retain, nonatomic) IMDChat *chat; // ivar: _chat
@property (copy, nonatomic) NSString *currentGroupName; // ivar: _currentGroupName
@property (copy, nonatomic) NSString *encryptionType; // ivar: _encryptionType
@property (nonatomic, getter=isExpirable) BOOL expirable; // ivar: _expirable
@property (copy, nonatomic) NSString *expressiveSendStyleIdentifier; // ivar: _expressiveSendStyleIdentifier
@property (retain, nonatomic) NSArray *fileTransferGUIDs; // ivar: _fileTransferGUIDs
@property (retain, nonatomic) NSString *fromDisplayID; // ivar: _fromDisplayID
@property (copy, nonatomic) NSString *fromIdentifier; // ivar: _fromIdentifier
@property (copy, nonatomic) NSString *groupID; // ivar: _groupID
@property (retain, nonatomic) NSNumber *groupParticipantVersion; // ivar: _groupParticipantVersion
@property (retain, nonatomic) NSNumber *groupPhotoCreationTime; // ivar: _groupPhotoCreationTime
@property (retain, nonatomic) NSNumber *groupProtocolVersion; // ivar: _groupProtocolVersion
@property (retain, nonatomic) NSDictionary *inlineAttachmentsDictionary; // ivar: _inlineAttachmentsDictionary
@property (nonatomic) BOOL isFromMe; // ivar: _isFromMe
@property (nonatomic) BOOL isFromStorage; // ivar: _isFromStorage
@property (nonatomic) BOOL isLastFromStorage; // ivar: _isLastFromStorage
@property (retain, nonatomic) NSArray *messageItems; // ivar: _messageItems
@property (retain, nonatomic) NSDictionary *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (retain, nonatomic) NSDictionary *nicknameDictionary; // ivar: _nicknameDictionary
@property (retain, nonatomic) NSArray *participantIdentifiers; // ivar: _participantIdentifiers
@property (copy, nonatomic) NSString *plainTextBody; // ivar: _plainTextBody
@property (copy, nonatomic) NSString *plainTextSubject; // ivar: _plainTextSubject
@property (copy, nonatomic) NSString *replyToGUID; // ivar: _replyToGUID
@property (copy, nonatomic) NSAttributedString *richBody; // ivar: _richBody
@property (copy, nonatomic) NSString *threadIdentifierGUID; // ivar: _threadIdentifierGUID
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (copy, nonatomic) NSString *toIdentifier; // ivar: _toIdentifier
@property (nonatomic) BOOL wantsCheckpointing; // ivar: _wantsCheckpointing
@property (nonatomic) BOOL wantsDeliveryReceipt; // ivar: _wantsDeliveryReceipt


+(BOOL)isAutoReplyWithBlastDoorMessage:(id)arg0 ;
+(id)attributionInfoArrayWithBlastDoorMessage:(id)arg0 ;
+(id)availabilityVerificationRecipientChannelIDPrefixWithBlastDoorMessage:(id)arg0 ;
+(id)convertAttributionInfoToArray:(id)arg0 ;
+(id)encryptionTypeWithMessage:(id)arg0 ;
+(id)messageSummaryInfoDictionaryWithBlastDoorMessage:(id)arg0 ;
+(id)nicknameDictionaryWithBlastDoorMessage:(id)arg0 ;
+(id)participantDestinationIdentifierWithMessage:(id)arg0 ;
+(id)plainTextBodyWithBlastDoorMessage:(id)arg0 ;
+(id)plainTextSubjectWithBlastDoorMessage:(id)arg0 ;
+(id)richBodyWithBlastDoorMessage:(id)arg0 ;
-(id)_createSuperFormattedStringWithAttributedString:(id)arg0 ;
-(id)convertAttachmentsWithString:(id)arg0 ;
-(id)description;
-(id)fileTransferForBlastDoorFileTransferAttribute:(id)arg0 fileTransferGUIDs:(id)arg1 ;
-(id)initWithBD:(id)arg0 idsTrustedData:(id)arg1 ;


@end


#endif