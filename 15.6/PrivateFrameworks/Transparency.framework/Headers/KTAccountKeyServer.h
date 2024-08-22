// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KTACCOUNTKEYSERVER_H
#define KTACCOUNTKEYSERVER_H

@class NSDate, NSString, NSDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface KTAccountKeyServer : NSObject

@property *_PCSIdentityData _pcsIdentity; // ivar: __pcsIdentity
@property (retain) NSDate *_pcsIdentityCachedTime; // ivar: __pcsIdentityCachedTime
@property (readonly) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain) NSObject<OS_dispatch_group> *creationGroup; // ivar: _creationGroup
@property (retain) NSObject<OS_dispatch_queue> *creationQueue; // ivar: _creationQueue
@property os_unfair_lock_s identityCacheLock; // ivar: _identityCacheLock
@property *int notifyToken; // ivar: _notifyToken
@property BOOL outstandingCreationSignal; // ivar: _outstandingCreationSignal
@property (readonly) NSDictionary *pcsOptions;


+(BOOL)verifyData:(id)arg0 signature:(id)arg1 accountPublicKeyInfo:(id)arg2 error:(*id)arg3 ;
+(id)publicKeyInfoFromIdentity:(struct _PCSIdentityData *)arg0 error:(*id)arg1 ;
+(struct _PCSPublicIdentityData *)decodePublicKeyInfo:(id)arg0 error:(*id)arg1 ;
-(BOOL)isAccountIdentity:(id)arg0 error:(*id)arg1 ;
-(id)initWithApplication:(id)arg0 ;
-(struct _PCSIdentityData *)copyCachedPCSIdentity;
-(struct _PCSIdentitySetData *)copyPCSIdentitySet:(*id)arg0 ;
-(struct __CFString *)service;
-(void)cachePCSIdentity:(struct _PCSIdentityData *)arg0 ;
-(void)clearCachedPCSIdentity;
-(void)createIdentityForSet:(struct _PCSIdentitySetData *)arg0 roll:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)dealloc;
-(void)getPCSIdentity:(id)arg0 ;
-(void)rollKey:(id)arg0 ;
-(void)signData:(id)arg0 completionBlock:(id)arg1 ;


@end


#endif