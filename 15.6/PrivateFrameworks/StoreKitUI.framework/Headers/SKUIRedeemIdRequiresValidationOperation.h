// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIREDEEMIDREQUIRESVALIDATIONOPERATION_H
#define SKUIREDEEMIDREQUIRESVALIDATIONOPERATION_H

@class ISOperation, NSString;
@protocol ISDialogOperationDelegate;


#import "SKUIRedeemViewControllerLegacy.h"

@interface SKUIRedeemIdRequiresValidationOperation : ISOperation <ISDialogOperationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SKUIRedeemViewControllerLegacy *redeemViewController; // ivar: _redeemViewController
@property (copy) id *resultBlock; // ivar: _resultBlock
@property (readonly) Class superclass;


-(BOOL)_performAuthentication;
-(id)_authenticationContext;
-(id)_subOperationWithBagKey:(id)arg0 ;
-(void)_logResultsForSuccess:(BOOL)arg0 shouldVerify:(BOOL)arg1 failureReason:(id)arg2 error:(id)arg3 ;
-(void)main;
-(void)operation:(id)arg0 selectedButton:(id)arg1 ;


@end


#endif