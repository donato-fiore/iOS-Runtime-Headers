// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOEXTENSIONSERVICECONNECTION_H
#define SOEXTENSIONSERVICECONNECTION_H

@class NSString, NSXPCListenerEndpoint, NSXPCConnection;
@protocol SORemoteExtensionServiceProtocol;

#import <Foundation/Foundation.h>


@interface SOExtensionServiceConnection : NSObject <SORemoteExtensionServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSXPCListenerEndpoint *serviceXpcEndpoint; // ivar: _serviceXpcEndpoint
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)_connectToService;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(void)beginAuthorizationWithCompletion:(id)arg0 ;


@end


#endif