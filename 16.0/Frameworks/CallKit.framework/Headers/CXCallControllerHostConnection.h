// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLCONTROLLERHOSTCONNECTION_H
#define CXCALLCONTROLLERHOSTCONNECTION_H

@class NSString, NSURL, NSSet, NSXPCConnection;
@protocol CXCallControllerHostProtocol, CXCallControllerVendorProtocol, CXCallControllerHostConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallControllerHostConnection : NSObject <CXCallControllerHostProtocol, CXCallControllerVendorProtocol>



@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic, getter=isCallTransactionRequestPermitted) BOOL callTransactionRequestPermitted;
@property (copy, nonatomic) NSSet *capabilities; // ivar: _capabilities
@property (readonly, nonatomic, getter=isChannelTransactionRequestPermitted) BOOL channelTransactionRequestPermitted;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallControllerHostConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL entitledForPrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL entitledForPublicAPI;
@property (nonatomic) BOOL hasPushToTalkBackgroundMode; // ivar: _hasPushToTalkBackgroundMode
@property (nonatomic) BOOL hasVoIPBackgroundMode; // ivar: _hasVoIPBackgroundMode
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CXCallControllerVendorProtocol> *remoteObjectProxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConnection:(id)arg0 serialQueue:(id)arg1 ;
-(void)addOrUpdateCall:(id)arg0 ;
-(void)dealloc;
-(void)removeCall:(id)arg0 ;
-(void)requestCalls:(id)arg0 ;
-(void)requestTransaction:(id)arg0 reply:(id)arg1 ;


@end


#endif