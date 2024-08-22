// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPURCHASEQUEUE_H
#define AMSPURCHASEQUEUE_H

@class NSString;
@protocol AMSPurchaseDelegate, AMSBagConsumer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSPurchaseQueueBatchList.h"
#import "AMSPurchaseQueueConfiguration.h"
#import "AMSThreadSafeSet.h"

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer>



@property (retain, nonatomic) AMSPurchaseQueueBatchList *batches; // ivar: _batches
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AMSThreadSafeSet *preAuthenticatedDSIDs; // ivar: _preAuthenticatedDSIDs
@property (readonly) Class superclass;
@property (nonatomic) BOOL suspended; // ivar: _suspended


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(BOOL)isSuspended;
-(id)_createPurchasePromiseForTask:(id)arg0 purchase:(id)arg1 ;
-(id)_performPreauthenticateForPurchaseTask:(id)arg0 ;
-(id)_processPurchase:(id)arg0 ;
-(id)enquePurchases:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleNextPurchase;
-(void)_handleResult:(id)arg0 error:(id)arg1 forPurchase:(id)arg2 ;
-(void)purchase:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;


@end


#endif