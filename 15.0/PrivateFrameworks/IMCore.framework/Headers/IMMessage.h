// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMMESSAGE_H
#define IMMESSAGE_H

@class NSString, IMMessageItem, NSDictionary, NSData, NSError, NSArray, NSAttributedString, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IMHandle.h"
#import "IMMessage.h"

@interface IMMessage : NSObject <NSCopying>

 {
    NSString *_plainBody;
}


@property (readonly, nonatomic) IMMessageItem *_imMessageItem;
@property (retain, nonatomic) NSString *associatedBalloonBundleID; // ivar: _associatedBalloonBundleID
@property (readonly, copy, nonatomic) NSString *associatedMessageGUID;
@property (copy, nonatomic, setter=_associatedMessageGUID:) NSString *associatedMessageGUID; // ivar: _associatedMessageGUID
@property (nonatomic, setter=_associatedMessageRange:) _NSRange associatedMessageRange; // ivar: _associatedMessageRange
@property (readonly, nonatomic) NSInteger associatedMessageType;
@property (nonatomic, setter=_associatedMessageType:) NSInteger associatedMessageType; // ivar: _associatedMessageType
@property (retain, nonatomic) NSString *balloonBundleID; // ivar: _balloonBundleID
@property (retain, nonatomic, setter=_updateBizIntent:) NSDictionary *bizIntent; // ivar: _bizIntent
@property (retain, nonatomic) NSData *customTypingIndicatorIcon; // ivar: _customTypingIndicatorIcon
@property (readonly, nonatomic) BOOL didNotifyRecipient;
@property (retain, nonatomic, setter=_updateError:) NSError *error; // ivar: _error
@property (retain, nonatomic) NSString *expressiveSendStyleID; // ivar: _expressiveSendStyleID
@property (copy, nonatomic, setter=_updateFileTransferGUIDs:) NSArray *fileTransferGUIDs; // ivar: _fileTransferGUIDs
@property (nonatomic, setter=_updateFlags:) NSUInteger flags; // ivar: _flags
@property (retain, nonatomic, setter=_updateGUID:) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) BOOL hasDataDetectorResults;
@property (readonly, nonatomic) BOOL hasInlineAttachments;
@property (nonatomic) BOOL hasMention; // ivar: _hasMention
@property (readonly, nonatomic) NSArray *inlineAttachmentAttributesArray;
@property (readonly, nonatomic) BOOL isAddressedToMe; // ivar: _isAddressedToMe
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isAssociatedMessage;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (readonly, nonatomic) BOOL isDelayed;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFromMe;
@property (nonatomic) BOOL isInvitationMessage; // ivar: _isInvitationMessage
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isRead;
@property (readonly, nonatomic) BOOL isRichLinkMessage;
@property (nonatomic) BOOL isSOS; // ivar: _isSOS
@property (readonly, nonatomic) BOOL isSent;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (retain, nonatomic, setter=_updateLocale:) NSString *locale; // ivar: _locale
@property (nonatomic, setter=_updateMessageID:) NSInteger messageID; // ivar: _messageID
@property (readonly, nonatomic) NSAttributedString *messageSubject; // ivar: _messageSubject
@property (readonly, copy, nonatomic) NSDictionary *messageSummaryInfo;
@property (copy, nonatomic, setter=_messageSummaryInfo:) NSDictionary *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (retain, nonatomic) NSString *notificationIDSTokenURI; // ivar: _notificationIDSTokenURI
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (readonly, nonatomic) NSString *plainBody;
@property (retain, nonatomic) NSDictionary *replyCountsByPart; // ivar: _replyCountsByPart
@property (retain, nonatomic, setter=_updateSender:) IMHandle *sender; // ivar: _sender
@property (readonly, nonatomic) NSString *senderName;
@property (readonly, nonatomic, getter=isSenderUnknown) BOOL senderUnknown;
@property (nonatomic) NSUInteger sortID; // ivar: _sortID
@property (retain, nonatomic) NSString *sourceApplicationID; // ivar: _sourceApplicationID
@property (readonly, nonatomic) IMHandle *subject; // ivar: _subject
@property (readonly, nonatomic) NSString *summaryString;
@property (copy, nonatomic, setter=_syncedSyndicationRanges:) NSArray *syncedSyndicationRanges; // ivar: _syncedSyndicationRanges
@property (copy, nonatomic, setter=_syndicationRanges:) NSArray *syndicationRanges; // ivar: _syndicationRanges
@property (retain, nonatomic, setter=_updateText:) NSAttributedString *text; // ivar: _text
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) IMMessage *threadOriginator; // ivar: _threadOriginator
@property (retain, nonatomic, setter=_updateTime:) NSDate *time; // ivar: _time
@property (retain, nonatomic, setter=_updateTimeDelivered:) NSDate *timeDelivered; // ivar: _timeDelivered
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed; // ivar: _timeExpressiveSendPlayed
@property (retain, nonatomic, setter=_updateTimePlayed:) NSDate *timePlayed; // ivar: _timePlayed
@property (retain, nonatomic, setter=_updateTimeRead:) NSDate *timeRead; // ivar: _timeRead
@property (nonatomic) BOOL useStandalone; // ivar: _useStandalone
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDeliveredQuietly;
@property (readonly, nonatomic) BOOL wasDowngraded;


