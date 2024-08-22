// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYSERVERTRANSPORTBASE_H
#define HAP2ACCESSORYSERVERTRANSPORTBASE_H

@class NSString;
@protocol HAP2AccessoryServerTransportCommon, OS_dispatch_queue;


#import "HAP2LoggingObject.h"
#import "HAP2AccessoryServerTransportBaseOperationClose.h"
#import "HAP2SerializedOperationQueue.h"
#import "HAP2PropertyLock.h"

@interface HAP2AccessoryServerTransportBase : HAP2LoggingObject <HAP2AccessoryServerTransportCommon>

 {
    NSUInteger _internalState;
    HAP2AccessoryServerTransportBaseOperationClose *_queuedCloseOperation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maxRequestTimeout; // ivar: _maxRequestTimeout
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock; // ivar: _propertyLock
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportCommon> *underlyingTransport;


+(id)new;
-(BOOL)mergeWithNewTransport:(id)arg0 ;
-(NSUInteger)protocolFeaturesForVersion:(id)arg0 ;
-(id)endpointForCharacteristic:(id)arg0 ;
-(id)endpointForCharacteristics:(id)arg0 ;
-(id)init;
-(id)initWithOperationQueue:(id)arg0 delegateQueue:(id)arg1 ;
-(id)mimeTypeForCharacteristicRequests;
-(id)mimeTypeForWellKnownEndpoint:(NSUInteger)arg0 ;
-(id)wellKnownEndpoint:(NSUInteger)arg0 ;
-(void)closeWithError:(id)arg0 completion:(id)arg1 ;
-(void)didChangeStateWithError:(id)arg0 ;
-(void)didDisconnectWithError:(id)arg0 ;
-(void)doCloseWithError:(id)arg0 completion:(id)arg1 ;
-(void)doOpenWithCompletion:(id)arg0 ;
-(void)doSendRequest:(id)arg0 completion:(id)arg1 ;
-(void)doUpdateMaxRequestTimeout:(CGFloat)arg0 ;
-(void)openWithCompletion:(id)arg0 ;
-(void)sendRequest:(id)arg0 completion:(id)arg1 ;
-(void)updateMaxRequestTimeout:(CGFloat)arg0 ;


@end


#endif