// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DACONTACTSACCOUNTPROVIDER_H
#define DACONTACTSACCOUNTPROVIDER_H


#import <Foundation/Foundation.h>


@interface DAContactsAccountProvider : NSObject



+(id)providerWithAddressBook:(*void)arg0 ;
+(id)providerWithContactStore:(id)arg0 ;
-(id)accountForContainerWithIdentifier:(id)arg0 ;
-(id)accountWithExternalIdentifier:(id)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)allAccounts;


@end


#endif