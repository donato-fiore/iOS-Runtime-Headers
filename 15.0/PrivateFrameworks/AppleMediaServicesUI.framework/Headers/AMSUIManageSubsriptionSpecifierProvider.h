// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIMANAGESUBSRIPTIONSPECIFIERPROVIDER_H
#define AMSUIMANAGESUBSRIPTIONSPECIFIERPROVIDER_H

@class AIDAAccountManager, PSSpecifier, NSString, NSArray;
@protocol AAUISpecifierProvider, AMSUIWebDelegate, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface AMSUIManageSubsriptionSpecifierProvider : NSObject <AAUISpecifierProvider, AMSUIWebDelegate>



@property (retain, nonatomic) AIDAAccountManager *accountManager; // ivar: _accountManager
@property (retain, nonatomic) PSSpecifier *activelyLoadingSpecifier; // ivar: _activelyLoadingSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(BOOL)_isSingleIdentity;
-(BOOL)webViewController:(id)arg0 handleDelegateAction:(id)arg1 completion:(id)arg2 ;
-(id)_appleAccount;
-(id)_findViewController;
-(id)_storeAccount;
-(id)initWithAccountManager:(id)arg0 ;
-(void)_subscriptionsSpecifierWasTapped:(id)arg0 ;
-(void)webViewController:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)webViewController:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif