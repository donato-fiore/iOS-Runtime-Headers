// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIVCLIENT_H
#define DIVCLIENT_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol DIVerificationClientSideProtocol, DIVerificationServerSideProtocol;

#import <Foundation/Foundation.h>

#import "DIVerificationSessionContext.h"

@interface DIVClient : NSObject <DIVerificationClientSideProtocol>

 {
    NSUInteger _state;
    NSXPCConnection *_serverConnection;
    DIVerificationSessionContext *_context;
    id<DIVerificationServerSideProtocol> *_remoteObjectProxy;
    NSMutableSet *_disconnectionCallbacks;
    BOOL _isDisconnected;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createDaemonDisconnectedError;
-(id)init;
-(void)concludeVerification:(id)arg0 ;
-(void)configure:(id)arg0 completion:(id)arg1 ;
-(void)confirmVerificationCompletedWithFeedback:(id)arg0 ;
-(void)dealloc;
-(void)getVerificationResultWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)performVerificationWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)shareVerificationResultWithOptions:(id)arg0 completion:(id)arg1 ;


@end


#endif