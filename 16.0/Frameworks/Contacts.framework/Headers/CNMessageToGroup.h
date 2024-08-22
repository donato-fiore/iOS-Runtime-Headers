// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMESSAGETOGROUP_H
#define CNMESSAGETOGROUP_H


#import <Foundation/Foundation.h>

#import "CNContactFormatter.h"

@interface CNMessageToGroup : NSObject

@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter


+(id)descriptorForRequiredKeys;
+(id)os_log;
-(id)emailAddressForContact:(id)arg0 ;
-(id)init;
-(id)messageUrlForContacts:(id)arg0 ;
-(id)messagingAddressForContact:(id)arg0 ;
-(id)santizeMessagingAddress:(id)arg0 ;


@end


#endif