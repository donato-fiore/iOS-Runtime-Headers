// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIIDSAVAILABILITYPROVIDER_H
#define CNUIIDSAVAILABILITYPROVIDER_H

@class NSString, NSArray;
@protocol CNUIIDSAvailabilityProvider, CNUIIDSIDQueryControllerWrapper, CNScheduler;

#import <Foundation/Foundation.h>

#import "CNUIDSHandleAvailabilityCache.h"

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *expanseRequests; // ivar: _expanseRequests
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *faceTimeRequests; // ivar: _faceTimeRequests
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNUIDSHandleAvailabilityCache *iMessageRequests; // ivar: _iMessageRequests
@property (retain, nonatomic) NSObject<CNUIIDSIDQueryControllerWrapper> *queryControllerWrapper; // ivar: _queryControllerWrapper
@property (retain, nonatomic) NSArray *requestFutures; // ivar: _requestFutures
@property (retain, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly) Class superclass;


+(id)makeExpanseRequestsCache;
+(id)makeFaceTimeRequestsCache;
+(id)makeIMessageRequestsCache;
-(id)cacheForService:(NSInteger)arg0 ;
-(id)init;
-(id)initWithQueryControllerWrapper:(id)arg0 ;
-(id)validateHandles:(id)arg0 forService:(NSInteger)arg1 schedulerProvider:(id)arg2 ;
-(id)validateHandlesForExpanse:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)validateHandlesForFaceTime:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)validateHandlesForIMessage:(id)arg0 schedulerProvider:(id)arg1 ;
-(void)startRequestForCacheMisses:(id)arg0 service:(NSInteger)arg1 scheduler:(id)arg2 ;


@end


#endif