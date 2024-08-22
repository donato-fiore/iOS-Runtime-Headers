// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXNETWORKEXTENSIONMESSAGECONTROLLERHOSTCONNECTION_H
#define CXNETWORKEXTENSIONMESSAGECONTROLLERHOSTCONNECTION_H

@class NSString, NSSet, NSXPCConnection;
@protocol CXNetworkExtensionMessageControllerHostProtocol, CXNetworkExtensionMessageControllerHostConnectionDelegate;

#import <Foundation/Foundation.h>


@interface CXNetworkExtensionMessageControllerHostConnection : NSObject <CXNetworkExtensionMessageControllerHostProtocol>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, copy, nonatomic) NSSet *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXNetworkExtensionMessageControllerHostConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)sendNetworkExtensionMessage:(id)arg0 forBundleIdentifier:(id)arg1 reply:(id)arg2 ;


@end


#endif