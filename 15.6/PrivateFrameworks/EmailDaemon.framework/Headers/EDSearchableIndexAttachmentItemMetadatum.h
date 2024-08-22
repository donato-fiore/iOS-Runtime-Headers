// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDSEARCHABLEINDEXATTACHMENTITEMMETADATUM_H
#define EDSEARCHABLEINDEXATTACHMENTITEMMETADATUM_H

@class NSString, NSURL, NSDate, NSArray;
@protocol EDSearchableIndexAttachmentItemMetadatumBuilder;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexAttachmentItemMetadatum : NSObject <EDSearchableIndexAttachmentItemMetadatumBuilder>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSURL *attachmentFileURL; // ivar: _attachmentFileURL
@property (readonly, nonatomic) BOOL canReadAttachmentFile;
@property (retain, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (retain, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mailboxIdentifiers; // ivar: _mailboxIdentifiers
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (readonly) Class superclass;


-(id)initWithAttachmentFileURL:(id)arg0 builder:(id)arg1 ;


@end


#endif