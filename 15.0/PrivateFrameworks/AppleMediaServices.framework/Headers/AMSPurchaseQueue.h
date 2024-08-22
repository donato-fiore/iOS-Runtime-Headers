// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPURCHASEQUEUE_H
#define AMSPURCHASEQUEUE_H

@class NSMutableArray, NSString, NSLock;
@protocol AMSPurchaseDelegate, AMSBagConsumer, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSURLSession.h"
#import "AMSPurchaseQueueConfiguration.h"

@interface AMSPurchaseQueue : NSObject <AMSPurchaseDelegate, AMSBagConsumer>

 {
    AMSURLSession *_session;
}


@property (retain, nonatomic) NSMutableArray *batches; // ivar: _batches
@property (retain, nonatomic) AMSPurchaseQueueConfiguration *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSuspeneded; // ivar: _isSuspeneded
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (readonly) Class superclass;


+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)createBagForSubProfile;
-(id)enquePurchases:(id)arg0 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_handleNextPurchase;
-(void)_processPurchase:(id)arg0 ;
-(void)purchase:(id)arg0 handleAuthenticateRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleDialogRequest:(id)arg1 completion:(id)arg2 ;
-(void)purchase:(id)arg0 handleEngagementRequest:(id)arg1 completion:(id)arg2 ;
-(void)setSuspended:(BOOL)arg0 logUUID:(id)arg1 ;


@end


#endif