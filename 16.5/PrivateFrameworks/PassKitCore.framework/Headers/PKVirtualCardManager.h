// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKVIRTUALCARDMANAGER_H
#define PKVIRTUALCARDMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKInAppPaymentService.h"
#import "PKAccountService.h"
#import "PKPaymentService.h"

@interface PKVirtualCardManager : NSObject {
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
    PKPaymentService *_paymentService;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *virtualCardQueue; // ivar: _virtualCardQueue


+(void)isVPANAutoFillSupported:(id)arg0 ;
-(id)init;
-(id)urlToListOfCards;
-(id)urlToPassDetailsForVirtualCard:(id)arg0 ;
-(void)accountVirtualCardsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)activeVirtualCardsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)credentialsForVirtualCard:(id)arg0 authorization:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)credentialsForVirtualCard:(id)arg0 authorization:(id)arg1 options:(NSUInteger)arg2 merchantHost:(id)arg3 completion:(id)arg4 ;
-(void)dismissDetailsForVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)promptDetailsForVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)queryKeychainForVirtualCard:(id)arg0 ;
-(void)vpanVirtualCardsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif