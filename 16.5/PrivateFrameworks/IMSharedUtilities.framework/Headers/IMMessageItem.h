// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMMESSAGEITEM_H
#define IMMESSAGEITEM_H

@class NSArray, NSDictionary, NSAttributedString, NSData, NSDate, NSString, NSIndexSet, TUConversationActivity, NSUUID;
@protocol NSSecureCoding, NSCopying, IMRemoteObjectCoding;


#import "IMItem.h"
#import "IMMessageItem.h"

@interface IMMessageItem : IMItem <NSSecureCoding, NSCopying, IMRemoteObjectCoding>

 {
    NSArray *_fileTransferGUIDs;
}


@property (nonatomic) BOOL NicknameRequested; // ivar: _NicknameRequested
@property (nonatomic) BOOL backwardsCompatibleVersion; // ivar: _backwardsCompatibleVersion
@property (retain, nonatomic) NSDictionary *bizIntent; // ivar: _bizIntent
@property (nonatomic) BOOL blockingRichLinks; // ivar: _blockingRichLinks
@property (retain, nonatomic) NSAttributedString *body; // ivar: _body
@property (retain, nonatomic) NSData *bodyData; // ivar: _bodyData
@property (readonly, copy, nonatomic) NSAttributedString *breadcrumbText;
@property (retain, nonatomic) NSData *contactsAvatarRecipeData; // ivar: _contactsAvatarRecipeData
@property (readonly, nonatomic) BOOL containsRichLink;
@property (retain, nonatomic) NSDate *dateEdited; // ivar: _dateEdited
@property (retain, nonatomic) NSString *detectedLanguage; // ivar: _detectedLanguage
@property (readonly, nonatomic) BOOL didNotifyRecipient;
@property (nonatomic) NSUInteger editEligibility; // ivar: _editEligibility
@property (readonly, nonatomic) NSArray *editUnsupportedByHandleIDs;
@property (retain, nonatomic) NSIndexSet *editedPartIndexes;
@property (nonatomic) unsigned int errorCode; // ivar: _error
@property (nonatomic) NSInteger expireState; // ivar: _expireState
@property (retain, nonatomic) NSString *expressiveSendStyleID; // ivar: _expressiveSendStyleID
@property (retain, nonatomic) NSIndexSet *failedEditPartIndexes;
@property (retain, nonatomic) NSIndexSet *failedRetractPartIndexes;
@property (nonatomic) NSUInteger flags; // ivar: _flags
@property (copy, nonatomic) TUConversationActivity *groupActivity; // ivar: _groupActivity
@property (nonatomic) BOOL hasDataDetectorResults;
@property (readonly, nonatomic) BOOL hasEditedParts;
@property (nonatomic) BOOL hasUnseenMention;
@property (nonatomic, getter=isInitialTranscriptSharingItem) BOOL initialTranscriptSharingItem;
@property (readonly, nonatomic) BOOL isAlert;
@property (readonly, nonatomic) BOOL isAudioMessage;
@property (readonly, nonatomic) BOOL isAutoReply;
@property (nonatomic) BOOL isBeingRetried; // ivar: _isBeingRetried
@property (readonly, nonatomic) BOOL isCMM;
@property (nonatomic) BOOL isCorrupt;
@property (readonly, nonatomic) BOOL isDelivered;
@property (readonly, nonatomic) BOOL isEmote;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isExpirable;
@property (readonly, nonatomic) BOOL isFileAttachment;
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isFromExternalSource;
@property (readonly, nonatomic) BOOL isFullyRetracted;
@property (readonly, nonatomic) BOOL isLocatingMessage;
@property (readonly, nonatomic) BOOL isPlayed;
@property (readonly, nonatomic) BOOL isPrepared;
@property (readonly, nonatomic) BOOL isRead;
@property (nonatomic) BOOL isSOS; // ivar: _isSOS
@property (readonly, nonatomic) BOOL isSent;
@property (nonatomic) BOOL isSpam;
@property (nonatomic) BOOL isStewie;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isTapToRetry;
@property (readonly, nonatomic) BOOL isTypingMessage;
@property (readonly, nonatomic) BOOL isUnfinished;
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (readonly, copy, nonatomic) NSArray *messageParts;
@property (retain, nonatomic) NSDictionary *messageSummaryInfo; // ivar: _messageSummaryInfo
@property (retain, nonatomic) NSString *notificationIDSTokenURI; // ivar: _notificationIDSTokenURI
@property (retain, nonatomic) NSDictionary *originalTextRangesByPartIndex;
@property (nonatomic) NSUInteger partCount; // ivar: _partCount
@property (retain, nonatomic) NSData *payloadData; // ivar: _payloadData
@property (retain, nonatomic) NSString *plainBody; // ivar: _plainBody
@property (nonatomic) NSInteger replaceID; // ivar: _replaceID
@property (copy, nonatomic) NSDictionary *replyCountsByPart; // ivar: _replyCountsByPart
@property (retain, nonatomic) NSIndexSet *retractedPartIndexes;
@property (retain, nonatomic) NSString *retryToParticipant; // ivar: _retryToParticipant
@property (readonly, copy, nonatomic) NSArray *richLinkURLs;
@property (nonatomic) BOOL shouldSendMeCard; // ivar: _shouldSendMeCard
@property (nonatomic) BOOL shouldSendPartIndexesInMessageBody; // ivar: _shouldSendPartIndexesInMessageBody
@property (nonatomic) NSInteger stewieConversationID;
@property (copy, nonatomic) NSUUID *stewieConversationUUID;
@property (nonatomic) NSInteger stewieSequenceNumber;
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSString *suggestedAuthorAvatarPath; // ivar: _suggestedAuthorAvatarPath
@property (copy, nonatomic) NSString *suggestedAuthorName; // ivar: _suggestedAuthorName
@property (copy, nonatomic) NSString *swyAppName;
@property (copy, nonatomic) NSString *swyBundleID;
@property (copy, nonatomic) NSArray *syncedSyndicationRanges; // ivar: _syncedSyndicationRanges
@property (copy, nonatomic) NSArray *syndicationRanges; // ivar: _syndicationRanges
@property (copy, nonatomic) NSString *threadIdentifier; // ivar: _threadIdentifier
@property (retain, nonatomic) IMMessageItem *threadOriginator; // ivar: _threadOriginator
@property (retain, nonatomic) NSDate *timeDelivered; // ivar: _timeDelivered
@property (retain, nonatomic) NSDate *timeExpressiveSendPlayed; // ivar: _timeExpressiveSendPlayed
@property (retain, nonatomic) NSDate *timePlayed; // ivar: _timePlayed
@property (retain, nonatomic) NSDate *timeRead; // ivar: _timeRead
@property (nonatomic) NSInteger transcriptSharingMessageType;
@property (retain, nonatomic) NSAttributedString *translatedText; // ivar: _translatedText
@property (retain, nonatomic) NSData *typingIndicatorIcon; // ivar: _typingIndicatorIcon
@property (nonatomic, getter=isUpdatingDataSourcePayload) BOOL updatingDataSourcePayload; // ivar: _updatingDataSourcePayload
@property (nonatomic) BOOL useStandalone; // ivar: _useStandalone
@property (readonly, nonatomic) BOOL wasDataDetected;
@property (readonly, nonatomic) BOOL wasDeliveredQuietly;
@property (nonatomic) BOOL wasDetectedAsSWYSpam; // ivar: _wasDetectedAsSWYSpam
@property (readonly, nonatomic) BOOL wasDowngraded;


