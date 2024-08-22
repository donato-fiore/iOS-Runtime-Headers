// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDCACHEBASEDREQUEST_H
#define CKDCACHEBASEDREQUEST_H


#import <Foundation/Foundation.h>

#import "CKDKeyValueDiskCache.h"
#import "CKDPublicIdentityLookupService.h"
#import "CKDOperation.h"

@interface CKDCacheBasedRequest : NSObject

@property (weak, nonatomic) CKDKeyValueDiskCache *cache; // ivar: _cache
@property (nonatomic) NSUInteger fetchBatchSize; // ivar: _fetchBatchSize
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (weak, nonatomic) CKDPublicIdentityLookupService *lookupService; // ivar: _lookupService
@property (weak, nonatomic) CKDOperation *operation; // ivar: _operation


-(id)initWithOperation:(id)arg0 ;
-(id)spawnURLRequests;
-(void)cancel;
-(void)finishWithError:(id)arg0 ;
-(void)performRequest;


@end


#endif