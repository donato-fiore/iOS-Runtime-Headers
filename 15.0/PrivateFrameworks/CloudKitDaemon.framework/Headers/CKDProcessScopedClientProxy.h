// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPROCESSSCOPEDCLIENTPROXY_H
#define CKDPROCESSSCOPEDCLIENTPROXY_H

@class CKEntitlements, NSDate, NSDictionary, NSString;
@protocol CKXPCProcessScopedClient;

#import <Foundation/Foundation.h>

#import "CKDXPCConnection.h"

@interface CKDProcessScopedClientProxy : NSObject

@property (weak, nonatomic) CKDXPCConnection *clientConnection; // ivar: _clientConnection
@property (readonly, nonatomic) CKEntitlements *clientEntitlements; // ivar: _clientEntitlements
@property (nonatomic) unsigned int clientSDKVersion; // ivar: _clientSDKVersion
@property (retain, nonatomic) NSDate *connectionDate; // ivar: _connectionDate
@property (retain, nonatomic) NSDictionary *connectionEntitlements; // ivar: _connectionEntitlements
@property (nonatomic) NSInteger hasValidatedEntitlementsTernary; // ivar: _hasValidatedEntitlementsTernary
@property (nonatomic) BOOL isClientMainBundleAppleExecutable; // ivar: _isClientMainBundleAppleExecutable
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *procName; // ivar: _procName
@property (readonly, nonatomic) NSString *processBinaryName; // ivar: _processBinaryName
@property (retain) NSObject<CKXPCProcessScopedClient> *processScopedClientProxyCreator; // ivar: _processScopedClientProxyCreator
@property (nonatomic, getter=isSandboxed) BOOL sandboxed; // ivar: _sandboxed


-(BOOL)canOpenFileAtURL:(id)arg0 ;
-(BOOL)hasValidatedEntitlements;
-(BOOL)processIsAttached;
-(id)CKPropertiesDescription;
-(id)description;
-(id)getFileMetadataWithFileHandle:(id)arg0 openInfo:(id)arg1 error:(*id)arg2 ;
-(id)initWithClientConnection:(id)arg0 ;
-(id)issueSandboxExtensionForItem:(id)arg0 error:(*id)arg1 ;
-(void)_getProcessScopedClientProxyCreatorSynchronous:(BOOL)arg0 completionHandler:(id)arg1 ;
// -(void)getProcessScopedClientProxySynchronous:(BOOL)arg0 errorHandler:(id)arg1 clientProxyHandler:(unk)arg2  ;
-(void)handleSignificantIssueBehavior:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)noteSystemIsAvailable;
-(void)tearDown;


@end


#endif