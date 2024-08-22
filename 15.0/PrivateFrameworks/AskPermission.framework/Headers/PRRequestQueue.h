// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRREQUESTQUEUE_H
#define PRREQUESTQUEUE_H

@class NSString;
@protocol PRRequestDelegate;

#import <Foundation/Foundation.h>


@interface PRRequestQueue : NSObject

@property (weak, nonatomic) NSObject<PRRequestDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *identifier; // ivar: _identifier


+(id)_requestQueueForIdentifier:(id)arg0 ;
+(id)defaultRequestQueue;
-(id)_pushToken;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithAdamID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_attemptLocalApprovalForStorePurchaseRequestWithItemIdentifier:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_clearCachedRequests;
-(void)_deleteTestValueFromTouchIDKeychain;
-(void)_didReceiveStorePushNotificationWithPayload:(id)arg0 ;
-(void)_didStartNewPurchaseRequestWithInfo:(id)arg0 ;
-(void)_pendingStorePurchaseRequestForItemIdentifier:(NSUInteger)arg0 replyBlock:(id)arg1 ;
-(void)_readTestValueFromTouchIDKeychain;
-(void)_registerPushToken;
-(void)_requestToBePresentedWithReply:(id)arg0 ;
-(void)_userDidApproveRequestWithRequestID:(id)arg0 ;
-(void)_userDidDenyRequestWithRequestID:(id)arg0 ;
-(void)_writeTestValueToTouchIDKeychain;
-(void)askPermissionTo:(id)arg0 withRequestInfo:(id)arg1 completionHandler:(id)arg2 ;
-(void)attemptLocalApprovalForRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)pendingRequestsWithCompletionHandler:(id)arg0 ;


@end


#endif