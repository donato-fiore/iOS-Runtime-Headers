// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPUBLICIDENTITYLOOKUPREQUEST_H
#define CKDPUBLICIDENTITYLOOKUPREQUEST_H

@class NSMutableArray, NSArray;


#import "CKDCacheBasedRequest.h"
#import "CKDDiscoverUserIdentitiesURLRequest.h"

@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest

@property (copy, nonatomic) id *lookupCompletionBlock; // ivar: _lookupCompletionBlock
@property (retain, nonatomic) NSMutableArray *lookupInfosToFetch; // ivar: _lookupInfosToFetch
@property (retain, nonatomic) NSArray *originalLookupInfosToFetch; // ivar: _originalLookupInfosToFetch
@property (copy, nonatomic) id *perLookupInfoProgressBlock; // ivar: _perLookupInfoProgressBlock
@property (retain, nonatomic) CKDDiscoverUserIdentitiesURLRequest *request; // ivar: _request


+(void)removeCacheForLookupInfos:(id)arg0 inCache:(id)arg1 ;
-(BOOL)_tryComplete;
-(id)CKPropertiesDescription;
-(id)_generateOONPrivateKeyWithError:(*id)arg0 ;
-(id)ckShortDescription;
-(id)description;
-(id)initWithOperation:(id)arg0 lookupInfos:(id)arg1 ;
-(id)spawnURLRequests;
-(void)_receivedUserIdentity:(id)arg0 forLookupInfo:(id)arg1 error:(id)arg2 ;
-(void)_saveUserIdentity:(id)arg0 forLookupInfo:(id)arg1 ;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;


@end


#endif