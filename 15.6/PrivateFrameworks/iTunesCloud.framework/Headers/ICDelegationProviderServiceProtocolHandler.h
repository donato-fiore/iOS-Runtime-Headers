// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONPROVIDERSERVICEPROTOCOLHANDLER_H
#define ICDELEGATIONPROVIDERSERVICEPROTOCOLHANDLER_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ICUserIdentityStore.h"
#import "ICRequestContext.h"

@interface ICDelegationProviderServiceProtocolHandler : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    ICUserIdentityStore *_identityStore;
    NSOperationQueue *_operationQueue;
    NSUInteger _nextSessionUniqueID;
    ICRequestContext *_requestContext;
}




-(NSUInteger)_nextSessionUniqueID;
-(id)initWithUserIdentityStore:(id)arg0 requestContext:(id)arg1 ;
-(void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg0 streamContexts:(id)arg1 completionHandler:(id)arg2 ;
-(void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg0 streamContexts:(id)arg1 replyHandler:(id)arg2 ;
-(void)getStartDelegationRequestForAccountIDs:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif