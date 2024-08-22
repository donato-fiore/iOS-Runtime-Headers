// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DACONTACTSACCOUNTCONTACTSPROVIDER_H
#define _DACONTACTSACCOUNTCONTACTSPROVIDER_H

@class CNContactStore;


#import "DAContactsAccountProvider.h"

@interface _DAContactsAccountContactsProvider : DAContactsAccountProvider

@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)accountForContainerWithIdentifier:(id)arg0 ;
-(id)accountWithExternalIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)allAccounts;
-(id)initWithContactStore:(id)arg0 ;


@end


#endif