+(BOOL)messageContainsSurfDD:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)partKeyForAttachmentGUID:(id)arg0 inBody:(id)arg1 ;
// +(id)_messageItemWithIndexesDeleted:(id)arg0 subRangesToDeleteMapping:(id)arg1 deleteSubject:(BOOL)arg2 deleteTransferCallback:(id)arg3 createItemCallback:(unk)arg4 fromMessageItem:(id)arg5  ;
+(id)newMessageItemFrom:(id)arg0 withText:(id)arg1 deleteSubject:(BOOL)arg2 withFileTransferGUIDs:(id)arg3 ;
-(BOOL)canRetryFailedRetraction;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFirstMessageCandidate;
-(BOOL)isFromMe;
-(BOOL)isLastMessageCandidate;
-(BOOL)isReply;
-(BOOL)wasDetonated;
-(CGFloat)_messageEditHistoryLimit;
-(CGFloat)_messageEditTimeout;
-(CGFloat)_messageRetractionTimeout;
-(CGFloat)_timeoutIntervalForEditType:(NSUInteger)arg0 ;
-(NSUInteger)eligibilityForEditType:(NSUInteger)arg0 messagePartIndex:(NSInteger)arg1 ;
-(NSUInteger)getCMMAssetOffset;
-(NSUInteger)getCMMState;
-(NSUInteger)partKeyForAttachmentGUID:(id)arg0 ;
-(NSUInteger)powerLogMessageType;
-(NSUInteger)replyCountForPartIndex:(NSInteger)arg0 ;
-(id)_localizedBackwardsCompatibleExpressiveSendText;
-(id)_partRangeByIndexFromPlistSerializable:(id)arg0 ;
-(id)_partRangeByIndexToPlistSerializable:(id)arg0 ;
-(id)attachmentGUIDAtIndex:(NSUInteger)arg0 ;
-(id)copyDictionaryRepresentation;
-(id)copyForBackwardsCompatibility;
-(id)copyWithFlags:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)fileTransferGUIDs;
-(id)historyForMessagePart:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 hint:(id)arg1 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 body:(id)arg2 attributes:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 threadIdentifier:(id)arg8 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 body:(id)arg2 attributes:(id)arg3 fileTransferGUIDs:(id)arg4 flags:(NSUInteger)arg5 error:(id)arg6 guid:(id)arg7 type:(NSInteger)arg8 threadIdentifier:(id)arg9 ;
-(id)initWithSender:(id)arg0 time:(id)arg1 guid:(id)arg2 type:(NSInteger)arg3 ;
-(id)initWithSenderInfo:(id)arg0 time:(id)arg1 guid:(id)arg2 messageID:(NSInteger)arg3 account:(id)arg4 accountID:(id)arg5 service:(id)arg6 handle:(id)arg7 roomName:(id)arg8 unformattedID:(id)arg9 countryCode:(id)arg10 ;
-(id)initWithSenderInfo:(id)arg0 time:(id)arg1 timeRead:(id)arg2 timeDelivered:(id)arg3 timePlayed:(id)arg4 subject:(id)arg5 body:(id)arg6 bodyData:(id)arg7 attributes:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(NSUInteger)arg10 guid:(id)arg11 messageID:(NSInteger)arg12 account:(id)arg13 accountID:(id)arg14 service:(id)arg15 handle:(id)arg16 roomName:(id)arg17 unformattedID:(id)arg18 countryCode:(id)arg19 expireState:(NSInteger)arg20 balloonBundleID:(id)arg21 payloadData:(id)arg22 expressiveSendStyleID:(id)arg23 timeExpressiveSendPlayed:(id)arg24 bizIntent:(id)arg25 locale:(id)arg26 errorType:(unsigned int)arg27 threadIdentifier:(id)arg28 syndicationRanges:(id)arg29 syncedSyndicationRanges:(id)arg30 partCount:(NSUInteger)arg31 dateEdited:(id)arg32 ;
-(id)initWithSenderInfo:(id)arg0 time:(id)arg1 timeRead:(id)arg2 timeDelivered:(id)arg3 timePlayed:(id)arg4 subject:(id)arg5 body:(id)arg6 bodyData:(id)arg7 attributes:(id)arg8 fileTransferGUIDs:(id)arg9 flags:(NSUInteger)arg10 guid:(id)arg11 messageID:(NSInteger)arg12 account:(id)arg13 accountID:(id)arg14 service:(id)arg15 handle:(id)arg16 roomName:(id)arg17 unformattedID:(id)arg18 countryCode:(id)arg19 expireState:(NSInteger)arg20 balloonBundleID:(id)arg21 payloadData:(id)arg22 expressiveSendStyleID:(id)arg23 timeExpressiveSendPlayed:(id)arg24 bizIntent:(id)arg25 locale:(id)arg26 errorType:(unsigned int)arg27 type:(NSInteger)arg28 threadIdentifier:(id)arg29 syndicationRanges:(id)arg30 syncedSyndicationRanges:(id)arg31 partCount:(NSUInteger)arg32 dateEdited:(id)arg33 ;
-(id)sender;
-(void)_clearBodyData;
-(void)_generateBodyDataIfNeeded;
-(void)_generateBodyTextIfNeeded;
-(void)_recalculatePartCount;
-(void)_regenerateBodyData;
-(void)_regenerateBodyText;
-(void)_updateFlags:(NSUInteger)arg0 ;
-(void)addEditedPartIndex:(NSInteger)arg0 ;
-(void)addFailedEditPartIndex:(NSInteger)arg0 ;
-(void)addFailedRetractPartIndex:(NSInteger)arg0 ;
-(void)addRetractedPartIndex:(NSInteger)arg0 ;
-(void)adjustIsEmptyFlag;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAttachmentGUIDsWithBlock:(id)arg0 ;
-(void)eraseMessageContent;
-(void)setCMMAssetOffset:(NSUInteger)arg0 ;
-(void)setCMMState:(NSUInteger)arg0 ;
-(void)setCMMStateToRegisteredAndAssetOffsetTo:(NSUInteger)arg0 ;
-(void)setFileTransferGUIDs:(id)arg0 ;
-(void)setHistory:(id)arg0 forMessagePart:(NSInteger)arg1 ;


@end


#endif