// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUPURCHASECONTINUATION_H
#define SUPURCHASECONTINUATION_H



#import "SUContinuation.h"
#import "SUPurchaseManager.h"

@interface SUPurchaseContinuation : SUContinuation

@property (readonly, nonatomic) id *purchase; // ivar: _purchase
@property (weak, nonatomic) SUPurchaseManager *purchaseManager; // ivar: _purchaseManager


-(id)initWithPurchase:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif