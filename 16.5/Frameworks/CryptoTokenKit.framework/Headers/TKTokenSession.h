// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENSESSION_H
#define TKTOKENSESSION_H

@class LAContext, NSXPCConnection, NSNumber, NSString, NSDictionary;
@protocol TKTokenSessionDelegate, TKTokenSessionPrivateDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TKToken.h"

@interface TKTokenSession : NSObject

@property (readonly, nonatomic) LAContext *LAContext; // ivar: _LAContext
@property (readonly, nonatomic) NSXPCConnection *caller; // ivar: _caller
@property (retain, nonatomic) NSNumber *callerPID; // ivar: _callerPID
@property (nonatomic) ? creatorAuditToken; // ivar: _creatorAuditToken
@property (weak) NSObject<TKTokenSessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) id *keepAlive; // ivar: _keepAlive
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSObject<TKTokenSessionPrivateDelegate> *privateDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) TKToken *token; // ivar: _token


+(id)_localizedString:(id)arg0 value:(id)arg1 ;
-(BOOL)checkOperation:(NSInteger)arg0 usingKey:(id)arg1 algorithm:(id)arg2 parameters:(id)arg3 ;
-(id)errorWithResult:(id)arg0 operation:(id)arg1 forError:(id)arg2 ;
-(id)initWithToken:(id)arg0 ;
-(void)attestKey:(id)arg0 usingKey:(id)arg1 nonce:(id)arg2 reply:(id)arg3 ;
-(void)auditAuthOperation:(id)arg0 auditToken:(struct ? )arg1 success:(BOOL)arg2 ;
-(void)beginAuthForOperation:(NSInteger)arg0 constraint:(id)arg1 reply:(id)arg2 ;
-(void)beginRequest;
-(void)bumpKey:(id)arg0 reply:(id)arg1 ;
-(void)commitKey:(id)arg0 reply:(id)arg1 ;
-(void)createObjectWithAttributes:(id)arg0 reply:(id)arg1 ;
-(void)decryptData:(id)arg0 usingKey:(id)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(id)arg4 ;
-(void)deleteObject:(id)arg0 reply:(id)arg1 ;
-(void)endRequest;
-(void)evaluateAccessControl:(id)arg0 forOperation:(id)arg1 reply:(id)arg2 ;
-(void)evaluateAuthOperation:(id)arg0 tokenOperation:(NSInteger)arg1 reply:(id)arg2 ;
-(void)evaluateAuthOperation:(id)arg0 tokenOperation:(NSInteger)arg1 retry:(BOOL)arg2 reply:(id)arg3 ;
-(void)finalizeAuthOperation:(id)arg0 evaluatedAuthOperation:(id)arg1 reply:(id)arg2 ;
-(void)getAdvertisedItemsWithReply:(id)arg0 ;
-(void)getAttributesOfObject:(id)arg0 isCertificate:(BOOL)arg1 reply:(id)arg2 ;
-(void)objectID:(id)arg0 operation:(NSInteger)arg1 inputData:(id)arg2 algorithms:(id)arg3 parameters:(id)arg4 reply:(id)arg5 ;
-(void)performKeyExchangeWithPublicKey:(id)arg0 usingKey:(id)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(id)arg4 ;
-(void)signData:(id)arg0 usingKey:(id)arg1 algorithm:(id)arg2 reply:(id)arg3 ;
-(void)terminate;


@end


#endif