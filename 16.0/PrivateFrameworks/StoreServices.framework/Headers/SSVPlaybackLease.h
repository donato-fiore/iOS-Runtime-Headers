// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVPLAYBACKLEASE_H
#define SSVPLAYBACKLEASE_H

@class NSMutableArray, NSData, NSString, NSDate;
@protocol SSVPlaybackLeaseDelegate, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SSVPlaybackLeaseConfiguration.h"
#import "SSVFairPlaySubscriptionController.h"
#import "SSVPlaybackLeaseRequest.h"
#import "SSVRefreshSubscriptionRequest.h"
#import "SSVBarrierOperationQueue.h"
#import "SSURLBag.h"

@interface SSVPlaybackLease : NSObject {
    NSMutableArray *_assetOperations;
    NSData *_certificateData;
    NSString *_certificateURLBagKey;
    SSVPlaybackLeaseConfiguration *_configuration;
    id<SSVPlaybackLeaseDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;
    NSUInteger _kdMovieIdentifier;
    SSVPlaybackLeaseRequest *_lastKDLeaseRequest;
    int _leaseDidEndNotificationToken;
    NSDate *_leaseExpirationDate;
    NSInteger _leaseType;
    SSVRefreshSubscriptionRequest *_offlineSlotRequest;
    SSVBarrierOperationQueue *_operationQueue;
    BOOL _refreshesAutomatically;
    NSObject<OS_dispatch_source> *_refreshTimer;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSURLBag *_urlBag;
}


@property (copy) NSData *certificateData;
@property (copy) NSString *certificateURLBagKey;
@property (weak) NSObject<SSVPlaybackLeaseDelegate> *delegate;
@property BOOL refreshesAutomatically;


-(BOOL)_shouldEndLeaseForError:(id)arg0 returningEndReasonType:(*NSUInteger)arg1 ;
-(id)_addOperationWithRequest:(id)arg0 configurationURL:(id)arg1 completionBlock:(id)arg2 ;
-(id)_initSSVPlaybackLease;
-(id)init;
-(id)initWithLeaseConfiguration:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 ;
-(id)initWithURLBag:(id)arg0 leaseType:(NSInteger)arg1 ;
-(void)_cancelRefreshTimer;
-(void)_endLease;
-(void)_fireRefreshTimer;
-(void)_sendLeaseDidEndWithEndReasonType:(NSUInteger)arg0 ;
-(void)_startRefreshTimerIfNecessary;
-(void)_updateForLeaseResponse:(id)arg0 error:(id)arg1 ;
-(void)_updateWithLeaseResponseError:(id)arg0 ;
-(void)beginLeaseWithRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)cancelAllAssetRequests;
-(void)dealloc;
-(void)endLease;
-(void)getAssetWithRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)getCertificateDataWithCompletionBlock:(id)arg0 ;
-(void)preheatLeaseRequestsWithCompletionBlock:(id)arg0 ;
-(void)refreshLeaseWithRequest:(id)arg0 completionBlock:(id)arg1 ;
-(void)updateWithExternalLeaseResponseError:(id)arg0 ;


@end


#endif