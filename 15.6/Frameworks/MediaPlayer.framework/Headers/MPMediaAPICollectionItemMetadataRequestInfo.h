// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMEDIAAPICOLLECTIONITEMMETADATAREQUESTINFO_H
#define MPMEDIAAPICOLLECTIONITEMMETADATAREQUESTINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MPMediaAPICollectionItemMetadataRequestInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *collectionItemRequests; // ivar: _collectionItemRequests
@property (readonly, copy, nonatomic) NSArray *collectionRequests; // ivar: _collectionRequests
@property (readonly, copy, nonatomic) NSArray *tokenRenewalRequests; // ivar: _tokenRenewalRequests
@property (readonly, nonatomic) NSUInteger totalRequestItemCount; // ivar: _totalRequestItemCount


-(id)initWithMediaAPICollectionItemMetadataRequests:(id)arg0 collectionMetadataRequest:(id)arg1 authTokenRenewalRequests:(id)arg2 totalItemRequestCount:(NSUInteger)arg3 ;


@end


#endif