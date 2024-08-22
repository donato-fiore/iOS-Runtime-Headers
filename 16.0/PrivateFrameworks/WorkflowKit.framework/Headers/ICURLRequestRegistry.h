// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICURLREQUESTREGISTRY_H
#define ICURLREQUESTREGISTRY_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICURLRequestRegistry : NSObject

@property (retain, nonatomic) NSMutableArray *activeRequests; // ivar: _activeRequests
@property (retain, nonatomic) NSMutableDictionary *requestHandlers; // ivar: _requestHandlers


+(id)sharedRegistry;
-(id)handlerForIncomingRequestWithAction:(SEL)arg0 scheme:(id)arg1 ;
-(id)popActiveRequest;
-(id)popRequest:(id)arg0 ;
-(id)popRequestWithUUID:(id)arg0 ;
// -(void)registerHandler:(id)arg0 forIncomingRequestsWithAction:(unk)arg1 scheme:(id)arg2  ;
-(void)registerOutgoingRequest:(id)arg0 ;
-(void)removeHandlerForIncomingRequestsWithAction:(id)arg0 scheme:(id)arg1 ;


@end


#endif