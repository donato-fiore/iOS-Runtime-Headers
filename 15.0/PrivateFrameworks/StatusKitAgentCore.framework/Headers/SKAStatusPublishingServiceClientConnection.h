// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKASTATUSPUBLISHINGSERVICECLIENTCONNECTION_H
#define SKASTATUSPUBLISHINGSERVICECLIENTCONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface SKAStatusPublishingServiceClientConnection : NSObject

@property (readonly) int processIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(BOOL)_connection:(id)arg0 isEntitledForPublishingWithStatusTypeIdentifier:(id)arg1 ;
+(BOOL)clientIsEntitledForAtLeastOnePublishingServiceType:(id)arg0 ;
+(id)logger;
-(BOOL)clientIsEntitledForPublishingWithStatusTypeIdentifier:(id)arg0 ;
-(id)asynchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(id)description;
-(id)initWithXPCConnection:(id)arg0 queue:(id)arg1 delegate:(id)arg2 ;
-(id)synchronousRemoteDaemonDelegateWithErrorHandler:(id)arg0 ;
-(void)dealloc;


@end


#endif