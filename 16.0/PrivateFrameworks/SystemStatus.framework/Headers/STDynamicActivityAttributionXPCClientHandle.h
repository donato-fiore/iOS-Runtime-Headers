// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONXPCCLIENTHANDLE_H
#define STDYNAMICACTIVITYATTRIBUTIONXPCCLIENTHANDLE_H

@class NSXPCConnection, NSString;
@protocol STDynamicActivityAttributionClientHandle, STDynamicAttributionXPCServerProtocol, STDynamicActivityAttributionServerHandle;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicActivityAttributionClientHandle, STDynamicAttributionXPCServerProtocol>

 {
    ? _auditToken;
}


@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<STDynamicActivityAttributionServerHandle> *serverHandle; // ivar: _serverHandle
@property (readonly) Class superclass;


-(id)initWithXPCConnection:(id)arg0 serverHandle:(id)arg1 ;
-(struct ? )auditToken;
-(void)currentAttributionsDidChange:(id)arg0 ;
-(void)setCurrentAttributionKey:(id)arg0 application:(id)arg1 reply:(id)arg2 ;
-(void)setCurrentAttributionLocalizableKey:(id)arg0 maskingClientAuditToken:(struct ? )arg1 reply:(id)arg2 ;
-(void)setCurrentAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 reply:(id)arg2 ;
-(void)setCurrentAttributionWebsiteString:(id)arg0 maskingClientAuditToken:(struct ? )arg1 reply:(id)arg2 ;
-(void)subscribeToUpdates;


@end


#endif