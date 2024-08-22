// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTENHANCEDMERCHANTSFETCHER_H
#define PKACCOUNTENHANCEDMERCHANTSFETCHER_H

@class NSArray, NSMutableDictionary, NSString;
@protocol PKAccountServiceObserver;

#import <Foundation/Foundation.h>

#import "PKAccount.h"
#import "PKAccountService.h"

@interface PKAccountEnhancedMerchantsFetcher : NSObject <PKAccountServiceObserver>

 {
    PKAccount *_account;
    PKAccountService *_accountService;
    NSArray *_items;
    NSArray *_orderings;
    os_unfair_lock_s _itemsLock;
    NSMutableDictionary *_tokenToUpdateHandlerMap;
    os_unfair_lock_s _updateHandlersLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addUpdateHandler:(id)arg0 ;
-(id)enhancedMerchants;
-(id)enhancedMerchantsWithOrderingContext:(NSUInteger)arg0 ;
-(id)initWithAccount:(id)arg0 accountService:(id)arg1 ;
-(void)_executeWithLock:(id)arg0 ;
-(void)_triggerUpdateHandlers;
-(void)dealloc;
-(void)didUpdateAccountEnhancedMerchants:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)reloadDataWithCompletion:(id)arg0 ;
-(void)removeUpdateHandler:(id)arg0 ;
-(void)setItems:(id)arg0 ;


@end


#endif