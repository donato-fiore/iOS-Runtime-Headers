// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKVIRTUALCARDMANAGER_H
#define PKVIRTUALCARDMANAGER_H


#import <Foundation/Foundation.h>

#import "PKInAppPaymentService.h"
#import "PKAccountService.h"

@interface PKVirtualCardManager : NSObject {
    PKInAppPaymentService *_inAppPaymentService;
    PKAccountService *_accountService;
}




-(id)init;
-(id)urlToPassDetailsForVirtualCard:(id)arg0 ;
-(void)activeVirtualCardsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)credentialsForVirtualCard:(id)arg0 authorization:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)dismissDetailsForVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)promptDetailsForVirtualCard:(id)arg0 completion:(id)arg1 ;
-(void)queryKeychainForVirtualCard:(id)arg0 ;


@end


#endif