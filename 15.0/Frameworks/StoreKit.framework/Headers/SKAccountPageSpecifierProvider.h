// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKACCOUNTPAGESPECIFIERPROVIDER_H
#define SKACCOUNTPAGESPECIFIERPROVIDER_H

@class AIDAAccountManager, PSSpecifier, NSString, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface SKAccountPageSpecifierProvider : NSObject <AAUISpecifierProvider>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (retain, nonatomic) PSSpecifier *activelyLoadingSpecifier; // ivar: _activelyLoadingSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)_isSingleIdentity;
-(id)_appleAccount;
-(id)_storeAccount;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_accountPageSpecifierWasTapped:(id)arg0 ;


@end


#endif