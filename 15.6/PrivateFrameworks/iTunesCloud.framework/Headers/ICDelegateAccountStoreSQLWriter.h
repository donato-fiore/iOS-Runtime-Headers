// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATEACCOUNTSTORESQLWRITER_H
#define ICDELEGATEACCOUNTSTORESQLWRITER_H

@class NSString;
@protocol ICDelegateAccountStoreWriter;

#import <Foundation/Foundation.h>

#import "ICSQLiteConnection.h"

@interface ICDelegateAccountStoreSQLWriter : NSObject <ICDelegateAccountStoreWriter>

 {
    ICSQLiteConnection *_connection;
    BOOL _isValid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_removeAccountForIdentityKey:(id)arg0 ;
-(BOOL)_removeTokenForIdentityKey:(id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)_setToken:(id)arg0 forIdentityKey:(id)arg1 ;
-(void)addDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)invalidate;
-(void)removeAllTokensWithCompletionHandler:(id)arg0 ;
-(void)removeDelegationUUIDs:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokenForUserIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeTokensExpiringBeforeDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)setIdentityProperties:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;
-(void)setToken:(id)arg0 forUserIdentity:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif