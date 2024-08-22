// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATPROVISIONINGHANDLER_H
#define ATPROVISIONINGHANDLER_H

@class NSString;
@protocol ATMessageLinkObserver, ATMessageLinkRequestHandler;

#import <Foundation/Foundation.h>


@interface ATProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler>

 {
    int _endpointType;
    NSString *_expectedRequestCommand;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_paramsForRequest:(id)arg0 ;
-(id)initAsEndpointType:(int)arg0 ;
-(void)_processProvisioningRequest:(id)arg0 withParams:(id)arg1 onMessageLink:(id)arg2 withCompletion:(id)arg3 ;
-(void)_processProvisioningResponse:(id)arg0 toCommand:(id)arg1 onMessageLink:(id)arg2 ;
-(void)_processProvisioningResponse:(id)arg0 withParams:(id)arg1 onMessageLink:(id)arg2 withCompletion:(id)arg3 ;
-(void)_sendProvisioningRequest:(id)arg0 OnMessageLink:(id)arg1 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasOpened:(id)arg0 ;


@end


#endif