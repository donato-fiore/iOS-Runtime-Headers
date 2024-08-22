// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPCCONTROLLERREQUESTER_H
#define APPCCONTROLLERREQUESTER_H

@class NSString, NSError, NSMutableDictionary, NSUUID;
@protocol APControllerReqestCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "APUnfairLock.h"
#import "APControllerRequesterCoordinator.h"

@interface APPCControllerRequester : NSObject <APControllerReqestCoordinatorDelegate>



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


+(id)proxyURL;
+(void)proxyURLWithCompletionHandler:(id)arg0 ;
-(id)initWithDeliveryBlock:(id)arg0 ;
-(void)_invalidateAndfulfillAllRequestsWithError:(id)arg0 ;
-(void)connectionSevered;
-(void)contentResponses:(id)arg0 ;
-(void)endRequests;
-(void)handleCompletionOfRequest:(id)arg0 ;
-(void)requestPromotedContentOfTypes:(id)arg0 forContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif