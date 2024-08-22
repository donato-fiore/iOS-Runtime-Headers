// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSIRIMESSAGE_H
#define STSIRIMESSAGE_H

@class NSString, NSArray, NSURL, NSDate;


#import "STSiriModelObject.h"
#import "STContactAddress.h"

@interface STSiriMessage : STSiriModelObject {
    BOOL _outbound;
    STContactAddress *_senderAddress;
    NSString *_senderInternalGUID;
    NSArray *_recipientAddresses;
    NSString *_groupName;
    NSString *_groupNameId;
    NSString *_subjectText;
    NSString *_bodyText;
    NSString *_effect;
    NSURL *_attachmentURL;
    NSDate *_sendDate;
    NSString *_chatIdentifier;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isOutbound;
-(id)_aceContextObjectValue;
-(id)attachmentURL;
-(id)bodyText;
-(id)chatIdentifier;
-(id)effect;
-(id)groupName;
-(id)groupNameId;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)recipientAddresses;
-(id)sendDate;
-(id)senderAddress;
-(id)senderInternalGUID;
-(id)subjectText;
-(void)_setSenderInternalGUID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAttachmentURL:(id)arg0 ;
-(void)setBodyText:(id)arg0 ;
-(void)setChatIdentifier:(id)arg0 ;
-(void)setEffect:(id)arg0 ;
-(void)setGroupName:(id)arg0 ;
-(void)setGroupNameId:(id)arg0 ;
-(void)setOutbound:(BOOL)arg0 ;
-(void)setRecipientAddresses:(id)arg0 ;
-(void)setSendDate:(id)arg0 ;
-(void)setSenderAddress:(id)arg0 ;
-(void)setSubjectText:(id)arg0 ;


@end


#endif