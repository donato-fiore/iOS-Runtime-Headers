// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAEMAILEMAIL_H
#define SAEMAILEMAIL_H

@class NSArray, NSDate, NSString, NSNumber, NSURL;


#import "SADomainObject.h"
#import "SAPersonAttribute.h"

@interface SAEmailEmail : SADomainObject

@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSDate *dateSent;
@property (retain, nonatomic) SAPersonAttribute *fromEmail;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messagePreview;
@property (copy, nonatomic) NSNumber *outgoing;
@property (copy, nonatomic) NSArray *receivingAddresses;
@property (copy, nonatomic) NSArray *recipientsBcc;
@property (copy, nonatomic) NSArray *recipientsCc;
@property (copy, nonatomic) NSArray *recipientsTo;
@property (copy, nonatomic) NSURL *referenceId;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *type;


+(id)email;
+(id)emailWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif