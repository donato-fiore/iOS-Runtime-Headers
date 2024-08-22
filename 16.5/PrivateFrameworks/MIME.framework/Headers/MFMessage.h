// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMESSAGE_H
#define MFMESSAGE_H

@class NSString, NSArray, ECAngleBracketIDHash, NSURL, NSDate, NSUUID, NSData, ECSubject;
@protocol EFPubliclyDescribable, NSCopying;

#import <Foundation/Foundation.h>

#import "MFMessageStore.h"
#import "MFMimePart.h"

@interface MFMessage : NSObject <EFPubliclyDescribable, NSCopying>

 {
    MFMessageStore *_store;
    unsigned int _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    uint8_t _generationNumber;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    NSInteger _messageIDHeaderHash;
    NSInteger _conversationID;
    ECAngleBracketIDHash *_listIDHash;
    NSString *_summary;
    NSString *_externalID;
    NSURL *_messageURL;
    NSString *_cachedMessageIDHeader;
    BOOL _calculatedAttachmentInfo;
    unsigned short _numberOfAttachments;
}


@property (copy, nonatomic) NSArray *bcc;
@property (readonly, copy, nonatomic) NSArray *bccIfCached;
@property (copy, nonatomic) NSArray *cc;
@property (readonly, copy, nonatomic) NSArray *ccIfCached;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (nonatomic) CGFloat dateReceivedAsTimeIntervalSince1970;
@property (readonly, nonatomic) NSDate *dateSent;
@property (nonatomic) CGFloat dateSentAsTimeIntervalSince1970;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSUUID *documentID; // ivar: _documentID
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (retain, nonatomic) NSString *externalID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *headerData;
@property (readonly, nonatomic) NSData *headerDataIfAvailable;
@property (retain, nonatomic) ECAngleBracketIDHash *listIDHash;
@property (readonly, nonatomic) NSUInteger messageSize;
@property (retain, nonatomic) MFMessageStore *messageStore;
@property (retain, nonatomic) MFMimePart *parentPart; // ivar: _parentPart
@property (readonly, copy, nonatomic) NSString *remoteID;
@property (copy, nonatomic) ECSubject *subject; // ivar: _subject
@property (readonly, copy, nonatomic) ECSubject *subjectIfAvailable;
@property (readonly, nonatomic) NSString *summary;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *to;
@property (readonly, copy, nonatomic) NSArray *toIfCached;
@property (readonly, nonatomic) unsigned int uid;


+(id)messageWithRFC822Data:(id)arg0 ;
+(id)messageWithRFC822Data:(id)arg0 forMailboxUID:(id)arg1 ;
+(id)messageWithRFC822Data:(id)arg0 withParentPart:(id)arg1 ;
+(id)messageWithRFC822Data:(id)arg0 withParentPart:(id)arg1 generateMessageIDHash:(BOOL)arg2 ;
+(void)setMessageClassForStore:(id)arg0 ;
-(BOOL)_doesDateAppearToBeSane:(id)arg0 ;
-(BOOL)calculatedNumberOfAttachments;
-(BOOL)canBeTriaged;
-(BOOL)fetchDataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 withConsumer:(id)arg2 isComplete:(*BOOL)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)isLibraryMessage;
-(BOOL)isMessageContentsLocallyAvailable;
-(BOOL)messageData:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)messageDataHolder:(*id)arg0 messageSize:(*NSUInteger)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(BOOL)needsDateReceived;
-(NSInteger)_messageIDHeaderHashIvar;
-(NSInteger)conversationID;
-(NSInteger)generationCompare:(id)arg0 ;
-(NSInteger)messageIDHash;
-(NSUInteger)fileSize;
-(NSUInteger)generationNumber;
-(NSUInteger)numberOfAttachments;
-(id)_copyDateFromDateHeaderInHeaders:(id)arg0 ;
-(id)_copyDateFromReceivedHeadersInHeaders:(id)arg0 ;
-(id)_privacySafeDescription;
-(id)additionalHeadersForForward;
-(id)additionalHeadersForReply;
-(id)bestAlternativeInPart:(id)arg0 ;
-(id)bodyData;
-(id)bodyDataIsComplete:(*BOOL)arg0 ;
-(id)bodyDataIsComplete:(*BOOL)arg0 isPartial:(*BOOL)arg1 ;
-(id)bodyDataIsComplete:(*BOOL)arg0 isPartial:(*BOOL)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)contentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataConsumerForMimePart:(id)arg0 ;
-(id)dataForMimePart:(id)arg0 ;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 ;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)dataPathForMimePart:(id)arg0 ;
-(id)defaultAlternativeInPart:(id)arg0 ;
-(id)firstSender;
-(id)headerDataDownloadIfNecessary:(BOOL)arg0 ;
-(id)headers;
-(id)headersIfAvailable;
-(id)init;
-(id)messageBody;
-(id)messageBodyIfAvailable;
-(id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg0 ;
-(id)messageBodyUpdatingFlags:(BOOL)arg0 ;
-(id)messageData;
-(id)messageDataHolder;
-(id)messageDataHolderIsComplete:(*BOOL)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)messageDataIsComplete:(*BOOL)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)messageDataIsPartial:(*BOOL)arg0 ;
-(id)messageID;
-(id)messageIDHeader;
-(id)messageIDHeaderHash;
-(id)messageIDHeaderInFortyBytesOrLess;
-(id)messageURL;
-(id)path;
-(id)persistentID;
-(id)preferredEmailAddressToReplyWith;
-(id)senderAddressComment;
-(id)senders;
-(id)sendersIfCached;
-(id)uniqueArray:(id)arg0 withStore:(id)arg1 ;
-(unsigned int)preferredEncoding;
-(void)calculateAttachmentInfoFromBody:(id)arg0 ;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg0 ;
-(void)setContentType:(id)arg0 ;
-(void)setConversationID:(NSInteger)arg0 ;
-(void)setGenerationNumber:(NSUInteger)arg0 ;
-(void)setMessageData:(id)arg0 isPartial:(BOOL)arg1 ;
-(void)setMessageIDHash:(NSInteger)arg0 ;
-(void)setMessageIDHeader:(id)arg0 ;
-(void)setMessageInfo:(id)arg0 to:(id)arg1 cc:(id)arg2 bcc:(id)arg3 sender:(id)arg4 dateReceivedTimeIntervalSince1970:(CGFloat)arg5 dateSentTimeIntervalSince1970:(CGFloat)arg6 messageIDHash:(NSInteger)arg7 conversationID:(NSInteger)arg8 summary:(id)arg9 ;
-(void)setMessagePropertiesFromMessage:(id)arg0 ;
-(void)setMessageURL:(id)arg0 ;
-(void)setNumberOfAttachments:(NSUInteger)arg0 ;
-(void)setNumberOfAttachments:(NSUInteger)arg0 isSigned:(BOOL)arg1 isEncrypted:(BOOL)arg2 ;
-(void)setPreferredEncoding:(unsigned int)arg0 ;
-(void)setSender:(id)arg0 ;


@end


#endif