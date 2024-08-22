// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMAILTOGROUP_H
#define CNMAILTOGROUP_H


#import <Foundation/Foundation.h>

#import "CNContactFormatter.h"

@interface CNMailToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter


+(id)descriptorForRequiredKeys;
+(id)os_log;
-(BOOL)allContactsHaveEmailAddress:(id)arg0 ;
-(id)emailAddressForContact:(id)arg0 ;
-(id)init;
-(id)mailUrlForContacts:(id)arg0 ;
-(id)mailUrlForContacts:(id)arg0 needsEmailAddresses:(BOOL)arg1 ;
-(id)mailingAddressForContact:(id)arg0 ;
-(id)santizeMailingAddress:(id)arg0 ;


@end


#endif