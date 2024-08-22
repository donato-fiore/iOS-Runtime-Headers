// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTENHANCEDMERCHANTSFETCHER_H
#define PKACCOUNTENHANCEDMERCHANTSFETCHER_H

@class NSString, NSArray, NSDate, NSMutableDictionary;
@protocol PKAccountServiceObserver;

#import <Foundation/Foundation.h>

#import "PKAccountService.h"
#import "PKAccountEnhancedMerchantBehavior.h"

@interface PKAccountEnhancedMerchantsFetcher : NSObject <PKAccountServiceObserver>

 {
    NSString *_accountIdentifier;
    PKAccountService *_accountService;
    NSArray *_items;
    NSArray *_orderings;
    PKAccountEnhancedMerchantBehavior *_behavior;
    NSDate *_lastUpdate;
    os_unfair_lock_s _itemsLock;
    NSMutableDictionary *_tokenToUpdateHandlerMap;
    os_unfair_lock_s _updateHandlersLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)dataIsWithinThresholdForCooldownLevel:(NSUInteger)arg0 ;
-(id)_enhancedMerchantBehaviorCopy;
-(id)_lastUpdateCopy;
-(id)addUpdateHandler:(id)arg0 ;
-(id)enhancedMerchantMatchingPaymentIdentifier:(id)arg0 ;
-(id)enhancedMerchants;
-(id)enhancedMerchantsWithOrderingContext:(NSUInteger)arg0 ;
-(id)initWithAccountIdentifier:(id)arg0 accountService:(id)arg1 ;
-(void)_executeWithLock:(id)arg0 ;
-(void)_reloadDataIncludeOrderings:(BOOL)arg0 includeBehavior:(BOOL)arg1 includeMerchants:(BOOL)arg2 completion:(id)arg3 ;
-(void)_setLastUpdate:(id)arg0 ;
-(void)_triggerUpdateHandlers;
-(void)dealloc;
-(void)didUpdateAccountEnhancedMerchants:(id)arg0 accountIdentifier:(id)arg1 lastUpdate:(id)arg2 ;
-(void)reloadDataWithCompletion:(id)arg0 ;
-(void)removeUpdateHandler:(id)arg0 ;
-(void)setItems:(id)arg0 ;
-(void)updateDataWithCooldownLevel:(NSUInteger)arg0 ignoreErrorBackoff:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif