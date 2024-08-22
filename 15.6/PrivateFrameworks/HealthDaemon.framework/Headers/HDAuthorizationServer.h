// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDAUTHORIZATIONSERVER_H
#define HDAUTHORIZATIONSERVER_H

@class NSMutableArray, NSUUID, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDHealthStoreClient.h"

@interface HDAuthorizationServer : NSObject {
    uint8_t _invalidated;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDHealthStoreClient *_client;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}


@property (readonly, copy) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier


-(BOOL)isAuthorizationStatusDeterminedForTypes:(id)arg0 error:(*id)arg1 ;
-(id)authorizationStatusForType:(id)arg0 error:(*id)arg1 ;
-(id)initWithClient:(id)arg0 queue:(id)arg1 ;
-(id)readAuthorizationStatusForType:(id)arg0 error:(*id)arg1 ;
-(id)readAuthorizationWithTypes:(id)arg0 error:(*id)arg1 ;
-(void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg0 completion:(id)arg1 ;
-(void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)createRecalibrateEstimatesRequestRecordForSampleType:(id)arg0 effectiveDate:(id)arg1 handler:(id)arg2 ;
-(void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg0 error:(id)arg1 ;
// -(void)enqueueAuthorizationRequestToWriteTypes:(id)arg0 readTypes:(id)arg1 authorizationNeededHandler:(id)arg2 requestCompletionHandler:(unk)arg3  ;
// -(void)enqueueObjectAuthorizationRequestWithContext:(id)arg0 promptIfNeeded:(BOOL)arg1 authorizationNeededHandler:(id)arg2 completion:(unk)arg3  ;
// -(void)handleAuthorizationRequestsForBundleIdentifier:(id)arg0 promptHandler:(id)arg1 requestCompletionHandler:(unk)arg2  ;
// -(void)handleAuthorizationRequestsWithPromptHandler:(id)arg0 requestCompletionHandler:(unk)arg1  ;
// -(void)handleObjectAuthorizationRequestsWithPromptHandler:(id)arg0 completion:(unk)arg1  ;
-(void)invalidate;
// -(void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg0 onQueue:(id)arg1 usingBlock:(id)arg2 errorHandler:(unk)arg3  ;
// -(void)performIfAuthorizedToReadTypes:(id)arg0 onQueue:(id)arg1 usingBlock:(id)arg2 errorHandler:(unk)arg3  ;
// -(void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg0 onQueue:(id)arg1 usingBlock:(id)arg2 errorHandler:(unk)arg3  ;
-(void)updateDefaultAuthorizationStatusesWithCompletion:(id)arg0 ;


@end


#endif