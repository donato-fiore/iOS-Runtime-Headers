// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASEMAILITEM_H
#define ASEMAILITEM_H

@class NSArray, NSString, NSData, NSDate;


#import "ASChangedCollectionLeaf.h"
#import "ASMeetingRequest.h"

@interface ASEmailItem : ASChangedCollectionLeaf {
    BOOL _shouldIncludeExceptionDateInUid;
}


@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSArray *bcc; // ivar: _bcc
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) int bodySize; // ivar: _bodySize
@property (nonatomic) BOOL bodyTruncated; // ivar: _bodyTruncated
@property (nonatomic) int bodyType; // ivar: _bodyType
@property (copy, nonatomic) NSArray *cc; // ivar: _cc
@property (retain, nonatomic) NSData *conversationId; // ivar: _conversationId
@property (retain, nonatomic) NSData *conversationIndex; // ivar: _conversationIndex
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSString *displayTo; // ivar: _displayTo
@property (nonatomic) BOOL flagged; // ivar: _flagged
@property (nonatomic) BOOL flaggedIsSet; // ivar: _flaggedIsSet
@property (retain, nonatomic) NSString *folderId; // ivar: _folderId
@property (copy, nonatomic) NSArray *from; // ivar: _from
@property (nonatomic) BOOL hasAttachments; // ivar: _hasAttachments
@property (nonatomic) int importance; // ivar: _importance
@property (nonatomic) BOOL isDraft; // ivar: _isDraft
@property (nonatomic) int lastVerb; // ivar: _lastVerb
@property (retain, nonatomic) NSString *longID; // ivar: _longID
@property (readonly, nonatomic) int meetingMessageType;
@property (retain, nonatomic, setter=_setMeetingRequest:) ASMeetingRequest *meetingRequest; // ivar: _meetingRequest
@property (readonly, nonatomic) NSData *meetingRequestMetaData;
@property (readonly, nonatomic) NSString *meetingRequestUUID;
@property (retain, nonatomic) NSString *messageClass; // ivar: _messageClass
@property (retain, nonatomic) NSString *mimeData; // ivar: _mimeData
@property (retain, nonatomic) NSString *preview; // ivar: _preview
@property (nonatomic) BOOL read; // ivar: _read
@property (nonatomic) BOOL readIsSet; // ivar: _readIsSet
@property (copy, nonatomic) NSArray *replyTo; // ivar: _replyTo
@property (retain, nonatomic) NSString *sender; // ivar: _sender
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSString *threadTopic; // ivar: _threadTopic
@property (copy, nonatomic) NSArray *to; // ivar: _to
@property (nonatomic) BOOL verbIsSet; // ivar: _verbIsSet


+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(BOOL)_isSearchResult;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_processApplicationData:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;
-(void)postProcessApplicationData;
-(void)processAppDataForStream;
-(void)setBCCString:(id)arg0 ;
-(void)setCCString:(id)arg0 ;


@end


#endif