// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACTIONCOMMERCETRANSACTION_H
#define VUIACTIONCOMMERCETRANSACTION_H

@class NSString, NSDictionary;


#import "VUIAction.h"
#import "VUIAppContext.h"

@interface VUIActionCommerceTransaction : VUIAction

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) NSString *commerceActionRef; // ivar: _commerceActionRef
@property (copy, nonatomic) NSDictionary *contextData; // ivar: _contextData


+(BOOL)isTransactionInProgressForBuyParams:(id)arg0 ;
+(id)_extractCanonicalIDFromTransactionOffer:(id)arg0 ;
+(id)extractSalableAdamIDFromBuyParams:(id)arg0 ;
+(void)_saveInterruptedPurchaseTransactionContextInfo:(id)arg0 canonicalID:(id)arg1 error:(id)arg2 ;
+(void)displayConfirmationUIWithTitle:(id)arg0 andBody:(id)arg1 ;
+(void)displayConfirmationUIWithTitle:(id)arg0 andBody:(id)arg1 completion:(id)arg2 ;
-(id)_preflightManagerForTransactionOffer:(id)arg0 ;
-(id)initWithActionRef:(id)arg0 contextData:(id)arg1 appContext:(id)arg2 ;
-(void)_handleBuyCompletionForOffer:(id)arg0 appContext:(id)arg1 shouldPlayWhenDone:(BOOL)arg2 serverResponse:(id)arg3 completionHandler:(id)arg4 ;
-(void)_handleSubscriptionCompletionForOffer:(id)arg0 appContext:(id)arg1 shouldInitiateFamilySetup:(BOOL)arg2 serverResponse:(id)arg3 completionHandler:(id)arg4 ;
-(void)_notifyDidEndPurchaseType:(NSInteger)arg0 transactionOffer:(id)arg1 withError:(id)arg2 ;
-(void)_notifyDidStartPurchaseType:(NSInteger)arg0 transactionOffer:(id)arg1 ;
-(void)_recordLog:(id)arg0 withBuyParams:(id)arg1 ;
-(void)_showUIConfirmationForSubTransaction:(id)arg0 completion:(id)arg1 ;
-(void)_startTransactionOfOffer:(id)arg0 withAppContext:(id)arg1 andCompletionHandler:(id)arg2 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif