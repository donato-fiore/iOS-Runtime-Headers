// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSEARCHABLEINDEXRICHLINKITEMMETADATUM_H
#define EDSEARCHABLEINDEXRICHLINKITEMMETADATUM_H

@class NSString, NSDate, NSArray;
@protocol EDSearchableIndexRichLinkItemMetadatumBuilder;

#import <Foundation/Foundation.h>


@interface EDSearchableIndexRichLinkItemMetadatum : NSObject <EDSearchableIndexRichLinkItemMetadatumBuilder>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (retain, nonatomic) NSDate *dateSent; // ivar: _dateSent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mailboxIdentifiers; // ivar: _mailboxIdentifiers
@property (copy, nonatomic) NSArray *recipientAddresses; // ivar: _recipientAddresses
@property (copy, nonatomic) NSString *richLinkID; // ivar: _richLinkID
@property (copy, nonatomic) NSString *senderAddress; // ivar: _senderAddress
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *url; // ivar: _url


-(id)initWithBuilder:(id)arg0 ;


@end


#endif