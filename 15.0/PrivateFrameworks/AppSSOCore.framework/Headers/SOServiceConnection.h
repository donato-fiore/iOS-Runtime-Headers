// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOSERVICECONNECTION_H
#define SOSERVICECONNECTION_H

@class NSString, NSXPCConnection;
@protocol SOServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SOServiceConnection : NSObject <SOServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)_connectToService;
-(id)_doConnectWithOptions:(NSUInteger)arg0 ;
-(id)initWithQueue:(id)arg0 ;
-(void)beginAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)cancelAuthorizationWithCompletion:(id)arg0 ;
-(void)configurationWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)debugHintsWithCompletion:(id)arg0 ;
-(void)finishAuthorizationWithCompletion:(id)arg0 ;
-(void)getAuthorizationHintsWithURL:(id)arg0 responseCode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)isExtensionProcessWithAuditToken:(struct ? )arg0 completion:(id)arg1 ;
-(void)performAuthorizationWithRequestParameters:(id)arg0 completion:(id)arg1 ;
-(void)realmsWithCompletion:(id)arg0 ;


@end


#endif