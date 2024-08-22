// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXNETWORKEXTENSIONMESSAGECONTROLLERXPCCLIENT_H
#define CXNETWORKEXTENSIONMESSAGECONTROLLERXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol CXNetworkExtensionMessageControllerDataSource;

#import <Foundation/Foundation.h>


@interface CXNetworkExtensionMessageControllerXPCClient : NSObject <CXNetworkExtensionMessageControllerDataSource>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)sendNetworkExtensionMessage:(id)arg0 forBundleIdentifier:(id)arg1 completion:(id)arg2 ;


@end


#endif