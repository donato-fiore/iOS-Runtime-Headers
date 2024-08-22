// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPUBLICIDENTITYLOOKUPREQUEST_H
#define CKDPUBLICIDENTITYLOOKUPREQUEST_H

@class NSArray, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKDOperation.h"

@interface CKDPublicIdentityLookupRequest : NSObject {
    CKDOperation *_operation;
    NSArray *_lookupInfosToFetch;
    NSMutableArray *_missingLookupInfos;
}


@property (nonatomic) NSUInteger fetchBatchSize; // ivar: _fetchBatchSize
@property BOOL isCancelled; // ivar: _isCancelled
@property (copy, nonatomic) id *lookupCompletionBlock; // ivar: _lookupCompletionBlock
@property (copy, nonatomic) id *perLookupInfoProgressBlock; // ivar: _perLookupInfoProgressBlock


-(BOOL)_tryComplete;
-(id)CKPropertiesDescription;
-(id)_generateOONPrivateKeyWithError:(*id)arg0 ;
-(id)ckShortDescription;
-(id)description;
-(id)initWithOperation:(id)arg0 lookupInfos:(id)arg1 ;
-(id)spawnURLRequests;
-(void)_receivedUserIdentity:(id)arg0 forLookupInfo:(id)arg1 error:(id)arg2 ;
-(void)_saveUserIdentity:(id)arg0 forLookupInfo:(id)arg1 ;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;


@end


#endif