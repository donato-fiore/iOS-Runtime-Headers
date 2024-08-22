// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATEACCOUNTSTORE_H
#define ICDELEGATEACCOUNTSTORE_H

@class NSMutableArray, NSString;
@protocol ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter;

#import <Foundation/Foundation.h>

#import "ICDelegateAccountStoreOptions.h"
#import "ICDelegateAccountStore.h"
#import "ICDelegateAccountStoreXPCWriter.h"

@interface ICDelegateAccountStore : NSObject <ICSQLiteConnectionDelegate, ICDelegateAccountStoreWriter>

 {
    NSMutableArray *_connectionPool;
    BOOL _isOpen;
    os_unfair_lock_s _lock;
    ICDelegateAccountStoreOptions *_options;
    ICDelegateAccountStore *_strongSelf;
    ICDelegateAccountStoreXPCWriter *_xpcWriter;
}


@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)openWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_resetCorruptionUsingSQL;
-(BOOL)connectionNeedsResetForCorruption:(id)arg0 ;
-(id)_initWithValidatedOptions:(id)arg0 ;
-(id)_popConnection;
-(id)initSingleWriterWithOptions:(id)arg0 error:(*id)arg1 ;
-(void)_openWithXPCWriter:(id)arg0 completionHandler:(id)arg1 ;
-(void)_postDidChangeNotification;
-(void)_recycleConnection:(id)arg0 ;
-(void)_resetCorruptionUsingXPC;
-(void)_writeSQLUsingBlock:(id)arg0 ;
-(void)_writeUsingBlock:(id)arg0 ;
-(void)_writeXPCUsingBlock:(id)arg0 ;
-(void)addDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)close;
-(void)readUsingBlock:(id)arg0 ;
-(void)removeAllTokensWithCompletionHandler:(id)arg0 ;
-(void)removeDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokenForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokensExpiringBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)setIdentityProperties:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)setToken:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif