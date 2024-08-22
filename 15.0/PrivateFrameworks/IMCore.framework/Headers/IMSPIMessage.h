// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMSPIMESSAGE_H
#define IMSPIMESSAGE_H

@class NSArray, NSAttributedString, NSString, NSDate, PKCurrencyAmount, LPLinkMetadata, NSURL;

#import <Foundation/Foundation.h>

#import "IMSPIMessage.h"
#import "IMSPIHandle.h"

@interface IMSPIMessage : NSObject

@property (readonly) BOOL allowedByScreenTime;
@property (retain) NSArray *attachments; // ivar: _attachments
@property (retain) NSAttributedString *attributedText; // ivar: _attributedText
@property (retain) NSString *body; // ivar: _body
@property (retain) NSString *bundleId; // ivar: _bundleId
@property (retain) NSArray *chatGuids; // ivar: _chatGuids
@property (retain) NSString *chatIdentifier; // ivar: _chatIdentifier
@property (retain) NSDate *date; // ivar: _date
@property (retain) NSDate *dateForLastReadMessageInChat; // ivar: _dateForLastReadMessageInChat
@property (retain) NSDate *dateRead; // ivar: _dateRead
@property (retain) NSString *displayAppName; // ivar: _displayAppName
@property (retain) NSString *displayName; // ivar: _displayName
@property (retain) NSString *effect; // ivar: _effect
@property (retain) NSString *groupID; // ivar: _groupID
@property (retain) NSString *guid; // ivar: _guid
@property BOOL hasDataDetectedResults; // ivar: _hasDataDetectedResults
@property BOOL isAudioMessage; // ivar: _isAudioMessage
@property BOOL isGroupChat; // ivar: _isGroupChat
@property BOOL isOutgoing; // ivar: _isOutgoing
@property BOOL isRead; // ivar: _isRead
@property NSInteger itemType; // ivar: _itemType
@property (readonly) NSDate *lastReadDate;
@property NSInteger messageID; // ivar: _messageID
@property NSInteger messageType; // ivar: _messageType
@property (retain) PKCurrencyAmount *peerPaymentAmount; // ivar: _peerPaymentAmount
@property (retain) NSArray *recipients; // ivar: _recipients
@property (retain) IMSPIMessage *referencedMessage; // ivar: _referencedMessage
@property (retain) LPLinkMetadata *richLinkMetadata; // ivar: _richLinkMetadata
@property (retain) IMSPIHandle *sender; // ivar: _sender
@property (retain) NSString *service; // ivar: _service
@property (retain) NSString *subject; // ivar: _subject
@property (retain) NSString *summary; // ivar: _summary
@property (retain) NSString *text; // ivar: _text
@property (readonly) NSURL *url;


-(id)description;
-(id)spiChatWithQOS:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif