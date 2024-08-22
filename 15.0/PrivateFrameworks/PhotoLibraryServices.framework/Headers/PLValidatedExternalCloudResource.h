// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLVALIDATEDEXTERNALCLOUDRESOURCE_H
#define PLVALIDATEDEXTERNALCLOUDRESOURCE_H

@class NSString, NSDate;


#import "PLValidatedExternalResource.h"

@interface PLValidatedExternalCloudResource : PLValidatedExternalResource

@property (nonatomic) short cloudLocalState; // ivar: _cloudLocalState
@property (nonatomic) NSUInteger cplType; // ivar: _cplType
@property (retain, nonatomic) NSString *fingerprint; // ivar: _fingerprint
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate; // ivar: _lastOnDemandDownloadDate
@property (retain, nonatomic) NSDate *lastPrefetchDate; // ivar: _lastPrefetchDate
@property (retain, nonatomic) NSDate *masterDateCreated; // ivar: _masterDateCreated
@property (nonatomic) short prefetchCount; // ivar: _prefetchCount
@property (retain, nonatomic) NSDate *prunedAt; // ivar: _prunedAt
@property (nonatomic) short remoteAvailability; // ivar: _remoteAvailability
@property (nonatomic) NSUInteger sourceCplType; // ivar: _sourceCplType


-(BOOL)isEqualToValidatedExternalResource:(id)arg0 ;
-(NSUInteger)cplTypeWithAssetID:(id)arg0 ;
-(id)initWithCloudResource:(id)arg0 ;
-(id)initWithInternalResource:(id)arg0 ;


@end


#endif