// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKTOKENDRIVERCONTEXT_H
#define TKTOKENDRIVERCONTEXT_H

@class NSXPCListenerEndpoint, NSString;
@protocol TKTokenDriverProtocol;


#import "TKTokenBaseContext.h"
#import "TKTokenConfigurationConnection.h"
#import "TKTokenDriver.h"

@interface TKTokenDriverContext : TKTokenBaseContext <TKTokenDriverProtocol>

 {
    TKTokenConfigurationConnection *_configurationConnection;
    id *_initialKeepAlive;
}


@property (readonly, nonatomic) TKTokenConfigurationConnection *configurationConnection;
@property (readonly, nonatomic) NSXPCListenerEndpoint *configurationEndpoint; // ivar: _configurationEndpoint
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TKTokenDriver *driver; // ivar: _driver
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat idleTimeout;
@property (readonly) Class superclass;


-(BOOL)startRequestWithError:(*id)arg0 ;
-(id)configurationForTokenID:(id)arg0 ;
-(void)acquireTokenWithInstanceID:(id)arg0 reply:(id)arg1 ;
-(void)acquireTokenWithSlot:(id)arg0 AID:(id)arg1 reply:(id)arg2 ;
-(void)auditAuthOperation:(id)arg0 auditToken:(struct ? )arg1 success:(BOOL)arg2 ;
-(void)configureWithReply:(id)arg0 ;
-(void)releaseTokenWithInstanceID:(id)arg0 reply:(id)arg1 ;
-(void)setup;


@end


#endif