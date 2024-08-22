// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCCONTROLLERREQUESTER_H
#define APPCCONTROLLERREQUESTER_H

@class NSString, NSError, APUnfairLock, NSMutableDictionary, NSUUID;
@protocol APControllerRequestCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "APControllerRequesterCoordinator.h"

@interface APPCControllerRequester : NSObject <APControllerRequestCoordinatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalid; // ivar: _invalid
@property (retain, nonatomic) NSError *lastError; // ivar: _lastError
@property (retain, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (copy, nonatomic) id *newPromotedContentsDeliveryBlock; // ivar: _newPromotedContentsDeliveryBlock
@property (retain, nonatomic) NSMutableDictionary *requestCompletionBlockByRequestID; // ivar: _requestCompletionBlockByRequestID
@property (retain, nonatomic) APControllerRequesterCoordinator *requestCoordinator; // ivar: _requestCoordinator
@property (retain, nonatomic) NSUUID *requesterID; // ivar: _requesterID
@property (readonly) Class superclass;


-(id)_preprocessHandler:(id)arg0 ;
-(id)initWithDeliveryBlock:(id)arg0 ;
-(id)proxyURL;
-(void)_invalidateAndfulfillAllRequestsWithError:(id)arg0 ;
-(void)connectionSevered;
-(void)contentResponses:(id)arg0 ;
-(void)endRequests;
-(void)handleCompletionOfRequest:(id)arg0 ;
-(void)preWarm:(id)arg0 ;
-(void)proxyURLWithCompletionHandler:(id)arg0 ;
-(void)requestPromotedContentOfTypes:(id)arg0 forContext:(id)arg1 completionHandler:(id)arg2 ;
// -(void)sendAndRankContent:(id)arg0 forContext:(id)arg1 placement:(NSUInteger)arg2 responseHandler:(id)arg3 completionHandler:(unk)arg4  ;


@end


#endif