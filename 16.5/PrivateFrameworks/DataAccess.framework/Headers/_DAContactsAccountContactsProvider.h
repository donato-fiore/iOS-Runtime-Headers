// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DACONTACTSACCOUNTCONTACTSPROVIDER_H
#define _DACONTACTSACCOUNTCONTACTSPROVIDER_H

@class CNContactStore;


#import "DAContactsAccountProvider.h"

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg0 ;
-(id)accountForContainerWithIdentifier:(id)arg0 ;
-(id)allAccounts;
-(id)fetchedAccountWithExternalIdentifier:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif