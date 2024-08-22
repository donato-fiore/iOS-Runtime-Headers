// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STEMAILMESSAGE_H
#define STEMAILMESSAGE_H

@class STSiriModelObject, NSArray, NSString, NSURL, STPerson;



@interface STEmailMessage : STSiriModelObject

@property (retain, nonatomic) NSArray *bccRecipients; // ivar: _bccRecipients
@property (retain, nonatomic) NSArray *ccRecipients; // ivar: _ccRecipients
@property (copy, nonatomic) NSString *messageBody; // ivar: _messageBody
@property (retain, nonatomic) NSURL *messageIdentifier; // ivar: _messageIdentifier
@property (retain, nonatomic) NSArray *receivingAddresses; // ivar: _receivingAddresses
@property (retain, nonatomic) STPerson *sender; // ivar: _sender
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSArray *toRecipients; // ivar: _toRecipients
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)_aceContextObjectValue;
-(id)_personAttributesForRecipients:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif