// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADXPCPROXYHELPER_H
#define CADXPCPROXYHELPER_H

@class NSXPCConnection, Protocol;
@protocol CADXPCProxyHelperDelegate;

#import <Foundation/Foundation.h>

#import "CADDatabaseInitializationOptions.h"

@interface CADXPCProxyHelper : NSObject {
    NSXPCConnection *_connection;
    Protocol *_protocol;
    BOOL _synchronous;
}


@property (weak, nonatomic) NSObject<CADXPCProxyHelperDelegate> *delegate; // ivar: _delegate
@property (retain) CADDatabaseInitializationOptions *initializationOptions; // ivar: _initializationOptions


-(BOOL)_shouldResendInitializationOptionsForInvocation:(id)arg0 ;
-(BOOL)_validateCADObjectIDsInInvocationArguments:(id)arg0 ;
-(NSInteger)replyBlockArgumentIndex:(id)arg0 ;
-(id)_getReplyBlockFromInvocation:(id)arg0 ;
-(id)_replaceReplyBlockInInvocation:(id)arg0 retryingAfterInitializationWithContextHolder:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg0 protocol:(id)arg1 synchronous:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_callReplyHandler:(id)arg0 ofInvocation:(id)arg1 withErrorCode:(NSInteger)arg2 ;
-(void)_tryInvokeWithGenerationValidation:(id)arg0 target:(id)arg1 replyBlock:(id)arg2 contextHolder:(id)arg3 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif