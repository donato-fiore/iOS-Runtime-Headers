// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRECIPIENT_H
#define PXRECIPIENT_H

@class NSSet, CNContact, NSString;
@protocol PXCMMInvitationParticipant, NSCopying;

#import <Foundation/Foundation.h>

#import "PXRecipientTransport.h"

@interface PXRecipient : NSObject <PXCMMInvitationParticipant, NSCopying>



@property (readonly, nonatomic) NSSet *allEmails; // ivar: _allEmails
@property (readonly, nonatomic) NSSet *allPhones; // ivar: _allPhones
@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddressString;
@property (readonly, copy, nonatomic) NSString *emailAddressString; // ivar: _emailAddressString
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedName; // ivar: _localizedName
@property (readonly, nonatomic) NSString *phoneNumberString;
@property (readonly, copy, nonatomic) NSString *phoneNumberString; // ivar: _phoneNumberString
@property (retain, nonatomic) PXRecipientTransport *suggestedTransport; // ivar: _suggestedTransport
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *unformattedAllPhones; // ivar: _unformattedAllPhones


+(id)_contactForAddress:(id)arg0 recipientKind:(NSInteger)arg1 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAddress:(id)arg0 nameComponents:(id)arg1 recipientKind:(NSInteger)arg2 ;
-(id)initWithContact:(id)arg0 address:(id)arg1 nameComponents:(id)arg2 recipientKind:(NSInteger)arg3 ;
-(id)initWithEmailAddress:(id)arg0 phoneNumber:(id)arg1 nameComponents:(id)arg2 ;


@end


#endif