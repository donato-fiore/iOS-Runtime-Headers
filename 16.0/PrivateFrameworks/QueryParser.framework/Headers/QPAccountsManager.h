// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QPACCOUNTSMANAGER_H
#define QPACCOUNTSMANAGER_H

@class NSArray, CNContactStoreConfiguration;

#import <Foundation/Foundation.h>


@interface QPAccountsManager : NSObject

@property (retain, nonatomic) NSArray *accountTypes; // ivar: _accountTypes
@property (retain, nonatomic) CNContactStoreConfiguration *contactsConfiguration; // ivar: _contactsConfiguration
@property (retain) NSArray *contentsArray; // ivar: _contentsArray


+(id)sharedAccountsManager;
-(id)nameToEmailAddresses;
-(void)update:(id)arg0 ;


@end


#endif