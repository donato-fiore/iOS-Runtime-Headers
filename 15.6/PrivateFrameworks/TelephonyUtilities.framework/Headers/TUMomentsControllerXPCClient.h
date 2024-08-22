// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUMOMENTSCONTROLLERXPCCLIENT_H
#define TUMOMENTSCONTROLLERXPCCLIENT_H

@class NSString, NSXPCConnection;
@protocol TUMomentsControllerXPCClient, TUMomentsControllerDataSource, TUMomentsControllerDataSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUMomentsControllerXPCClient : NSObject <TUMomentsControllerXPCClient, TUMomentsControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TUMomentsControllerDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int processIdentifier;
@property (readonly, copy, nonatomic) NSString *processName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) int token; // ivar: _token
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)asynchronousServer;
+(id)momentsControllerClientXPCInterface;
+(id)momentsControllerServerXPCInterface;
+(id)synchronousServer;
+(void)setAsynchronousServer:(id)arg0 ;
+(void)setSynchronousServer:(id)arg0 ;
-(id)init;
-(id)processBundleIdentifier;
-(id)serverWithErrorHandler:(id)arg0 ;
-(id)synchronousServerWithErrorHandler:(id)arg0 ;
-(void)_registerConnection;
-(void)dealloc;
-(void)didReceiveLocallyRequestedMomentDescriptor:(id)arg0 ;
-(void)didUpdateCapabilities:(id)arg0 forVideoStreamToken:(NSInteger)arg1 ;
-(void)endRequestWithTransactionID:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)registerStreamToken:(NSInteger)arg0 requesterID:(id)arg1 remoteIDSDestinations:(id)arg2 remoteMomentsAvailable:(BOOL)arg3 completion:(id)arg4 ;
-(void)requestSandboxExtensionForURL:(id)arg0 reply:(id)arg1 ;
-(void)startRequestWithMediaType:(int)arg0 forStreamToken:(NSInteger)arg1 requesteeID:(id)arg2 completion:(id)arg3 ;
-(void)unregisterStreamToken:(NSInteger)arg0 completion:(id)arg1 ;
-(void)willCaptureRemoteRequestFromRequesterID:(id)arg0 ;


@end


#endif