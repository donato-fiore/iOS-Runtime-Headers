// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAP2COAPCLIENT_H
#define HAP2COAPCLIENT_H

@class NSMutableDictionary, NSError, NSMutableSet, NSMutableOrderedSet, NSThread, NSString;
@protocol HAP2CoAPIOConsumer, HAP2CoAPClient, OS_dispatch_queue, HAP2CoAPClientDelegate;


#import "HAP2LoggingObject.h"
#import "HAP2PropertyLock.h"

@interface HAP2CoAPClient : HAP2LoggingObject <HAP2CoAPIOConsumer, HAP2CoAPClient>

 {
    coap_address_t _address;
    BOOL _registered;
    id *_openCompletion;
    id *_closeCompletion;
    NSMutableDictionary *_responseCompletionsByToken;
    NSError *_closeError;
    NSMutableSet *_activeTokens;
    NSMutableOrderedSet *_previousResponseMessageIDs;
    NSMutableOrderedSet *_previousEventMessageIDs;
    HAP2PropertyLock *_propertyLock;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSThread *_ioThread;
    *coap_resource_t _notificationResource;
}


@property (nonatomic) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2CoAPClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialACKTimeout; // ivar: _initialACKTimeout
@property (nonatomic) NSUInteger maxTransmitAttempts; // ivar: _maxTransmitAttempts
@property (readonly) Class superclass;


-(?)didFailToSendMessageInSession:(?)arg0 messageID:(?)arg1 messagereason;
-(?)didReceivePongInSessionmessageID;
-(?)didReceiveRequestInSession:(?)arg0 messageID:(?)arg1 requestresponse;
-(?)didReceiveResponseInSession:(?)arg0 messageIDresponse;
-(id)initWithIPAddress:(id)arg0 ;
-(id)initWithIPAddress:(id)arg0 port:(unsigned short)arg1 ;
-(id)initWithIPAddress:(id)arg0 port:(unsigned short)arg1 maxTransmitAttempts:(NSUInteger)arg2 initialACKTimeout:(CGFloat)arg3 ;
-(id)initWithIPAddress:(id)arg0 port:(unsigned short)arg1 maxTransmitAttempts:(NSUInteger)arg2 initialACKTimeout:(CGFloat)arg3 workQueue:(id)arg4 ;
-(id)initWithSocketAddress:(struct sockaddr *)arg0 ;
-(id)initWithSocketAddress:(struct sockaddr *)arg0 maxTransmitAttempts:(NSUInteger)arg1 initialACKTimeout:(CGFloat)arg2 ;
-(struct coap_session_t *)shouldOpenSessionWithContext:(struct coap_context_t *)arg0 ;
-(void)alterMaxTransmitAttempts:(NSUInteger)arg0 initialACKTimeout:(CGFloat)arg1 ;
-(void)closeWithError:(id)arg0 completion:(id)arg1 ;
-(void)didCloseSession;
-(void)didRegister;
-(void)didUnregister;
-(void)openWithCompletion:(id)arg0 ;
-(void)sendRequestWithMethod:(unsigned char)arg0 path:(id)arg1 payload:(id)arg2 completion:(id)arg3 ;


@end


#endif