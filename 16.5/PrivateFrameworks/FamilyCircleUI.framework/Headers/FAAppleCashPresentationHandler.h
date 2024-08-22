// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAAPPLECASHPRESENTATIONHANDLER_H
#define FAAPPLECASHPRESENTATIONHANDLER_H

@class PKPeerPaymentAssociatedAccountPresentationContext, UINavigationController, PKPeerPaymentAssociatedAccountsController;

#import <Foundation/Foundation.h>


@interface FAAppleCashPresentationHandler : NSObject

@property (retain, nonatomic) PKPeerPaymentAssociatedAccountPresentationContext *context; // ivar: _context
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) PKPeerPaymentAssociatedAccountsController *peerPaymentController; // ivar: _peerPaymentController


-(id)initWithNavigationController:(id)arg0 ;
-(void)presentPeerPaymentControllerWithAttributes:(id)arg0 completion:(id)arg1 ;


@end


#endif