+(BOOL)hasKnownSchemesForRichLinkURL:(id)arg0 ;
+(BOOL)hasKnownSchemesForRichLinkURL:(id)arg0 additionalSupportedSchemes:(id)arg1 ;
+(BOOL)supportedRichLinkURL:(id)arg0 additionalSupportedSchemes:(id)arg1 ;
+(Class)richLinksDataSourceClass;
+(id)_vCardDataWithCLLocation:(id)arg0 ;
+(id)breadcrumbMessageWithText:(id)arg0 associatedMessageGUID:(id)arg1 balloonBundleID:(id)arg2 fileTransferGUIDs:(id)arg3 payloadData:(id)arg4 threadIdentifier:(id)arg5 ;
+(id)defaultInvitationMessageFromSender:(id)arg0 flags:(NSUInteger)arg1 ;
+(id)determineRichLinksInMessage:(id)arg0 ;
+(id)determineRichLinksInMessage:(id)arg0 additionalSupportedSchemes:(id)arg1 ;
+(id)editedMessageWithOriginalMessage:(id)arg0 originalPrefixedGUID:(id)arg1 newBody:(id)arg2 ;
+(id)fromMeIMHandle:(id)arg0 withText:(id)arg1 fileTransferGUIDs:(id)arg2 flags:(NSUInteger)arg3 ;
+(id)instantMessageWithAssociatedMessageContent:(id)arg0 flags:(NSUInteger)arg1 associatedMessageGUID:(id)arg2 associatedMessageType:(NSInteger)arg3 associatedMessageRange:(struct _NSRange )arg4 messageSummaryInfo:(id)arg5 threadIdentifier:(id)arg6 ;
+(id)instantMessageWithText:(id)arg0 flags:(NSUInteger)arg1 threadIdentifier:(id)arg2 ;
+(id)instantMessageWithText:(id)arg0 messageSubject:(id)arg1 fileTransferGUIDs:(id)arg2 flags:(NSUInteger)arg3 balloonBundleID:(id)arg4 payloadData:(id)arg5 expressiveSendStyleID:(id)arg6 ;
+(id)instantMessageWithText:(id)arg0 messageSubject:(id)arg1 fileTransferGUIDs:(id)arg2 flags:(NSUInteger)arg3 threadIdentifier:(id)arg4 ;
+(id)instantMessageWithText:(id)arg0 messageSubject:(id)arg1 flags:(NSUInteger)arg2 expressiveSendStyleID:(id)arg3 ;
+(id)instantMessageWithText:(id)arg0 messageSubject:(id)arg1 flags:(NSUInteger)arg2 expressiveSendStyleID:(id)arg3 threadIdentifier:(id)arg4 ;
+(id)instantMessageWithText:(id)arg0 messageSubject:(id)arg1 flags:(NSUInteger)arg2 threadIdentifier:(id)arg3 ;
+(id)locatingMessageWithGuid:(id)arg0 error:(id)arg1 ;
+(id)messageFromIMMessageItem:(id)arg0 sender:(id)arg1 subject:(id)arg2 ;
+(id)messageFromIMMessageItemDictionary:(id)arg0 body:(id)arg1 sender:(id)arg2 subject:(id)arg3 ;
+(id)messageWithLocation:(id)arg0 flags:(NSUInteger)arg1 error:(id)arg2 guid:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isReply;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 comparisonType:(NSInteger)arg1 ;
-(id)_copyWithFlags:(NSUInteger)arg0 ;
-(id)_initWithSender:(id)arg0 time:(id)arg1 timeRead:(id)arg2 timeDelivered:(id)arg3 timePlayed:(id)arg4 plainText:(id)arg5 text:(id)arg6 messageSubject:(id)arg7 fileTransferGUIDs:(id)arg8 flags:(NSUInteger)arg9 error:(id)arg10 guid:(id)arg11 messageID:(NSInteger)arg12 subject:(id)arg13 balloonBundleID:(id)arg14 payloadData:(id)arg15 expressiveSendStyleID:(id)arg16 timeExpressiveSendPlayed:(id)arg17 associatedMessageGUID:(id)arg18 associatedMessageType:(NSInteger)arg19 associatedMessageRange:(struct _NSRange )arg20 messageSummaryInfo:(id)arg21 threadIdentifier:(id)arg22 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionForPurpose:(NSInteger)arg0 ;
-(id)descriptionForPurpose:(NSInteger)arg0 inChat:(id)arg1 ;
-(id)descriptionForPurpose:(NSInteger)arg0 inChat:(id)arg1 senderDisplayName:(id)arg2 ;
-(id)initWithSender:(id)arg0 fileTransfer:(id)arg1 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(NSUInteger)arg4 error:(id)arg5 guid:(id)arg6 subject:(id)arg7 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 fileTransferGUIDs:(id)arg3 flags:(NSUInteger)arg4 error:(id)arg5 guid:(id)arg6 subject:(id)arg7 threadIdentifier:(id)arg8 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(NSInteger)arg10 associatedMessageRange:(struct _NSRange )arg11 associatedMessageInfo:(id)arg12 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(NSInteger)arg10 associatedMessageRange:(struct _NSRange )arg11 messageSummaryInfo:(id)arg12 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 associatedMessageGUID:(id)arg9 associatedMessageType:(NSInteger)arg10 associatedMessageRange:(struct _NSRange )arg11 messageSummaryInfo:(id)arg12 threadIdentifier:(id)arg13 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 balloonBundleID:(id)arg9 payloadData:(id)arg10 expressiveSendStyleID:(id)arg11 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 balloonBundleID:(id)arg9 payloadData:(id)arg10 expressiveSendStyleID:(id)arg11 threadIdentifier:(id)arg12 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 text:(id)arg2 messageSubject:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 subject:(id)arg8 threadIdentifier:(id)arg9 ;
-(id)messagesBySeparatingRichLinks;
-(id)messagesSeparatedByByteLength:(NSInteger)arg0 ;
-(id)richLinkDataSourceWithChatContext:(id)arg0 ;
-(void)_associatedMessageGUID:(id)arg0 ;
-(void)_associatedMessageRange:(struct _NSRange )arg0 ;
-(void)_associatedMessageType:(NSInteger)arg0 ;
-(void)_messageSummaryInfo:(id)arg0 ;
-(void)_ovverrideGUIDForTest:(id)arg0 ;
-(void)_syncedSyndicationRanges:(id)arg0 ;
-(void)_syndicationRanges:(id)arg0 ;
-(void)_updateBizIntent:(id)arg0 ;
-(void)_updateError:(id)arg0 ;
-(void)_updateFileTransferGUIDs:(id)arg0 ;
-(void)_updateFlags:(NSUInteger)arg0 ;
-(void)_updateGUID:(id)arg0 ;
-(void)_updateLocale:(id)arg0 ;
-(void)_updateMessageID:(NSInteger)arg0 ;
-(void)_updateSender:(id)arg0 ;
-(void)_updateText:(id)arg0 ;
-(void)_updateTime:(id)arg0 ;
-(void)_updateTimeDelivered:(id)arg0 ;
-(void)_updateTimePlayed:(id)arg0 ;
-(void)_updateTimeRead:(id)arg0 ;


@end


#endif