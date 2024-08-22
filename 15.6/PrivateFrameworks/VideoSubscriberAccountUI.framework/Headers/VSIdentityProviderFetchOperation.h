// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSIDENTITYPROVIDERFETCHOPERATION_H
#define VSIDENTITYPROVIDERFETCHOPERATION_H

@class VSAsyncOperation, VSAuditToken, NSString, NSOperationQueue, VSOptional;



@interface VSIdentityProviderFetchOperation : VSAsyncOperation

@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (nonatomic) BOOL fetchFromStoreOnly; // ivar: _fetchFromStoreOnly
@property (copy, nonatomic) NSString *identityProviderID; // ivar: _identityProviderID
@property (readonly, copy, nonatomic) NSString *identityProviderUniqueID; // ivar: _identityProviderUniqueID
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)_fetchAllOperation;
-(id)init;
-(id)initWithIdentityProviderID:(id)arg0 ;
-(id)initWithIdentityProviderUniqueID:(id)arg0 ;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif