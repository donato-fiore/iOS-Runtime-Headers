// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSMESSAGERESULTBUILDER_H
#define SSMESSAGERESULTBUILDER_H

@class NSArray, NSString, NSDate;


#import "SSResultBuilder.h"

@interface SSMessageResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSArray *attachmentNames; // ivar: _attachmentNames
@property (retain, nonatomic) NSArray *attachmentPaths; // ivar: _attachmentPaths
@property (retain, nonatomic) NSArray *attachmentTypes; // ivar: _attachmentTypes
@property (retain, nonatomic) NSString *groupDisplayName; // ivar: _groupDisplayName
@property (retain, nonatomic) NSString *groupPhotoPath; // ivar: _groupPhotoPath
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (retain, nonatomic) NSArray *recipientContactIds; // ivar: _recipientContactIds
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (retain, nonatomic) NSDate *sendDate; // ivar: _sendDate
@property (retain, nonatomic) NSArray *senderContactIds; // ivar: _senderContactIds
@property (retain, nonatomic) NSArray *senders; // ivar: _senders


+(BOOL)isCoreSpotlightResult;
+(id)bundleId;
-(id)buildAttachmentSummary;
-(id)buildAttachmentThumbnail;
-(id)buildCompactCardSection;
-(id)buildDescriptions;
-(id)buildInlineCardSection;
-(id)buildThumbnail;
-(id)buildTitle;
-(id)initWithResult:(id)arg0 ;


@end


#endif