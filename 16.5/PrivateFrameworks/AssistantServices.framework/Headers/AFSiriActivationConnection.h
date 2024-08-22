// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSIRIACTIVATIONCONNECTION_H
#define AFSIRIACTIVATIONCONNECTION_H

@class NSXPCConnection, NSString;
@protocol AFInvalidating, AFSiriActivationService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    NSInteger _servicePort;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_connection;
-(id)init;
-(id)initWithServicePort:(NSInteger)arg0 ;
-(void)_connectionInterrupted;
-(void)_connectionInvalidated;
-(void)_invalidate;
-(void)activateWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)deactivateForReason:(NSInteger)arg0 options:(NSUInteger)arg1 context:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;
-(void)handleContext:(id)arg0 completion:(id)arg1 ;
-(void)handleIntent:(id)arg0 inBackgroundAppWithBundleId:(id)arg1 reply:(id)arg2 ;
-(void)handleIntentForwardingAction:(id)arg0 inBackgroundApplicationWithBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)prewarmWithRequestInfo:(id)arg0 context:(id)arg1 completion:(id)arg2 ;


@end


#endif