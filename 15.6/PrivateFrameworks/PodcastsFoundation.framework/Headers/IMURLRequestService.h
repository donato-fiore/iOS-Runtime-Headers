// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMURLREQUESTSERVICE_H
#define IMURLREQUESTSERVICE_H

@class NSURLRequest;
@protocol NSURLSessionDelegate><AMSURLProtocolDelegate;


#import "IMBaseStoreService.h"

@interface IMURLRequestService : IMBaseStoreService

@property (retain, nonatomic) NSURLRequest *mutableRequest; // ivar: _mutableRequest
@property (retain, nonatomic) NSObject<NSURLSessionDelegate><AMSURLProtocolDelegate> *urlSessionDelegate;


-(void)performRequest:(id)arg0 ;


@end


#endif