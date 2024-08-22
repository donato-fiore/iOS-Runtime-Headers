// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSHELPERLIBRARY_H
#define STSHELPERLIBRARY_H

@class NSXPCConnection;
@protocol STSHelperCallbackProtocol, STSHelperLibraryDelegateProtocol;

#import <Foundation/Foundation.h>

#import "STSRemoteTransceiverProxyListener.h"
#import "STSUnifiedAccessHandler.h"

@interface STSHelperLibrary : NSObject <STSHelperCallbackProtocol>



@property (weak, nonatomic) NSObject<STSHelperLibraryDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger handoverConfig; // ivar: _handoverConfig
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *nfcReaderListener; // ivar: _nfcReaderListener
@property (retain, nonatomic) STSRemoteTransceiverProxyListener *seProxyListener; // ivar: _seProxyListener
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) STSUnifiedAccessHandler *unifiedAccessHandler; // ivar: _unifiedAccessHandler
@property (retain, nonatomic) NSXPCConnection *xpc; // ivar: _xpc


-(BOOL)setupConnectWithXPCService;
-(id)_stsHelperCallbackInterface;
-(id)_stsHelperInterface;
-(id)asynchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)connectToNotificationListener:(id)arg0 ;
-(id)init;
-(id)signalUnifiedAccessStepUpWithEventDictionary:(id)arg0 ;
-(id)startBTDeviceWithServiceUUID:(id)arg0 peripheralAddress:(id)arg1 centralRole:(BOOL)arg2 ;
-(id)startBTReaderWithServiceUUID:(id)arg0 peripheralAddress:(id)arg1 centralRole:(BOOL)arg2 ;
-(id)startISO18013WithConnectionHandoverConfiguration:(NSUInteger)arg0 type:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)startSEProxyListener:(id)arg0 parameters:(id)arg1 workQueue:(id)arg2 ;
-(id)startWifiPublisherWithServiceName:(id)arg0 datapathPMK:(id)arg1 datapathPMKID:(id)arg2 ;
-(id)startWifiSubscriberWithServiceName:(id)arg0 datapathPMK:(id)arg1 datapathPMKID:(id)arg2 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)connectRemoteWithConnectionHandoverSelect:(id)arg0 callbackQueue:(id)arg1 responseHandler:(id)arg2 ;
-(void)didInvalidateXPC:(BOOL)arg0 connection:(id)arg1 ;
-(void)generateConnectionHandoverRequestWithQueue:(id)arg0 responseHandler:(id)arg1 ;
-(void)invalidate;
-(void)processConnectionHandoverRequest:(id)arg0 callbackQueue:(id)arg1 responseHandler:(id)arg2 ;
-(void)processConnectionHandoverRequestData:(id)arg0 callbackQueue:(id)arg1 responseHandler:(id)arg2 ;
-(void)processUnifiedAccessStepupAPDU:(id)arg0 callbackQueue:(id)arg1 responseHandler:(id)arg2 ;
-(void)restartNFCReaderDiscovery;
-(void)stopSEProxyListener;


@end


#endif