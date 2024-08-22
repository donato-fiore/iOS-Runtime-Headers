// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFAKEACCOUNTSPROVIDER_H
#define MFFAKEACCOUNTSPROVIDER_H

@class NSSet, NSString, NSArray;
@protocol MFAccountsProvider, EDAccountsProvider;

#import <Foundation/Foundation.h>


@interface MFFakeAccountsProvider : NSObject <MFAccountsProvider, EDAccountsProvider>



@property (copy, nonatomic) NSSet *autofetchAccounts; // ivar: _autofetchAccounts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *displayedAccounts; // ivar: _displayedAccounts
@property (readonly, nonatomic, getter=isDisplayingMultipleAccounts) BOOL displayingMultipleAccounts;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *mailAccounts; // ivar: _mailAccounts
@property (copy, nonatomic) NSArray *orderedAccounts; // ivar: _orderedAccounts
@property (readonly, copy, nonatomic) NSArray *receivingAddresses;
@property (readonly) Class superclass;




@end


#endif