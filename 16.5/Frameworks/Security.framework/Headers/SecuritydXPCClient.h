// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECURITYDXPCCLIENT_H
#define SECURITYDXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol SecuritydXPCClientInterface;

#import <Foundation/Foundation.h>


@interface SecuritydXPCClient : NSObject <SecuritydXPCClientInterface>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)configureSecuritydXPCProtocol:(id)arg0 ;
-(id)init;
-(id)initTargetingSession:(int)arg0 ;
-(id)protocolWithSync:(BOOL)arg0 errorHandler:(id)arg1 ;
-(void)dealloc;


@end


#endif