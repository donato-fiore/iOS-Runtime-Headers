// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTOREASSETINFOPLAYBACKCACHEREQUEST_H
#define MPSTOREASSETINFOPLAYBACKCACHEREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPStoreAssetInfoPlaybackCacheRequest : NSObject <NSCopying>



@property (nonatomic) NSUInteger accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *cloudUniversalLibraryID; // ivar: _cloudUniversalLibraryID
@property (nonatomic) NSUInteger delegatedAccountID; // ivar: _delegatedAccountID
@property (copy, nonatomic) NSString *redownloadParameters; // ivar: _redownloadParameters
@property (nonatomic) NSInteger requestType; // ivar: _requestType
@property (nonatomic) NSUInteger storeCloudID; // ivar: _storeCloudID
@property (nonatomic) NSInteger storePurchasedAdamID; // ivar: _storePurchasedAdamID
@property (nonatomic) NSInteger storeRadioAdamID; // ivar: _storeRadioAdamID
@property (nonatomic) NSInteger storeSubscriptionAdamID; // ivar: _storeSubscriptionAdamID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif