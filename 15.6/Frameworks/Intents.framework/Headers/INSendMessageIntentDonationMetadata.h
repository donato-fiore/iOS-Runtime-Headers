// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSENDMESSAGEINTENTDONATIONMETADATA_H
#define INSENDMESSAGEINTENTDONATIONMETADATA_H



#import "INIntentDonationMetadata.h"

@interface INSendMessageIntentDonationMetadata : INIntentDonationMetadata

@property (nonatomic) BOOL mentionsCurrentUser; // ivar: _mentionsCurrentUser
@property (nonatomic) BOOL notifyRecipientAnyway; // ivar: _notifyRecipientAnyway
@property (nonatomic) NSUInteger recipientCount; // ivar: _recipientCount
@property (nonatomic, getter=isReplyToCurrentUser) BOOL replyToCurrentUser; // ivar: _replyToCurrentUser


+(BOOL)supportsSecureCoding;
+(Class)_intentClass;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif