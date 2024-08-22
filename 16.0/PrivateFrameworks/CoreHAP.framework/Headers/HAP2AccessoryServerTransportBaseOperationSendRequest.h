// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTBASEOPERATIONSENDREQUEST_H
#define HAP2ACCESSORYSERVERTRANSPORTBASEOPERATIONSENDREQUEST_H

@class NSData;


#import "HAP2AccessoryServerTransportBaseOperation.h"
#import "HAP2AccessoryServerTransportRequest.h"

@interface HAP2AccessoryServerTransportBaseOperationSendRequest : HAP2AccessoryServerTransportBaseOperation {
    HAP2AccessoryServerTransportRequest *_request;
    NSData *_response;
    id *_clientCompletion;
}




-(id)initWithTransport:(id)arg0 request:(id)arg1 completion:(id)arg2 ;
-(void)main;


@end


#endif