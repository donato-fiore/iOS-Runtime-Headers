// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSPURCHASEREQUEST_H
#define SSPURCHASEREQUEST_H

@class NSArray, NSMutableSet, NSString;
@protocol SSPurchaseManagerDelegate, SSXPCCoding, SSPurchaseRequestDelegate;


#import "SSRequest.h"
#import "SSPurchaseManager.h"

@interface SSPurchaseRequest : SSRequest <SSPurchaseManagerDelegate, SSXPCCoding>

 {
    NSArray *_purchases;
    id *_completionBlock;
    NSMutableSet *_openPurchaseIdentifiers;
    id *_purchaseBlock;
    id *_purchaseResponseBlock;
    SSPurchaseManager *_purchaseManager;
}


@property (nonatomic, getter=isBackgroundRequest) BOOL backgroundRequest; // ivar: _isBackgroundRequest
@property (nonatomic) BOOL createsDownloads; // ivar: _createsDownloads
@property (nonatomic) BOOL createsJobs; // ivar: _createsJobs
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSPurchaseRequestDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL needsAuthentication; // ivar: _needsAuthentication
@property (nonatomic, getter=isPlaybackRequest) BOOL playbackRequest; // ivar: _playbackRequest
@property (readonly) NSArray *purchases;
@property (nonatomic) BOOL shouldValidatePurchases; // ivar: _shouldValidatePurchases
@property (readonly) Class superclass;


-(BOOL)start;
-(id)_purchaseForUniqueIdentifier:(NSInteger)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithPurchases:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_addPurchasesToManager;
-(void)_finishPurchasesWithResponses:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)purchaseManager:(id)arg0 didFinishPurchasesWithResponses:(id)arg1 ;
-(void)startWithCompletionBlock:(id)arg0 ;
// -(void)startWithPurchaseBlock:(id)arg0 completionBlock:(unk)arg1  ;
// -(void)startWithPurchaseResponseBlock:(id)arg0 completionBlock:(unk)arg1  ;


@end


#endif