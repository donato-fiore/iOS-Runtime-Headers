// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DACONTACTSACCOUNTABLEGACYPROVIDER_H
#define _DACONTACTSACCOUNTABLEGACYPROVIDER_H



#import "DAContactsAccountProvider.h"

@interface _DAContactsAccountABLegacyProvider : DAContactsAccountProvider

@property (readonly, nonatomic) *void addressBook; // ivar: _addressBook


-(id)accountByCreatingAccountWithExternalIdentifier:(id)arg0 ;
-(id)accountForContainerWithIdentifier:(id)arg0 ;
-(id)allAccounts;
-(id)fetchedAccountWithExternalIdentifier:(id)arg0 ;
-(id)initWithAddressBook:(*void)arg0 ;
-(void)dealloc;


@end


#endif